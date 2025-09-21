@interface MAUSBEndpointDescriptor : MAUSBStructure

@property (readonly) unsigned short handle;
@property (readonly) char direction;
@property (readonly) char isoch;
@property (readonly) char lManaged;
@property (readonly) char valid;
@property (readonly) unsigned short creditConsumptionUnit;
@property (readonly) unsigned int bufferSize;
@property (readonly) unsigned short isochProgrammingDelay;
@property (readonly) unsigned short isochResponseDelay;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithHandle:(unsigned short)a0 direction:(char)a1 isoch:(char)a2 lManaged:(char)a3 valid:(char)a4 creditConsumptionUnit:(unsigned short)a5 bufferSize:(unsigned int)a6 isochProgrammingDelay:(unsigned short)a7 isochResponseDelay:(unsigned short)a8;

@end
