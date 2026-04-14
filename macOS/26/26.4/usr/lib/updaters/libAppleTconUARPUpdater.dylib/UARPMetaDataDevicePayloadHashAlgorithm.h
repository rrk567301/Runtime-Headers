@interface UARPMetaDataDevicePayloadHashAlgorithm : UARPMetaData

@property (readonly) unsigned short hashAlgorithm;

- (id)init;
- (id)description;
- (id)tlvValue;
- (id)initWithHashAlgorithm:(long long)a0;
- (id)initWithLength:(unsigned long long)a0 value:(void *)a1;
- (id)initWithPropertyListValue:(id)a0 relativeURL:(id)a1;

@end
