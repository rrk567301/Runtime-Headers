@interface AMSFeatureFlagTask : AMSTask

+ (id)_cacheDirectory;
+ (id)_cachePath;
+ (void)clearCache;
+ (id)lastFetchedDate;
+ (id)cachedRemoteGroups;

- (id)perform;
- (id)_bag;
- (id)_updateRemoteFeatureFlags;
- (BOOL)_cacheResponse:(id)a0 error:(id *)a1;

@end
