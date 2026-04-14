@class NSString;

@interface UARPMetaData : NSObject

@property (readonly) unsigned int tlvType;
@property (readonly) unsigned int tlvLength;
@property (readonly) NSString *tlvName;

+ (id)metaDataTable;
+ (id)tlvFromType:(unsigned int)a0 length:(unsigned int)a1 value:(void *)a2;
+ (id)tlvNameForType:(id)a0;
+ (id)processComposeMeasuredFTABPayloads:(id)a0 value:(id)a1 relativeURL:(id)a2;
+ (id)processComposeMeasuredPayloads:(id)a0 value:(id)a1 relativeURL:(id)a2;
+ (id)tlvsFromKey:(id)a0 value:(id)a1 relativeURL:(id)a2;

- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)generateTLV;
- (id)tlvValue;
- (id)componentTagWithLength:(unsigned long long)a0 value:(void *)a1;
- (id)componentVersionWithLength:(unsigned long long)a0 value:(void *)a1;
- (id)dataFromPlistValue:(id)a0;
- (id)initWithLength:(unsigned long long)a0 value:(void *)a1;
- (id)initWithPropertyListValue:(id)a0 relativeURL:(id)a1;
- (id)numberFromPlistValue:(id)a0;
- (id)numberWithLength:(unsigned long long)a0 value:(void *)a1;
- (id)stringFromPlistValue:(id)a0;
- (id)tlvValueWithComponentVersion:(id)a0;
- (id)tlvValueWithString:(id)a0;
- (id)tlvValueWithUInt16:(unsigned short)a0;
- (id)tlvValueWithUInt32:(unsigned int)a0;
- (id)tlvValueWithUInt64:(unsigned long long)a0;
- (id)tlvValueWithUInt8:(unsigned char)a0;

@end
