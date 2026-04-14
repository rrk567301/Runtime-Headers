@interface EXEnumerator : NSEnumerator

+ (id)extensionEnumerator;
+ (id)extensionPointDefinitionEnumerator;
+ (id)extensionPointDefinitionEnumeratorWithSDKDictionary:(id)a0;
+ (id)config;
+ (id)extensionCacheFileURLs;
+ (id)extensionPointCacheFileURLs;
+ (id)extensionPointDefinitionDirectoryURLs;
+ (id)extensionInstallDirectoryURLs;
+ (id)extensionURLEnumerator;
+ (id)_extensionLiveEnumerator;
+ (id)_extensionPointLiveEnumerator;

@end
