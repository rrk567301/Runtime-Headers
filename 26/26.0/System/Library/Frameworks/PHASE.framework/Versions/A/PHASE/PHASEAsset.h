@class NSString, PHASEAssetRegistry;

@interface PHASEAsset : NSObject

@property (weak) PHASEAssetRegistry *assetRegistry;
@property (readonly, nonatomic) unsigned long long sizeInBytes;
@property (readonly, nonatomic) void *weakStringPoolRef;
@property (readonly) NSString *owningDataBundleIdentifier;
@property (readonly) NSString *identifier;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (const char *)getNullableString:(unsigned long long)a0;
- (const char *)getString:(unsigned long long)a0;
- (id)initWithUID:(id)a0 assetRegistry:(id)a1 weakStringPoolReference:(void *)a2;
- (void)setOwningDataBundleIdentifier:(id)a0;

@end
