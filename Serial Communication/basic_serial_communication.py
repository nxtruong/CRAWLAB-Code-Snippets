#! /usr/bin/env python

###############################################################################
# basic_serial_communication.py
#
# script to achieve basic send/receive communication
#
# NOTE: Any plotting is set up for output, not viewing on screen.
#       So, it will likely be ugly on screen. The saved PDFs should look
#       better.
#
# Created: 05/27/16
#   - Joshua Vaughan
#   - joshua.vaughan@louisiana.edu
#   - http://www.ucs.louisiana.edu/~jev9637
#
# Modified:
#   *
#
###############################################################################

import numpy as np
import logging
import serial
import time

logger = logging.getLogger(__name__)

# TODO: Make a nice class-based serial object for easier reuse
# class serial_comm(object):
#     ''' Class for sending/receiving serial data'''
#     def __init__(self, port):
#         self.port = port
#         self.ser = serial.Serial(port, 115200)
# 
#     # Sends throttle and steering angle commands to platform
#     def send_string(self, string):
#     
#         if type(string) is str:
#             # Write the data to the serial connection - to the Arudino for CAN bus formatting
#             self.ser.write(str(string))
#         else:
#             logging.debug('The send_string method requires a str type argument.')
#     
#     def __del__(self):
#         self.ser.close()
#     
    
if __name__ == '__main__':
    # serial port will have to change based on configuration
    PORT = '/dev/tty.usbserial-A6001Ko5'
    
    # define the serial communication parameters, 8 bits, no parity, 1 stop bit
    BPS = 115200
    
    ser = serial.Serial(PORT, BPS)
    
    time_start = time.time()

    try:
        while True:
            dt = time.time() - time_start
    
            data = 100 * np.sin(0.5*np.pi * dt)
        
            data_string = '{}\r\n'.format(int(data)).encode('utf-8')
        
            ser.write(data_string)
            print(data_string)
            
            time.sleep(0.05)
            
    
    except (KeyboardInterrupt, SystemExit):
        ser.close()
        