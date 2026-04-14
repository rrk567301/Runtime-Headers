@class NSData;

@interface UARPMetaDataVoiceAssistDigest : UARPMetaData

@property (readonly) NSData *modelDigest;

- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)tlvValue;
- (id)initWithLength:(unsigned long long)a0 value:(void *)a1;
- (id)initWithPropertyListValue:(id)a0 relativeURL:(id)a1;

@end
