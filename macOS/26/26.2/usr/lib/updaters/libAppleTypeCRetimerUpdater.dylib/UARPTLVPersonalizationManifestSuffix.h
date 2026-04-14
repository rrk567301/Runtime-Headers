@class NSString;

@interface UARPTLVPersonalizationManifestSuffix : UARPMetaDataTLVString

@property (readonly) NSString *manifestSuffix;

+ (unsigned int)tlvType;
+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)a0;
+ (id)tlvWithLength:(unsigned long long)a0 value:(void *)a1;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)generateTLV;
- (void)setManifestSuffix:(id)a0;
- (id)tlvValue;

@end
