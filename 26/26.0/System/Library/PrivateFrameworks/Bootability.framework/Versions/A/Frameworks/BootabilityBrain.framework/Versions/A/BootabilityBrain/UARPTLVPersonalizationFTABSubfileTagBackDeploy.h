@class UARPAssetTagBackDeploy;

@interface UARPTLVPersonalizationFTABSubfileTagBackDeploy : UARPMetaDataTLVBackDeploy

@property (readonly) UARPAssetTagBackDeploy *tag;

+ (unsigned int)tlvType;
+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)a0;
+ (id)tlvWithLength:(unsigned long long)a0 value:(void *)a1;

- (void)setTag:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)generateTLV;
- (id)tlvValue;

@end
