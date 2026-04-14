@interface UARPTLVPersonalizationSuperBinaryAssetIDBackDeploy : UARPMetaDataTLV16BackDeploy

@property (readonly) unsigned short assetID;

+ (unsigned int)tlvType;
+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)a0;
+ (id)tlvWithLength:(unsigned long long)a0 value:(void *)a1;

- (id)description;
- (void)setAssetID:(unsigned short)a0;
- (id)init;
- (id)generateTLV;
- (id)tlvValue;

@end
