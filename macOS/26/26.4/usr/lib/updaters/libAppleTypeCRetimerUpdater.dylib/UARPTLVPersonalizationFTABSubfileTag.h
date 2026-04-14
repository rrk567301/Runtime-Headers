@class UARPAssetTag;

@interface UARPTLVPersonalizationFTABSubfileTag : UARPMetaDataTLV

@property (readonly) UARPAssetTag *tag;

+ (unsigned int)tlvType;
+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)a0;
+ (id)tlvWithLength:(unsigned long long)a0 value:(void *)a1;

- (void)setTag:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)generateTLV;
- (id)tlvValue;

@end
