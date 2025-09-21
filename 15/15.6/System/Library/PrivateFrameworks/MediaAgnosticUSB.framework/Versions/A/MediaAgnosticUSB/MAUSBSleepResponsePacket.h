@interface MAUSBSleepResponsePacket : MAUSBManagementPacket

@property (readonly) unsigned int managementRequestTimeout;
@property (readonly) unsigned int dataRequestTimeout;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (char)parseBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithHost:(char)a0 deviceAddress:(unsigned char)a1 ssid:(unsigned char)a2 statusCode:(unsigned char)a3 dialogToken:(unsigned short)a4 managementRequestTimeout:(unsigned int)a5 dataRequestTimeout:(unsigned int)a6;

@end
