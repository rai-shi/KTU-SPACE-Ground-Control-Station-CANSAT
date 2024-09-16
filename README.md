# KTU-SPACE-Ground-Control-Station-CANSAT

The CanSat competition offers students an opportunity to work in an interdisciplinary manner. In this competition, a satellite prototype is designed and developed. The tasks are similar to those performed by a real satellite when deployed into a planetary atmosphere. It collects and processes data from its environment and its own system, then sends this data to the ground station. The ground station is responsible for visualizing this data and analyzing the status of both the environment and the satellite system. Additionally, the ground station will establish communication with the satellite and send commands to it. You can learn more about the competition [here](https://www.cansatcompetition.com/).

This repository is dedicated to the ground station application for the KTU SPACE team for the America CanSat 2024 competition.

The project visualizes the data received every second from an Xbee module. The tasks of the Ground Station include:

- Visualizing the data as a graph, map, and position simulation in at least 2D dimensions in real time (implemented with a 3D model).
- Saving telemetry data as a CSV file.
- Sending specific commands to CanSat.

All tasks are realized in this project, which is developed with Unity.

- The [Arduino code](https://github.com/rai-shi/KTU-SPACE-Ground-Control-Station-CANSAT/tree/main/cansat-arduino/) for generating data for testing the project can be found here. Note that Arduino cannot perform reading and writing simultaneously. Therefore, when the simulation mode is started in the app, the telemetry reading task will stop, and visualization will also stop until Arduino finishes reading all the data, after which telemetry transmission will continue.

- The [CanSat 3D model](https://github.com/rai-shi/KTU-SPACE-Ground-Control-Station-CANSAT/tree/main/model-sattelite-3d/) package is available here, which you can add to your project. This includes the project file if you wish to develop the CanSat 3D object further.

- The [executable file](https://github.com/rai-shi/KTU-SPACE-Ground-Control-Station-CANSAT/tree/main/gcs-exe) of the ground station can be found here. Ensure that the `Flight_2102.csv` file is present in the path: `gcs-exe/KTU_SPACE_Ground_Control_Station_Data/CSVFile`.

- The source code of the ground station is available on [GitHub](https://github.com/rai-shi/KTU_SPACE-Ground-Control-Station).

## Ground Station Application Overview

### Interface

The program expects data from the serial port in the following format:
```bash
TEAM_ID, MISSION_TIME, PACKET_COUNT, MODE, STATE, ALTITUDE, AIR_SPEED, HS_DEPLOYED, PC_DEPLOYED, TEMPERATURE, VOLTAGE, PRESSURE, GPS_TIME, GPS_ALTITUDE, GPS_LATITUDE, GPS_LONGITUDE, GPS_SATS, TILT_X, TILT_Y, ROT_Z, CMD_ECHO [,,OPTIONAL_DATA]
```
Example Data
```bash
2102,11:42:36,159,F,LW,1.064579,0.06,N,N,24.4,92.3,4.1,15:44:28,810.8,38.3777,-79.6075,6,1.50,15.69,80.7,BCNOFF
```


Here the ground station interface

<div>
  <img src="https://github.com/rai-shi/KTU-SPACE-Ground-Control-Station-CANSAT/blob/main/ui.png?raw=true" alt="dark theme-1" width="400" style="display: inline-block; margin-right: 10px;">
  <img src="https://github.com/rai-shi/KTU-SPACE-Ground-Control-Station-CANSAT/blob/main/ui.png?raw=true" alt="dark theme-2" width="400"style="display: inline-block; margin-right: 10px;">
  <img src="https://github.com/rai-shi/KTU-SPACE-Ground-Control-Station-CANSAT/blob/main/ui3.png?raw=true" alt="light theme" width="400" style="display: inline-block;">
</div>


## Ground Station Application Overview
### Top Section
- **Mode Display**: 
  - Displays the current mode of the system.
- **Logo (Theme Toggle)**: 
  - Functions as a button to switch between light and dark themes.
  - Click the logo to toggle between modes.

### Top Section
- **Data Display (Top Left)**:
- Some telemetry data is printed in this section.
- **Mode Status**:
  - Displays the current state of the CanSat.
- **Commands Area**
- **CanSat Simulation Mode Section**:
  - Enable: Sends the "enable mode" command to CanSat.
  - Activate Mode: Sends the "activate mode" command to CanSat.
  - Select .csv: Opens a file selection dialog for CSV files.
  - Send SIM Pressure: Sends pressure data via serial from the selected CSV file.
  - Disable: Sends the "disable mode" command to CanSat.
- **Serial Connection Section**
  - Port Selection: Dropdown for selecting the communication port.
  - Refresh: Refreshes the available port list. Use if a new port is opened.
  - CSV Clear: Clears all telemetry data from the CSV file.
  - Connect: Connects to the selected port and starts reading serial data.
  - Stop: Closes the port connection and stops data visualization.
  - OPEN DIR: Opens the directory containing the telemetry CSV file.
  - Clear UI: Clears all data visualizations from the UI.

### Plot Tab
- **CanSat 3D Position**: 
  - A 3D object simulates the CanSat’s position in the air.
- **Map**: 
  - Displays the real-time location of the CanSat.
- **Data Plots**: 
  - Graphs for various telemetry data.
### Telemetry Tab
  - Located in the top-right corner.
  - Click to switch to the telemetry tab, where a data table will appear.
### Instant Telemetry
  - Real-time instant telemetry data is displayed at the bottom of the interface.

<br /><br />
For any inquiries or feedback, please contact: aysenurtak1@gmail.com

