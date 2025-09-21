@interface MAUSBWakeRequestPacket : MAUSBManagementPacket

- (id)initWithBuffer:(id)a0;
- (id)initWithHost:(char)a0 retry:(char)a1 deviceAddress:(unsigned char)a2 ssid:(unsigned char)a3 dialogToken:(unsigned short)a4;

@end
