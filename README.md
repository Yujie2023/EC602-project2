# EC602-project2

google map
This is the web page by calling google map API, the interface can choose: running distance (1-10mile), whether allergic to pollen, whether you want to avoid the road with a lot of cars these three, and then call Google map API, for the runner to plan a route and display on the web page.

In this example, the user can choose how far to run, whether they are allergic to pollen, and whether they want to avoid roads with lots of traffic. Then, the user clicks on the "Plan Route" button, which will call the Google Maps API to plan and display the corresponding route. Please remember to replace <YOUR_API_KEY> with your own Google Maps API key. Meanwhile, for better user experience, you may need to get more accurate location of the user in the actual application.

find this line below:
<script async defer src="https://maps.googleapis.com/maps/api/js?key=<YOUR_API_KEY>&callback=initMap"></script>


Replace <YOUR_API_KEY> with the actual Google Maps API key you generated on the Google Cloud Console. This key is used to enable your web pages to access the Google Maps API service. Be sure to follow Google's usage policies and security best practices when using the API key.
