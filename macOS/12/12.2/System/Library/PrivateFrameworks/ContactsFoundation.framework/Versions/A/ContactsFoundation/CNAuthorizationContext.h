@class CNAuditToken, CNUnfairLock, NSObject, NSNumber;
@protocol CNTCC, CNTCCSimulation, OS_tcc_identity;

@interface CNAuthorizationContext : NSObject <CNTCCSimulation>

@property (retain, nonatomic) CNAuditToken *cnAuditToken;
@property (retain, nonatomic) NSObject<OS_tcc_identity> *assumedIdentity;
@property (retain, nonatomic) id<CNTCC, CNTCCSimulation> tccServices;
@property (retain, nonatomic) NSNumber *authorizationStatusCachedValue;
@property (retain, nonatomic) NSNumber *shouldAlwaysQueryAuthorizationStatusCachedValue;
@property (retain, nonatomic) NSNumber *isNotesAccessGrantedCachedValue;
@property (retain, nonatomic) NSNumber *isFirstPartyNotesEntitledCachedValue;
@property (retain, nonatomic) NSNumber *isThirdPartyNotesEntitledCachedValue;
@property (retain, nonatomic) NSNumber *isClientTCCWhitelistedCachedValue;
@property (retain, nonatomic) NSNumber *isClientFirstOrSecondPartyCachedValue;
@property (retain, nonatomic) CNUnfairLock *authorizationStatusLock;
@property (retain, nonatomic) CNUnfairLock *notesAccessStatusLock;
@property (readonly, nonatomic) long long authorizationStatus;
@property (readonly, nonatomic) BOOL isAccessGranted;
@property (readonly, nonatomic) BOOL isAccess1Granted;
@property (readonly, nonatomic) BOOL isAccess2Granted;
@property (readonly, nonatomic) BOOL isNotesAccessGranted;
@property (readonly, nonatomic) BOOL isAccessRestricted;
@property (readonly, nonatomic) BOOL isClientFirstOrSecondParty;
@property (readonly, nonatomic) BOOL isClientTCCWhitelisted;

+ (id)sharedInstance;
+ (id)os_log;
+ (BOOL)shouldIgnoreAssumedIdentity:(id)a0;
+ (id)bundleIdentifierForAssumedIdentity:(id)a0;
+ (BOOL)shouldIgnoreAssumedIdentityForBundleIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isUnitTesting;
- (id)initWithAuditToken:(id)a0 assumedIdentity:(id)a1;
- (void)simulateStatus:(long long)a0;
- (void)stopSimulation;
- (id)initWithAuditToken:(id)a0 assumedIdentity:(id)a1 tccServices:(id)a2;
- (void)updateCachedAuthorizationStatusIfNeeded;
- (void)updateCachedNotesAccessGrantedIfNeeded;
- (BOOL)isClientTCCWhitelistedImpl;
- (BOOL)isClientFirstOrSecondPartyImpl;
- (BOOL)isAccessGrantedRequestingAccessIfNeeded;
- (id)errorForStatus:(long long)a0;
- (id)requestAuthorizationFuture:(long long)a0;
- (BOOL)shouldAlwaysQueryAuthorizationStatus;
- (BOOL)shouldAlwaysQueryAuthorizationStatusImpl;
- (BOOL)isGreenTeaDevice;
- (BOOL)isClientTCCUncoupledProcess;
- (BOOL)isClientTCCCoupledProcess;
- (BOOL)isClientTCCKilledOnAuthorizationChange;
- (BOOL)doesClientHaveEntitlement:(id)a0;
- (BOOL)isNotesAccessGrantedImpl;
- (BOOL)isFirstPartyNotesEntitled;
- (BOOL)isThirdPartyNotesEntitled;
- (BOOL)isFirstPartyNotesEntitledImpl;
- (BOOL)checkTCCEntitlementNamesAllowContacts:(id)a0;
- (BOOL)isThirdPartyNotesEntitledImpl;
- (long long)resolveRequestAuthorizationFuture:(id)a0;
- (BOOL)requestAccessWithError:(id *)a0;
- (void)requestAuthorization:(long long)a0 completionHandler:(id /* block */)a1;

@end
