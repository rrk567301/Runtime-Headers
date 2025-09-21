@class NSMutableDictionary;

@interface SAAppSizeBreakdownList : NSObject

@property (retain) NSMutableDictionary *appSizeBreakdownList;

- (id)init;
- (id)generateDictionary;
- (void).cxx_destruct;
- (void)updatePath:(id)a0 cloneSize:(unsigned long long)a1 bundleIDs:(id)a2;
- (void)updatePath:(id)a0 cacheSize:(unsigned long long)a1 bundleIDs:(id)a2;
- (void)addPath:(id)a0 fixedPath:(BOOL)a1 size:(unsigned long long)a2 bundleIDs:(id)a3;
- (void)addPluginSize:(unsigned long long)a0 bundleIDs:(id)a1;
- (void)addTagSize:(unsigned long long)a0 bundleIDs:(id)a1;
- (void)mergeBundleIDs:(id)a0 withBundleIDs:(id)a1 newBundleIDs:(id)a2;
- (void)removeBundleIDs:(id)a0;
- (void)updateBundleIDs:(id)a0 newIDs:(id)a1;
- (void)updateTagsWithCloneSize:(unsigned long long)a0 bundleIDs:(id)a1;

@end
