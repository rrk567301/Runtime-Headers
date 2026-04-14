@interface _LTDUAFBridge : NSObject

+ (id)assetUsagesForAssetType:(unsigned long long)a0 locale:(id)a1;
+ (id)assetIdentifierForAssetSpecifier:(id)a0;
+ (id)assetSpecifierForAssetIdentifier:(id)a0;
+ (id)assetSpecifierForAssetUsages:(id)a0;
+ (id)assetSpecifiersForAssetType:(unsigned long long)a0 locale:(id)a1;
+ (unsigned long long)assetSubtypeForAssetSpecifier:(id)a0;
+ (unsigned long long)assetTypeForAssetSpecifier:(id)a0;
+ (unsigned long long)assetTypeForAssetUsage:(id)a0;
+ (id)assetUsagesForAssetSpecifier:(id)a0;
+ (id)assetUsagesForAssetType:(unsigned long long)a0;

@end
