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
@property (retain, nonatomic) NSNumber *isAddressingGrammarAccessGrantedCachedValue;
@property (retain, nonatomic) NSNumber *isClientTCCAllowedCachedValue;
@property (retain, nonatomic) NSNumber *isClientTCCRegionalAllowedCachedValue;
@property (retain, nonatomic) NSNumber *isClientFirstOrSecondPartyCachedValue;
@property (retain, nonatomic) CNUnfairLock *authorizationStatusLock;
@property (retain, nonatomic) CNUnfairLock *notesAccessStatusLock;
@property (retain, nonatomic) CNUnfairLock *addressingGrammarAccessStatusLock;
@property (readonly, nonatomic) long long authorizationStatus;
@property (readonly, nonatomic) BOOL isAccessGranted;
@property (readonly, nonatomic) BOOL isAccess1Granted;
@property (readonly, nonatomic) BOOL isAccess2Granted;
@property (readonly, nonatomic) BOOL isNotesAccessGranted;
@property (readonly, nonatomic) BOOL isAddressingGrammarAccessGranted;
@property (readonly, nonatomic) BOOL isAccessRestricted;
@property (readonly, nonatomic) BOOL isClientFirstOrSecondParty;
@property (readonly, nonatomic) BOOL isClientTCCAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bundleIdentifierForAssumedIdentity:(id)a0;
+ (id)os_log;
+ (BOOL)shouldIgnoreAssumedIdentity:(id)a0;
+ (BOOL)shouldIgnoreAssumedIdentityForBundleIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isUnitTesting;
- (id)errorForStatus:(long long)a0;
- (BOOL)checkClientIsFirstOrSecondParty;
- (void)simulateStatus:(long long)a0;
- (BOOL)cachedAddressingGrammarAccessGranted;
- (long long)cachedAuthorizationStatus;
- (BOOL)cachedNotesAccessGranted;
- (BOOL)checkTCCEntitlementNamesAllowContacts:(id)a0;
- (BOOL)doesClientHaveEntitlement:(id)a0;
- (id)initWithAuditToken:(id)a0 assumedIdentity:(id)a1;
- (id)initWithAuditToken:(id)a0 assumedIdentity:(id)a1 tccServices:(id)a2;
- (BOOL)isAccessGrantedRequestingAccessIfNeeded;
- (BOOL)isAddressingGrammarAccessGrantedImpl;
- (BOOL)isClientFirstOrSecondPartyImpl;
- (BOOL)isClientTCCAllowedImpl;
- (BOOL)isClientTCCCoupledProcess;
- (BOOL)isClientTCCKilledOnAuthorizationChange;
- (BOOL)isClientTCCRegionalAllowed;
- (BOOL)isClientTCCRegionalAllowedImpl;
- (BOOL)isClientTCCUncoupledProcess;
- (BOOL)isFirstPartyAddressingGrammarEntitled;
- (BOOL)isFirstPartyNotesEntitled;
- (BOOL)isGreenTeaDevice;
- (BOOL)isNotesAccessGrantedImpl;
- (BOOL)isThirdPartyNotesEntitled;
- (BOOL)requestAccessWithError:(id *)a0;
- (void)requestAuthorization:(long long)a0 completionHandler:(id /* block */)a1;
- (id)requestAuthorizationFuture:(long long)a0;
- (long long)resolveRequestAuthorizationFuture:(id)a0;
- (BOOL)shouldAlwaysQueryAuthorizationStatus;
- (BOOL)shouldAlwaysQueryAuthorizationStatusImpl;
- (void)stopSimulation;

@end
