@class NSData;

@interface UARPTLVPersonalizationFTABSubfileDigestBackDeploy : UARPMetaDataTLVDataBackDeploy

@property (readonly) NSData *digest;

+ (unsigned int)tlvType;
+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)a0;
+ (id)tlvWithLength:(unsigned long long)a0 value:(void *)a1;

- (id)description;
- (void).cxx_destruct;
- (void)setDigest:(id)a0;
- (id)init;
- (id)generateTLV;
- (id)tlvValue;

@end
