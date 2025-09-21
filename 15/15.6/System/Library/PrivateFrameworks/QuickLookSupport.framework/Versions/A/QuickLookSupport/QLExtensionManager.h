@class QLExtensionManagerCache;

@interface QLExtensionManager : NSObject

@property (retain, nonatomic) QLExtensionManagerCache *thumbnailExtensionCache;
@property (retain, nonatomic) QLExtensionManagerCache *previewExtensionCache;

+ (id)sharedManager;
+ (char)extension:(id)a0 supportsExactType:(id)a1;
+ (void)_resetSharedManager;
+ (void)_setSharedManager:(id)a0;

- (void).cxx_destruct;
- (char)existsExtensionForContentType:(id)a0 allowExtensionsForParentTypes:(char)a1 applicationBundleIdentifier:(id)a2 extensionPath:(id)a3 extensionType:(unsigned long long)a4 generationType:(unsigned long long)a5;
- (id)extensionForContentType:(id)a0 allowExtensionsForParentTypes:(char)a1 applicationBundleIdentifier:(id)a2 extensionPath:(id)a3 extensionType:(unsigned long long)a4 generationType:(unsigned long long)a5 shouldUseRestrictedExtension:(char)a6;
- (id)qlExtensionForContentType:(id)a0 allowExtensionsForParentTypes:(char)a1 firstPartyExtension:(char)a2 applicationBundleIdentifier:(id)a3 extensionPath:(id)a4 extensionType:(unsigned long long)a5 generationType:(unsigned long long)a6 shouldUseRestrictedExtension:(char)a7;
- (void)_addQueryAttributesToExtensionQuery:(id)a0 withContentType:(id)a1 appBundleIdentifier:(id)a2 extensionType:(unsigned long long)a3 generationType:(unsigned long long)a4;
- (id)_applicationPathForBundleId:(id)a0;
- (id)_cachesForExtensionType:(unsigned long long)a0 shouldUseRestrictedExtension:(char)a1;
- (id)_extensionPointNameForExtensionType:(unsigned long long)a0;
- (void)_setupCache;
- (char)existsExtensionForContentType:(id)a0 allowExtensionsForParentTypes:(char)a1 applicationBundleIdentifier:(id)a2 extensionType:(unsigned long long)a3 generationType:(unsigned long long)a4;
- (char)existsExtensionForContentType:(id)a0 allowExtensionsForParentTypes:(char)a1 firstPartyExtension:(char)a2 applicationBundleIdentifier:(id)a3 extensionPath:(id)a4 extensionType:(unsigned long long)a5 generationType:(unsigned long long)a6;
- (void)extensionContextForContentType:(id)a0 allowExtensionsForParentTypes:(char)a1 firstPartyExtensionOnly:(char)a2 appBundleIdentifier:(id)a3 extensionPath:(id)a4 extensionType:(unsigned long long)a5 generationType:(unsigned long long)a6 withCompletionHandler:(id /* block */)a7;
- (id)extensionForContentType:(id)a0 allowExtensionsForParentTypes:(char)a1 applicationBundleIdentifier:(id)a2 extensionPath:(id)a3 extensionType:(unsigned long long)a4 generationType:(unsigned long long)a5;
- (id)extensionForContentType:(id)a0 allowExtensionsForParentTypes:(char)a1 firstPartyExtension:(char)a2 applicationBundleIdentifier:(id)a3 extensionPath:(id)a4 extensionType:(unsigned long long)a5 generationType:(unsigned long long)a6 shouldUseRestrictedExtension:(char)a7;
- (id)qlExtensionForContentType:(id)a0 allowExtensionsForParentTypes:(char)a1 applicationBundleIdentifier:(id)a2 extensionPath:(id)a3 extensionType:(unsigned long long)a4 generationType:(unsigned long long)a5 shouldUseRestrictedExtension:(char)a6;

@end
