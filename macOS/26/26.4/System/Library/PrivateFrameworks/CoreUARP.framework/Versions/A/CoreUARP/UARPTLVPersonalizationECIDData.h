@class NSData;

@interface UARPTLVPersonalizationECIDData : UARPMetaDataTLVData

@property (readonly) NSData *ecID;

+ (unsigned int)tlvType;
+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)a0;
+ (id)tlvWithLength:(unsigned long long)a0 value:(void *)a1;

- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)generateTLV;
- (void)setEcID:(id)a0;
- (id)tlvValue;

@end
