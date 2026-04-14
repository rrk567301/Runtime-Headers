@class NSString, AMSBagKeySet;

@interface AMSFeatureFlagTask : AMSTask <AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_cacheDirectory;
+ (id)_cachePath;
+ (void)clearCache;
+ (id)_deviceClass;
+ (id)lastFetchedDate;
+ (BOOL)_cacheResponse:(id)a0 error:(id *)a1;
+ (void)_handleDeletedITFEsFromResponse:(id)a0;
+ (id)cachedRemoteGroups;
+ (id)createBagForSubProfile;

- (id)perform;
- (id)_updateRemoteFeatureFlags;

@end
