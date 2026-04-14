@class NSSet, NSArray, NSDictionary, NSString, ACAccountStore, AAFAnalyticsTransportRTC;

@interface AIDAServiceOwnersManager : NSObject <AIDAServiceOwnerProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _serviceOwnersLock;
    ACAccountStore *_accountStore;
    AAFAnalyticsTransportRTC *_reporter;
}

@property (class, readonly, copy, nonatomic) NSSet *serviceOwnerBundles;
@property (class, readonly, copy) NSArray *supportedServices;

@property (copy, nonatomic) NSDictionary *serviceOwners;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_set_loadServiceOwnerBundlesIfNeeded_onceToken:(long long)a0;
+ (id)_loadServiceOwnerBundles;
+ (id)_supplementalServiceTypes;
+ (void)configureProcessSpecificServiceOwnerRejectionlist:(id)a0;
+ (id)_rejectionlistedBundleIDs;
+ (id)_sharedTelemetryReporter;
+ (id)_loadServiceOwnerBundlesIfNeeded;
+ (void)configureProcessSpecificSupplementalServiceTypes:(id)a0;

- (void)signInToServices:(id)a0 usingContext:(id)a1 completion:(id /* block */)a2;
- (void)signOutOfServices:(id)a0 usingContext:(id)a1 completion:(id /* block */)a2;
- (id)init;
- (id)altDSIDForAccount:(id)a0 service:(id)a1;
- (id)_buildServiceOwnerMapping;
- (void)_completeSignInSignpost:(struct { unsigned long long x0; unsigned long long x1; })a0 forService:(id)a1 context:(id)a2 success:(BOOL)a3 error:(id)a4;
- (void).cxx_destruct;
- (void)signInToAllServicesInBackground:(BOOL)a0 usingContext:(id)a1 completion:(id /* block */)a2;
- (void)signInService:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (id)nameComponentsForAccount:(id)a0 service:(id)a1;
- (void)_publishSignInTelemetryEventForContext:(id)a0;
- (void)signOutOfAllServicesUsingContext:(id)a0 completion:(id /* block */)a1;
- (id)DSIDForAccount:(id)a0 service:(id)a1;
- (id)accountForService:(id)a0;
- (void)signInToAllServicesInBackgroundUsingContext:(id)a0 completion:(id /* block */)a1;
- (id)_postCloudSupportedServicesForAltDSID:(id)a0;
- (void)signOutService:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (id)initWithAccountStore:(id)a0;

@end
