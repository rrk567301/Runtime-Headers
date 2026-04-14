@class NSString, AMSBagKeySet, ACAccount;
@protocol AMSBagProtocol;

@interface AMSSyncRestrictedRegionTask : AMSTask <AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (retain) ACAccount *account;
@property (retain) id<AMSBagProtocol> bag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;
+ (BOOL)didExceededSyncDuration:(double)a0 lastTimestamp:(double)a1 currentTimestamp:(double)a2;
+ (BOOL)hasCachedRestrictedRegionsValueFromAccount:(id)a0 cachedTimestamp:(double *)a1;
+ (double)durationOfSyncRestrictedRegionValueFromBag:(id)a0;
+ (BOOL)storefrontContainsRestrictedRegionsValueFromBag:(id)a0;
+ (double)checkRestrictedRegionDurationValueFromBag:(id)a0;
+ (id)createSyncAccountFlagsTaskForAccount:(id)a0 bag:(id)a1;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (id)performSync;
- (id)initWithAccount:(id)a0 bag:(id)a1;
- (void)cacheRestrictedRegionSyncTimestamp:(double)a0;

@end
