@class NSString;

@interface TRIMAAssetMetadata : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long downloadSize;
@property (readonly, nonatomic) NSString *namespaceNameForEncryptionKey;

+ (id)metadataWithDownloadSize:(unsigned long long)a0 namespaceNameForEncryptionKey:(id)a1;

- (BOOL)isEqualToMetadata:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithDownloadSize:(unsigned long long)a0 namespaceNameForEncryptionKey:(id)a1;
- (id)description;
- (id)copyWithReplacementDownloadSize:(unsigned long long)a0;
- (id)copyWithReplacementNamespaceNameForEncryptionKey:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
