@class NSData;

@interface UARPTLVPersonalizedManifestBackDeploy : UARPMetaDataTLVDataBackDeploy {
    NSData *_manifest;
}

@property (readonly) NSData *nonce;

+ (unsigned int)tlvType;
+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)a0;
+ (id)tlvWithLength:(unsigned long long)a0 value:(void *)a1;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)setManifest:(id)a0;
- (id)generateTLV;
- (id)tlvValue;

@end
