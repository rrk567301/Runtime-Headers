@class MAAutoAssetSelector;

@interface DDSMAAutoAssetSelector : NSObject

@property (readonly, nonatomic) MAAutoAssetSelector *assetSelector;

+ (id)allSupportedLinguisticAssetTypeForAssetType:(id)a0;
+ (id)createWithQuery:(id)a0 supportedAssetSpecifiers:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithAssetType:(id)a0 assetSpecifier:(id)a1;

@end
