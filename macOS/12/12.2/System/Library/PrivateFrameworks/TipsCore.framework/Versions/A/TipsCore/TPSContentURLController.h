@interface TPSContentURLController : NSObject

+ (id)preferredLocalizations;
+ (id)defaultHost;
+ (id)_boardID;
+ (id)_platformString;
+ (BOOL)_isRunningUITest;
+ (id)requestURLForAPI:(id)a0 additionalQueryItems:(id)a1 useLanguageDefault:(BOOL)a2 apiVersion:(id)a3;
+ (id)_uiTestLocalURLForIdentifier:(id)a0;
+ (id)contentRequestURLWithContentMapHash:(id)a0 variantIdentifiers:(id)a1 useLanguageDefault:(BOOL)a2;
+ (id)_boardIDOrProductHash;
+ (id)defaultHostPath;
+ (id)effectiveHost;
+ (id)modelQueryItem;
+ (id)platformQueryItem;
+ (long long)majorVersionForVersionString:(id)a0;
+ (id)_uiTestLocalBaseURL;
+ (id)_productHash;
+ (id)metaRequestURL;
+ (id)contentRequestURLWithContentMapHash:(id)a0;
+ (id)assetPathFromAssetConfiguration:(id)a0 type:(long long)a1;

@end
