@interface MAUSBEndpointResetInfoBlock : MAUSBStructure

@property (readonly) unsigned short handle;
@property (readonly) char transferStatePreserve;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithHandle:(unsigned short)a0 transferStatePreserve:(char)a1;

@end
