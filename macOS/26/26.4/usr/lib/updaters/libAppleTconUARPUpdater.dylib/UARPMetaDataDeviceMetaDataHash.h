@class NSData;

@interface UARPMetaDataDeviceMetaDataHash : UARPMetaData

@property (readonly) NSData *metaDataHash;

- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)tlvValue;
- (id)initWithLength:(unsigned long long)a0 value:(void *)a1;
- (id)initWithMetaDataHash:(id)a0;
- (id)initWithPropertyListValue:(id)a0 relativeURL:(id)a1;

@end
