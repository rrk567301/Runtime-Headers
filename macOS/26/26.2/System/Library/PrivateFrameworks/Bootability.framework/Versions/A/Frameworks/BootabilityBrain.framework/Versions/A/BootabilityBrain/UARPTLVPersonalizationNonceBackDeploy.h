@class NSData;

@interface UARPTLVPersonalizationNonceBackDeploy : UARPMetaDataTLVDataBackDeploy

@property (readonly) NSData *nonce;

+ (unsigned int)tlvType;
+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)a0;
+ (id)tlvWithLength:(unsigned long long)a0 value:(void *)a1;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)setNonce:(id)a0;
- (id)generateTLV;
- (id)tlvValue;

@end
