@class CNUnfairLock, NSString, CNAuditToken, NSObject, NSNumber;
@protocol CNTCC, CNTCCSimulation, OS_tcc_identity;

@interface CNAuthorizationContext : NSObject <CNAuthorizationContext, CNTCCSimulation>

@property (class, readonly) CNAuthorizationContext *sharedInstance;

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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
- (BOOL)requestAccessWithError:(id *)a0;
- (void)requestAuthorization:(long long)a0 completionHandler:(id /* block */)a1;
- (id)errorForStatus:(long long)a0;
- (void)updateCachedAuthorizationStatusIfNeeded;
- (BOOL)shouldAlwaysQueryAuthorizationStatus;
- (BOOL)shouldAlwaysQueryAuthorizationStatusImpl;
- (BOOL)isGreenTeaDevice;
- (BOOL)isClientTCCUncoupledProcess;
- (BOOL)isClientTCCCoupledProcess;
- (BOOL)doesClientHaveEntitlement:(id)a0;
- (BOOL)isClientTCCKilledOnAuthorizationChange;
- (void)updateCachedNotesAccessGrantedIfNeeded;
- (BOOL)isNotesAccessGrantedImpl;
- (BOOL)isFirstPartyNotesEntitled;
- (BOOL)isFirstPartyNotesEntitledImpl;
- (BOOL)isThirdPartyNotesEntitled;
- (BOOL)isThirdPartyNotesEntitledImpl;
- (BOOL)isClientTCCWhitelistedImpl;
- (BOOL)checkTCCEntitlementNamesAllowContacts:(id)a0;
- (BOOL)isClientFirstOrSecondPartyImpl;
- (BOOL)checkClientIsFirstOrSecondParty;
- (BOOL)isAccessGrantedRequestingAccessIfNeeded;
- (id)requestAuthorizationFuture:(long long)a0;
- (long long)resolveRequestAuthorizationFuture:(id)a0;

@end
