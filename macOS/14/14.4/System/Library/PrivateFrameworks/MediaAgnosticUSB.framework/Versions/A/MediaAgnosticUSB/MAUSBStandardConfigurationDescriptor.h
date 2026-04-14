@interface MAUSBStandardConfigurationDescriptor : MAUSBDescriptor

@property (readonly) unsigned short wTotalLength;
@property (readonly) unsigned char bNumInterfaces;
@property (readonly) unsigned char bConfigurationValue;
@property (readonly) unsigned char iConfiguration;
@property (readonly) unsigned char bmAttributes;
@property (readonly) unsigned char bMaxPower;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithTotalLength:(unsigned short)a0 numInterfaces:(unsigned char)a1 configurationValue:(unsigned char)a2 configurationIndex:(unsigned char)a3 attributes:(unsigned char)a4 maxPower:(unsigned char)a5;

@end
