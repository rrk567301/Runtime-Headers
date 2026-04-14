@interface TPSContentURLController : NSObject

+ (id)preferredLocalizations;
+ (id)defaultHost;
+ (id)_boardID;
+ (id)_platformString;
+ (id)defaultHostPath;
+ (long long)majorVersionForVersionString:(id)a0;
+ (id)metaRequestURL;
+ (id)contentRequestURLWithContentMapHash:(id)a0;
+ (id)modelQueryItem;
+ (id)platformQueryItem;
+ (id)contentRequestURLWithContentMapHash:(id)a0 variantIdentifiers:(id)a1 useLanguageDefault:(BOOL)a2;
+ (id)effectiveHost;
+ (id)requestURLForAPI:(id)a0 additionalQueryItems:(id)a1 useLanguageDefault:(BOOL)a2 apiVersion:(id)a3;
+ (id)assetPathFromAssetConfiguration:(id)a0 type:(long long)a1;
+ (id)_boardIDOrProductHash;
+ (id)_productHash;
+ (id)_uiTestLocalBaseURL;
+ (id)_uiTestLocalURLForIdentifier:(id)a0;

@end
