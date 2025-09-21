@interface EXEnumerator : NSEnumerator

+ (id)config;
+ (id)extensionEnumerator;
+ (id)extensionPointDefinitionEnumerator;
+ (id)_extensionLiveEnumerator;
+ (id)_extensionPointLiveEnumerator;
+ (id)extensionCacheFileURLs;
+ (id)extensionInstallDirectoryURLs;
+ (id)extensionPointCacheFileURLs;
+ (id)extensionPointDefinitionDirectoryURLs;
+ (id)extensionPointDefinitionEnumeratorWithSDKDictionary:(id)a0;
+ (id)extensionURLEnumerator;

@end
