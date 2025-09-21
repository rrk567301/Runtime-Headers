@interface MAUSBEndpointInactivateRequestPacket : MAUSBManagementEndpointListRequestPacket

@property (readonly) char suspend;

- (id)initWithBuffer:(id)a0;
- (char)parseBuffer:(id)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (unsigned int)dword3;
- (id)initWithHandle:(unsigned short)a0 deviceAddress:(unsigned char)a1 ssid:(unsigned char)a2 dialogToken:(unsigned short)a3 suspend:(char)a4 endpointHandleList:(id)a5;

@end
