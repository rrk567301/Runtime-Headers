@class AMSBagKeySet, NSString, ACAccount;
@protocol AMSBagProtocol;

@interface AMSFamilyInfoLookupTask : AMSTask <AMSBagConsumer>

@property (class, readonly) AMSBagKeySet *bagKeySet;
@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;

@property (readonly) ACAccount *account;
@property (readonly) id<AMSBagProtocol> bag;
@property (retain) NSString *logKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addRequiredBagKeysToAggregator:(id)a0;
+ (id)createBagForSubProfile;
+ (id)_processURLResult:(id)a0;

- (void).cxx_destruct;
- (id)initWithBag:(id)a0;
- (id)initWithAccount:(id)a0 bag:(id)a1;
- (id)initWithBagContract:(id)a0;
- (id)_performFamilyInfoRequestForAccount:(id)a0 error:(id *)a1;
- (id)_pathForCachedFamilyInfoLookupResult;
- (id)_currentCachedFamilyInfo;
- (id)performFamilyInfoLookup;
- (void)_cacheFamilyInfoLookupResult:(id)a0 forAccount:(id)a1;
- (id)_cachedFamilyInfoLookupResultForAccount:(id)a0;

@end
