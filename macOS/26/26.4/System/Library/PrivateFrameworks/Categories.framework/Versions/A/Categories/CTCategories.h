@class NSArray, NSString, NSLock;

@interface CTCategories : NSObject {
    NSString *_indexVersionId;
    NSLock *_lookupLock;
}

@property (class, readonly) CTCategories *sharedCategories;

@property (readonly, copy) NSArray *availableCategoryIDs;

+ (void)initialize;
+ (id)systemHiddenBundleIdentifiersForDeviceFamily:(long long)a0;
+ (id)supportedWebBrowserBundleIdentifiersForDeviceFamily:(long long)a0;
+ (id)systemBlockableBundleIdentifiersForDeviceFamily:(long long)a0;
+ (long long)currentIOSDevice;
+ (id)systemUnblockableBundleIdentifiersForDeviceFamily:(long long)a0;

- (void)categoryForBundleID:(id)a0 platform:(id)a1 completionHandler:(id /* block */)a2;
- (void)unCategorizedDomainsFromDomains:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)emptyCache;
- (void)categoryForBundleID:(id)a0 completionHandler:(id /* block */)a1;
- (void)categoryForDomainURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)categoriesForDomainNames:(id)a0 completionHandler:(id /* block */)a1;
- (void)categoriesForDomainURLs:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)categoryForDomainName:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void)categoriesForBundleIDs:(id)a0 completionHandler:(id /* block */)a1;
- (id)bundleIDForPlatform:(id)a0 fromBundleID:(id)a1 platform:(id)a2;
- (void)categoriesForBundleIDs:(id)a0 platform:(id)a1 completionHandler:(id /* block */)a2;
- (void)_emptySharedCache:(id)a0;
- (void)dealloc;

@end
