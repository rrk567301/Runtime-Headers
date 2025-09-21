@interface TPSContentURLController : NSObject

+ (id)preferredLocalizations;
+ (id)defaultHost;
+ (id)_boardID;
+ (id)assetPathFromAssetConfiguration:(id)a0 type:(long long)a1;
+ (id)defaultHostPath;
+ (id)_platformString;
+ (id)_boardIDOrProductHash;
+ (id)_productHash;
+ (id)_uiTestLocalBaseURL;
+ (id)_uiTestLocalURLForIdentifier:(id)a0;
+ (id)contentRequestURLWithContentMapHash:(id)a0;
+ (id)contentRequestURLWithContentMapHash:(id)a0 variantIdentifiers:(id)a1 useLanguageDefault:(BOOL)a2;
+ (id)effectiveHost;
+ (id)languageStringWithLanguageDefault:(BOOL)a0 count:(unsigned long long)a1;
+ (long long)majorVersionForVersionString:(id)a0;
+ (id)metaRequestURL;
+ (id)modelQueryItem;
+ (id)platformQueryItem;
+ (id)preferredLocalizationsWithCount:(unsigned long long)a0;
+ (id)requestURLForAPI:(id)a0 type:(id)a1 additionalQueryItems:(id)a2 useLanguageDefault:(BOOL)a3 apiVersion:(id)a4;
+ (id)supportFlowRequestURL;
+ (id)userGuideURLForIdentifier:(id)a0 version:(id)a1 platformIndependent:(BOOL)a2 subPath:(id)a3;

@end
