@interface EXEnumerator : NSEnumerator

+ (id)extensionPointDefinitionEnumeratorWithSDKDictionary:(id)a0;
+ (id)extensionPointDefinitionEnumerator;
+ (id)extensionEnumerator;
+ (id)config;
+ (id)extensionURLEnumerator;
+ (id)extensionCacheFileURLs;
+ (id)extensionInstallDirectoryURLs;
+ (id)_extensionLiveEnumerator;
+ (id)extensionPointCacheFileURLs;
+ (id)extensionPointDefinitionDirectoryURLs;
+ (id)_extensionPointLiveEnumerator;

@end
