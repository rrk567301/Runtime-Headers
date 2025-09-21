@class NSString, TRITreatmentQualifiedAssetIndex;

@interface TRICKAssetMetadata : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) NSString *namespaceNameForEncryptionKey;
@property (readonly, nonatomic) TRITreatmentQualifiedAssetIndex *treatmentIndex;
@property (readonly, nonatomic) unsigned long long downloadSize;
@property (readonly, nonatomic) unsigned long long compressionMode;

+ (id)metadataWithType:(unsigned char)a0 namespaceNameForEncryptionKey:(id)a1 treatmentIndex:(id)a2 downloadSize:(unsigned long long)a3 compressionMode:(unsigned long long)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isEqualToMetadata:(id)a0;
- (id)copyWithReplacementType:(unsigned char)a0;
- (id)copyWithReplacementCompressionMode:(unsigned long long)a0;
- (id)copyWithReplacementDownloadSize:(unsigned long long)a0;
- (id)copyWithReplacementNamespaceNameForEncryptionKey:(id)a0;
- (id)copyWithReplacementTreatmentIndex:(id)a0;
- (id)initWithType:(unsigned char)a0 namespaceNameForEncryptionKey:(id)a1 treatmentIndex:(id)a2 downloadSize:(unsigned long long)a3 compressionMode:(unsigned long long)a4;

@end
