@class NSNumber, NSObject;

@interface AMSRegulatoryEligibilityTask : AMSTask

@property (class, readonly) AMSRegulatoryEligibilityTask *sharedInstance;

@property (retain) NSObject *cachedServerDataService;
@property (readonly) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } overrideLock;
@property (retain) NSNumber *override;

+ (id)createXPCDictionary:(id)a0;
+ (BOOL)setInput:(unsigned long long)a0 withValues:(id)a1 withStatus:(unsigned long long)a2;
+ (void)clearAMSDefaults;
+ (id)fetchRegulatoryiTunesAccounts;
+ (id)setRegulatoryPropertyOnAccounts:(id)a0;
+ (void)updateAMSDefaultsWithAccounts:(id)a0 billingCountries:(id)a1 isTeenValues:(id)a2 isChildValues:(id)a3 isAgeVerifiedValues:(id)a4 isConnectedToAgeVerifiedAdultValues:(id)a5 isEligibleForAgeAssuranceValues:(id)a6 ageComplianceAreaIds:(id)a7;

- (void).cxx_destruct;
- (id)update;
- (id)init;
- (void)handleCachedDataUpdate;
- (id)initWithServerData:(id)a0;
- (BOOL)setForcedOverride:(id)a0 error:(id *)a1;

@end
