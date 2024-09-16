# KTU-SPACE-Ground-Control-Station-CANSAT

The CanSat competition offers students an opportunity to work in an interdisciplinary manner. In this competition, where a satellite prototype is designed and developed, the tasks are similar to those performed by a real satellite when deployed into a planetary atmosphere. It collects and processes data from its environment and its own system, then sends this data to the ground station. The ground station is responsible for visualizing this data and analyzing the status of both the environment and the satellite system. Additionally, the ground station is the unit that will establish communication with the satellite and send commands to it. [Here](https://www.cansatcompetition.com/) you can look at the competition page.
<br />
This repository is dedicated to the ground station application for the KTU SPACE team for the America CanSat 2024 competition.
<br />
The project visualizes the data received every second from an Xbee module. the task of Ground Station have to do:

- Visualize the datas as a graph, map, and position simulation in at least 2d dimension in real time, (here I did it with a 3d model)
- save telemetry data as a CSV file
- send spesific command to cansat
 <br />
All the task is realized in this project. Project developed with Unity.
<br /><br />
[Here](https://github.com/rai-shi/KTU-SPACE-Ground-Control-Station-CANSAT/tree/main/cansat-arduino/) you can find the Arduino code for generating data for testing the project. I would also like to point out that Arduino can't perform reading and writing at the same time. So, when the simulation mode is started in the app, the telemetry reading task will stop, and therefore, the visualization will also stop. After Arduino finishes reading all the data, telemetry transmission will continue.
<br /><br />
[Here](https://github.com/rai-shi/KTU-SPACE-Ground-Control-Station-CANSAT/tree/main/model-sattelite-3d/), cansat 3d object as a package so you can add your project too. And also the project file if you want to develop the cansat 3d object.
<br /><br />
And [here](https://github.com/rai-shi/KTU-SPACE-Ground-Control-Station-CANSAT/tree/main/gcs-exe) the exe file of the ground station. Make sure that the Flight_2102.csv file is present in this path: gcs-exe/KTU_SPACE_Ground_Control_Station_Data/CSVFile.
<br /><br />
Finally you can find the source code of the ground station in [here](https://github.com/rai-shi/KTU_SPACE_Ground_Control_Station)

Let's explain the interface.

The program expects data from the serial port in the following format:
```bash
TEAM_ID, MISSION_TIME, PACKET_COUNT, MODE, STATE, ALTITUDE,AIR_SPEED, HS_DEPLOYED, PC_DEPLOYED, TEMPERATURE, VOLTAGE,PRESSURE, GPS_TIME, GPS_ALTITUDE, GPS_LATITUDE, GPS_LONGITUDE,GPS_SATS, TILT_X, TILT_Y, ROT_Z, CMD_ECHO [,,OPTIONAL_DATA]
```
Example Data
```bash
2102,11:42:36,159,F,LW,1.064579,0.06,N,N,24.4,92.3,4.1,15:44:28,810.8,38.3777,-79.6075,6,1.50,15.69,80.7,BCNOFF
```
Here the ground station interface
<table>
  <tr>
    <td align="center">
      <b>Dark Theme Mode</b>
    </td>
    <td align="center">
      <b>Light Theme Mode</b>
    </td>
  </tr>
  <tr>
    <td>
      <img src="https://github.com/rai-shi/KTU-SPACE-Ground-Control-Station-CANSAT/blob/main/ui.png?raw=true" width="500" alt="UI Image 1">
      <img src="https://github.com/rai-shi/KTU-SPACE-Ground-Control-Station-CANSAT/blob/main/ui2.png?raw=true" width="500" alt="UI Image 2">
    </td>
    <td>
      <img src="https://github.com/rai-shi/KTU-SPACE-Ground-Control-Station-CANSAT/blob/main/ui3.png?raw=true" width="500" alt="UI Image 3">
    </td>
  </tr>
</table>

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

