@interface MAUSBSynchronizationRequestPacket : MAUSBManagementPacket

@property (readonly) char mtdValid;
@property (readonly) char responseRequired;
@property (readonly) unsigned int mausbTimestamp;
@property (readonly) unsigned int mediaTimeTransmissionDelay;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (char)parseBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithDeviceAddress:(unsigned char)a0 ssid:(unsigned char)a1 mtdValid:(char)a2 responseRequired:(char)a3 mausbTimestamp:(unsigned int)a4 mediaTimeTransmissionDelay:(unsigned int)a5;

@end
