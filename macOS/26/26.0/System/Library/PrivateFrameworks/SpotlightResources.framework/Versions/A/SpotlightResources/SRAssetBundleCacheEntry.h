@class NSString, SRAssetBundleVersion;

@interface SRAssetBundleCacheEntry : NSObject

@property (readonly, nonatomic) long long assetType;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) long long deliveryType;
@property (readonly, nonatomic) BOOL isResult;
@property (readonly, nonatomic) SRAssetBundleVersion *bundleVersion;
@property (readonly, nonatomic) NSString *path;
@property (nonatomic) BOOL loaded;

- (void).cxx_destruct;
- (id)assetTypeString;
- (id)deliveryTypeString;
- (id)initWithAssetType:(long long)a0 language:(id)a1 deliveryType:(long long)a2;
- (BOOL)isResultNone;
- (void)makeResultNone;
- (BOOL)makeResultWithBundleVersion:(id)a0 path:(id)a1 loaded:(BOOL)a2;

@end
