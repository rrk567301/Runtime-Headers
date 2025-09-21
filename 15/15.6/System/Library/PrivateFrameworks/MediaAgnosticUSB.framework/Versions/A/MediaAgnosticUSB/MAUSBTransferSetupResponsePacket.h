@interface MAUSBTransferSetupResponsePacket : MAUSBControlPacket

@property (readonly) unsigned char linkType;
@property (readonly) unsigned short connectionID;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithHost:(char)a0 retry:(char)a1 handle:(id)a2 deviceAddress:(unsigned char)a3 ssid:(unsigned char)a4 statusCode:(unsigned char)a5 linkType:(unsigned char)a6 connectionID:(unsigned short)a7;

@end
