@class MAAutoAssetSelector;

@interface DDSMAAutoAssetSelector : NSObject

@property (readonly, nonatomic) MAAutoAssetSelector *assetSelector;

+ (id)allSupportedLinguisticAssetTypeForAssetType:(id)a0;
+ (id)createWithQuery:(id)a0 supportedAssetSpecifiers:(id)a1;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithAssetType:(id)a0 assetSpecifier:(id)a1;

@end
