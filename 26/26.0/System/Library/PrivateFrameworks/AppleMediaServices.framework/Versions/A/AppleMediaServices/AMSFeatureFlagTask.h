@class NSString, AMSBagKeySet, AMSURLSession;

@interface AMSFeatureFlagTask : AMSTask <AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (retain) AMSURLSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cachedRemoteGroups;
+ (BOOL)_cacheResponse:(id)a0 error:(id *)a1;
+ (void)clearCache;
+ (id)lastFetchedDate;
+ (id)createBagForSubProfile;
+ (id)_deviceClass;
+ (id)_cacheDirectory;
+ (void)_handleDeletedITFEsFromResponse:(id)a0;
+ (id)_cachePath;

- (id)perform;
- (void).cxx_destruct;
- (id)_updateRemoteFeatureFlags;

@end
