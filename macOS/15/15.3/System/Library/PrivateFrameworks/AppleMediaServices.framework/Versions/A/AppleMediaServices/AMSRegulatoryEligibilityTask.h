@class NSNumber, NSObject;

@interface AMSRegulatoryEligibilityTask : AMSTask

@property (class, readonly) AMSRegulatoryEligibilityTask *sharedInstance;

@property (retain) NSObject *cachedServerDataService;
@property (readonly) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } overrideLock;
@property (retain) NSNumber *override;

+ (id)setRegulatoryPropertyOnAccount:(id)a0;
+ (id)fetchRegulatoryiTunesAccount;
+ (BOOL)setBillingCountry:(id)a0 withStatus:(unsigned long long)a1 error:(id *)a2;

- (id)init;
- (void).cxx_destruct;
- (id)update;
- (void)handleCachedDataUpdate;
- (id)initWithServerData:(id)a0;
- (BOOL)setForcedOverride:(id)a0 error:(id *)a1;
- (void)updateAMSDefaults:(id)a0 country:(id)a1 override:(id)a2 result:(id)a3;

@end
