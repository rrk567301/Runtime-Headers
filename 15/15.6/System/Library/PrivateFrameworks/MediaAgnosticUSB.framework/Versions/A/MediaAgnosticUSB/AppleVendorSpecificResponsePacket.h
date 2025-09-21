@interface AppleVendorSpecificResponsePacket : MAUSBVendorSpecificResponsePacket

@property (readonly) unsigned short applePacketType;
@property (readonly) unsigned short appleStatus;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithHost:(char)a0 deviceAddress:(unsigned char)a1 ssid:(unsigned char)a2 dialogToken:(unsigned short)a3 applePacketType:(unsigned short)a4 appleStatus:(unsigned short)a5;
- (char)parseAppleVendorSpecificResponseCommonFields:(id)a0;

@end
