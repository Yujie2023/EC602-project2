# EC601-project2

Production Mission Statement
• The website can plan some safe routes for runner to choose so that the runner 
can run in a much more safe condition
• Also runner can chose the distance for running route, the website can process the 
proper route for them.
• The website consider the Traffic on the road, the District policing as the Primary 
considerations.
• The website have the air quality warning function and pollen warning for runner 
who allergy to pollen.
• So the function above the can plan a safe route for runner

Develop product user stories
• User Story one: 
• I am a runner who always run 5 mile in the evening after my dinner, I want to
choose a route which has little traffic and is quiet.
• User Story two:
• I am a middle school student, I want to run in a safe route with good district 
policing so that my parents will not worry too much.
• User Story three:
• I have pollen allergies, I want to run in a route without pollen distribution.

Develop an MVP
• Most Valuable 
• Set up the route according to the choose for distance
• Select the routes which have less traffic and more safe
• Give warning according to pollen distribution and air pollution 
• Most Valueless
• Select route which has too much traffic light




google map
This is the web page by calling google map API, the interface can choose: running distance (1-10mile), whether allergic to pollen, whether you want to avoid the road with a lot of cars these three, and then call Google map API, for the runner to plan a route and display on the web page.

In this example, the user can choose how far to run, whether they are allergic to pollen, and whether they want to avoid roads with lots of traffic. Then, the user clicks on the "Plan Route" button, which will call the Google Maps API to plan and display the corresponding route. Please remember to replace <YOUR_API_KEY> with your own Google Maps API key. Meanwhile, for better user experience, you may need to get more accurate location of the user in the actual application.

find this line below:
<script async defer src="https://maps.googleapis.com/maps/api/js?key=<YOUR_API_KEY>&callback=initMap"></script>


Replace <YOUR_API_KEY> with the actual Google Maps API key you generated on the Google Cloud Console. This key is used to enable your web pages to access the Google Maps API service. Be sure to follow Google's usage policies and security best practices when using the API key.


