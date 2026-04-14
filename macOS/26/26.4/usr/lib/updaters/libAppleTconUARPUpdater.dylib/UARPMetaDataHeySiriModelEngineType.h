@interface UARPMetaDataHeySiriModelEngineType : UARPMetaData

@property (readonly) unsigned short engineType;

- (id)init;
- (id)description;
- (id)tlvValue;
- (id)initWithLength:(unsigned long long)a0 value:(void *)a1;
- (id)initWithPropertyListValue:(id)a0 relativeURL:(id)a1;

@end
