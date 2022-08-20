% Purpose: For a 55 ft tv mounted 140 feet above the ground determine the position from where you are able to watch the tv with the largest angle.
% 
% Input: Everything is already given.
% 
% output: Position and angle from which the visibility angle is the greatest.
% 
% Algorith: Create an array for the distance from 30-400 in steps of 0.25
% Find the angle to the top of the tv, for each distance.
% Find the angle to the bottom of the tv, for each distance.
% Find the difference of both angles, and assign it to an array.
% find the maximun and the index of where the maximum is in the created array.
% Use the index to find the position of where the maximum occurs.

distance = (30:0.25:400);

big_angle = atand(195./distance);

small_angle = atand(140 ./ distance);

angle = big_angle - small_angle;

[max_angle, index] = max (angle);

position = ((index-1) * 0.250) + 30

max_angle 


% Purpose: Suppose a can of soda was removed from a refrigerator at a temperature of 38 degrees 
% and placed in a car sitting in the sun that maintains an interior temperature of 125 degrees. 
% Calculate the temperature of the can of soda for each time (from 0-3.5 hours in steps of 0.1), 
% to the nearest integer if k is 0.42. Plot the time vs temp. graph using linear scales for both axes; 
% a log scale for the y axis and a linear scale for the x axis; a log scale for the x axis and a 
% linear scale for the y axis; and a log scale for both axes.

% Input: Everything is already given, need the value of k, Temp object in farenheight, temp car in farenheight.
% 
% output: The temperature of the can for every time from 0-3.5 hours in steps of
% 0.1.
% 
% Algorith: Create an array for the time from 0-3.5 hours in steps of 0.1.
% Use the formula T = Ts+ (To�Ts)e^-kt to find temperature for every time.
% Store the time and temperature values in a 2d array. 
% Create a graph with x and y in linear scale.
% Create a graph with a log scale for the y axis and a linear scale for the x axis.
% Create a graph with a log scale for the x axis and a linear scale for the y axis.
% And one with log scale for both axes.


% None of the graph forms a perfect straight line.

time = linspace (0, 3.5, 36);

temperature = round(125 + (38 - 125) * exp (-0.42 .* time));

format short g
table = [round(temperature, 0); time]'

subplot(2, 2, 1)
plot (time, temperature)
title ('time vs temperature')
xlabel ('time')
ylabel ('temperature')

subplot(2, 2, 2)
semilogx (time, temperature)
title ('time vs temperature (log x axis)')
xlabel ('logarithmic time')
ylabel ('temperature')

subplot(2, 2, 3)
semilogy (time, temperature)
title ('time vs temperature (log y axis)')
xlabel ('time')
ylabel ('logarithmic temperature')

subplot(2, 2, 4)
loglog (time, temperature)
title ('time vs temperature (log axes)')
xlabel ('logarithmic time')
ylabel ('logarithmic temperature')


% Input: Ask the user the type of conversion he/she wants to make. Ask the user the value to be converted.
% 
% Output: The user conversion of her given English unit with the actual metric unit.
% 
% Algorithm: Ask the user the what type of conversion he/she would like to convert: inches to centimeters, 
% quarts to liters, pounds to kilograms, miles to kilometers, or ounces to grams. Once he states the 
% conversion ask the quantity to be converted. If the quantity is less than 0 make him re-enter a value, 
% and a message telling him that negative numbers are invalid. If he chose inches to centimeters: 
% multiply by 2.54. If he chose quarts to liters: multiply by 0.95. If he chose pounds to kilograms: multiply 
% by 0.45. If he chose miles to kilometers: multiply by 1.61. If he chose ounces to grams: multiply by 28.35. 
% Then output the multiplication value.
% 
% Test Data: ounces to grams, 8 ounces, 226.8 grams 

letter = input ('Select Conversion by typing letter: \nA for inches to Centimeters, B for Quarts to Liters, C for Pounds to Kilograms, D for Miles to Kilometers, e for Ounces to Grams: ', 's');

value = input ('Please enter value to be converted: ');

while value < 0
value = input ('Invalid Value, please enter a positive number: ')
end


if letter == 'a' || letter == 'A'
centimeters = value * 2.54;
fprintf ('%.3f inches is equal to %.3f centimeters \n \n', value, centimeters)

elseif letter == 'b' || letter == 'B'
liters = value * 0.95;
fprintf ('%.3f quarts is equal to %.3f liters\n \n', value, liters)

elseif letter == 'C' || letter == 'c'
kilograms = value * 0.45;
fprintf ('%.3f pounds is equal to %.3f kilograms\n \n', value, kilograms)

elseif letter == 'D' || letter == 'd'
kilometers = value * 1.61;
fprintf ('%.3f miles is equal to %.3f kilometer\n \n', value, kilometers)

elseif letter == 'E' || letter == 'e'
grams = value * 28.35;
fprintf ('%.3f ounces is equal to %.3f grams\n \n', value, grams)

else
disp ('You entered an invalid letter\n \n')

end



% Purpose: Estimate the value of pi.

% Input: No imput required. Just need to create a set of 10000 random
% nombers for x, 10000 for y. Also another set of 1000000 for x and 1000000 for
% y.
% 
% output: The estimated value of pi with 10000 points and with 1000000
% points.
% 
% Algorith: Create and array for x and one for y with 10000 numbers each.
% square each number in each array and add them up.
% create another array with the numbers less than of equal to 1.
% find the lenght of the array.
% Divide the lenght by 10000.
% multiply by 4 to find the approximation of pi.
% Create and array for x and one for y with 1000000 numbers each.
% repeat all the process for the points above.


x10000 = rand (1, 10000) *2 - 1;

y10000 = rand (1, 10000) *2 - 1;

circle_border = (x10000).^2 + (y10000).^2;

points_inside = find (circle_border <= 1);

inside_circle = length (points_inside);

aprox_pi = (inside_circle/10000) * 4



x1000000 = rand (1, 1000000) *2 - 1;

y1000000 = rand (1, 1000000) *2 - 1;

circle_border2 = (x1000000).^2 + (y1000000).^2;

points_inside2 = find (circle_border2 <= 1);

inside_circle2 = length (points_inside2);

aprox_pi2 = (inside_circle2/1000000) * 4 

% The true value of pi would be based of a sample size of infinite numbers.
% Generaly the bigger the sample size of points the more accurate
% aproximation of pi. This is why the aproximation when using
% 1000000 is most of the time closer to the actual value than the
% aproximation of 10000, and also why both values are different.


% Purpose: Find the average sensor values for each time. Find average for
% each sensor. Find std for each sensor. Find std for all sensor values.

% Input: The table of time and sensor values.
% 
% output: Output the number of columns and rows in the dataset. Output the average sensor values for each time. Output average for
% each sensor. Output std for each sensor. output std for all sensor values.
% 
% Algorith: Import the data file.
% Find number of row and columns in the file
% find the mean for each time
% create a time and average array with time in a column and average values in the other
% Output the table stating what time correspond to what average.
% find std of every sensor
% find mean of every sensor
% find std of all sensor values

load SensorData.mat

sensor2

[rows, columns] = size (sensor2)

meanEachTime = mean(sensor2(1:end, 2:end), 2)

time_VS_ave = [sensor2(1:rows); meanEachTime']'

fprintf ('At %d hours the average sensor reading was %.3f \n', time_VS_ave')

meanEachSensor = mean(sensor2(1:end, 2:end))

stdEachSensor = std (sensor2(1:end, 2:end))

stdTotal = std ((rows+1):rows*columns)



