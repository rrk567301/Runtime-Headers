@interface UARPMetaDataDeviceCompressedHeaders : UARPMetaData

@property (readonly) unsigned short hashAlgorithm;
@property (readonly) unsigned int actualOffset;
@property (readonly) unsigned short compressedLength;
@property (readonly) unsigned short uncompressedLength;

- (id)init;
- (id)description;
- (id)tlvValue;
- (id)initWithLength:(unsigned long long)a0 value:(void *)a1;
- (id)initWithPropertyListValue:(id)a0 relativeURL:(id)a1;

@end
