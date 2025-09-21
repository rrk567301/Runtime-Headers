@class NSArray;

@interface MAUSBEndpointCloseStreamRequestPacket : MAUSBManagementPacket

@property (readonly) unsigned short endpointHandle;
@property (readonly) char closeAll;
@property (readonly) NSArray *streamIDBlocks;

- (void).cxx_destruct;
- (id)data;
- (id)initWithBuffer:(id)a0;
- (char)parseBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithHandle:(unsigned short)a0 deviceAddress:(unsigned char)a1 ssid:(unsigned char)a2 dialogToken:(unsigned short)a3 endpointHandle:(unsigned short)a4 closeAll:(char)a5 streamIDBlocks:(id)a6;

@end
