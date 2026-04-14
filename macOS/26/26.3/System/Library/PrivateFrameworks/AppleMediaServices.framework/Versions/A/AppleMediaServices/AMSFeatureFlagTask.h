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

+ (id)createBagForSubProfile;
+ (id)_cachePath;
+ (BOOL)_cacheResponse:(id)a0 error:(id *)a1;
+ (id)lastFetchedDate;
+ (id)cachedRemoteGroups;
+ (id)_deviceClass;
+ (void)clearCache;
+ (void)_handleDeletedITFEsFromResponse:(id)a0;
+ (id)_cacheDirectory;

- (void).cxx_destruct;
- (id)perform;
- (id)_updateRemoteFeatureFlags;

@end
