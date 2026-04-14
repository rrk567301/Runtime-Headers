@interface SSRSecureAssetProvider : NSObject

- (id)fetchSecureAssetForLocale:(id)a0 withAsset:(id)a1;
- (id)_fetchSecureAssetForCommunalDevice:(id)a0;
- (id)_fetchSecureAssetForNonCommunalDevice:(id)a0 withAsset:(id)a1;
- (id)_secureAssetWithAssetResourcePathURL:(id)a0 assetFileName:(id)a1 assetVersion:(id)a2;

@end
