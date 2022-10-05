import random
temp_sensor_value=random.randint(18,40)
humidity_value=random.randint(20,100)
if temp_sensor_value>30 or humidity_value>90:
    print("Temperature value:",temp_sensor_value)
    print("Humidity value:",humidity_value)
    print("Hazard detected")
