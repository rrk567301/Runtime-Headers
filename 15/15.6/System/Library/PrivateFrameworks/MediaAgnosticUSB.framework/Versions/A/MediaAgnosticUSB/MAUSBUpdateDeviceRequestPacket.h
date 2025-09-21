@class MAUSBStandardDeviceDescriptor;

@interface MAUSBUpdateDeviceRequestPacket : MAUSBManagementPacket

@property (readonly) unsigned short maxExitLatency;
@property (readonly) char hub;
@property (readonly) unsigned char numPorts;
@property (readonly) char mtt;
@property (readonly) unsigned char ttt;
@property (readonly) char integratedHubLatency;
@property (readonly) MAUSBStandardDeviceDescriptor *deviceDescriptor;

- (void).cxx_destruct;
- (id)data;
- (id)initWithBuffer:(id)a0;
- (char)parseBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithHandle:(unsigned short)a0 deviceAddress:(unsigned char)a1 ssid:(unsigned char)a2 dialogToken:(unsigned short)a3 maxExitLatency:(unsigned short)a4 hub:(char)a5 numPorts:(unsigned char)a6 mtt:(char)a7 ttt:(unsigned char)a8 integratedHubLatency:(char)a9 deviceDescriptor:(id)a10;

@end
