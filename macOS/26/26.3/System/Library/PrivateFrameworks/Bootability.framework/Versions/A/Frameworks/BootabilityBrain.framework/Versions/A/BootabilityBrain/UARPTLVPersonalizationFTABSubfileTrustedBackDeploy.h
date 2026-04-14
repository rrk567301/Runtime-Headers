@interface UARPTLVPersonalizationFTABSubfileTrustedBackDeploy : UARPMetaDataTLV16BackDeploy

@property (readonly) unsigned short trusted;

+ (unsigned int)tlvType;
+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)a0;
+ (id)tlvWithLength:(unsigned long long)a0 value:(void *)a1;

- (void)setTrusted:(unsigned short)a0;
- (id)description;
- (id)init;
- (id)generateTLV;
- (id)tlvValue;

@end
