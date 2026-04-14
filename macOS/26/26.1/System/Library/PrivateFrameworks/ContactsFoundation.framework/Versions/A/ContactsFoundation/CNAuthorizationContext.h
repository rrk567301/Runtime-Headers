@class CNUnfairLock, NSString, CNAuditToken, NSObject, NSNumber;
@protocol OS_tcc_identity, CNTCC, CNTCCSettings, CNTCCSimulation;

@interface CNAuthorizationContext : NSObject <CNAuthorizationContext, CNTCCSimulation>

@property (class, readonly) CNAuthorizationContext *sharedInstance;

@property (retain, nonatomic) CNAuditToken *cnAuditToken;
@property (retain, nonatomic) NSObject<OS_tcc_identity> *assumedIdentity;
@property (retain, nonatomic) id<CNTCC, CNTCCSettings, CNTCCSimulation> tccServices;
@property (retain, nonatomic) NSNumber *authorizationStatusCachedValue;
@property (retain, nonatomic) NSNumber *shouldAlwaysQueryAuthorizationStatusCachedValue;
@property (retain, nonatomic) NSNumber *isNotesAccessGrantedCachedValue;
@property (retain, nonatomic) NSNumber *isAddressingGrammarAccessGrantedCachedValue;
@property (retain, nonatomic) NSNumber *isClientTCCAllowedCachedValue;
@property (retain, nonatomic) NSNumber *isClientTCCRegionalAllowedCachedValue;
@property (retain, nonatomic) NSNumber *isClientFirstOrSecondPartyCachedValue;
@property (retain, nonatomic) NSString *clientBundleIdentifierCachedValue;
@property (retain, nonatomic) CNUnfairLock *authorizationStatusLock;
@property (retain, nonatomic) CNUnfairLock *notesAccessStatusLock;
@property (retain, nonatomic) CNUnfairLock *addressingGrammarAccessStatusLock;
@property (readonly, nonatomic) long long authorizationStatus;
@property (readonly, nonatomic) BOOL isAccessGranted;
@property (readonly, nonatomic) BOOL isFullAccessGranted;
@property (readonly, nonatomic) BOOL isLimitedAccessGranted;
@property (readonly, nonatomic) BOOL isNotesAccessGranted;
@property (readonly, nonatomic) BOOL isAddressingGrammarAccessGranted;
@property (readonly, nonatomic) BOOL isAccessRestricted;
@property (readonly, nonatomic) BOOL isAccessDenied;
@property (readonly, nonatomic) BOOL isAccessUnknown;
@property (readonly, nonatomic) BOOL isClientFirstOrSecondParty;
@property (readonly, nonatomic) BOOL isClientTCCAllowed;
@property (readonly, nonatomic) NSString *clientBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldIgnoreAssumedIdentityForBundleIdentifier:(id)a0;
+ (id)os_log;
+ (BOOL)shouldIgnoreAssumedIdentity:(id)a0;

- (BOOL)isUnitTesting;
- (void)requestAuthorization:(long long)a0 completionHandler:(id /* block */)a1;
- (id)errorForStatus:(long long)a0;
- (BOOL)cachedNotesAccessGranted;
- (void)simulateStatus:(long long)a0;
- (BOOL)isClientTCCKilledOnAuthorizationChange;
- (BOOL)doesClientHaveEntitlement:(id)a0;
- (void)saveAuthorizationRecord:(id)a0 dontKillApp:(BOOL)a1;
- (void)resetCachedStatus;
- (BOOL)isFirstPartyNotesEntitled;
- (BOOL)cachedAddressingGrammarAccessGranted;
- (BOOL)isClientTCCUncoupledProcess;
- (void)setAuthorizationStatus:(long long)a0 forBundleIdentifier:(id)a1 noKillApp:(BOOL)a2;
- (BOOL)isAccessGrantedRequestingAccessIfNeeded;
- (BOOL)requestAccessWithError:(id *)a0;
- (BOOL)checkClientIsFirstOrSecondParty;
- (id)initWithAuditToken:(id)a0 assumedIdentity:(id)a1;
- (BOOL)isAddressingGrammarAccessGrantedImpl;
- (BOOL)isNotesAccessGrantedImpl;
- (BOOL)isFirstPartyAddressingGrammarEntitled;
- (BOOL)isThirdPartyNotesEntitled;
- (void).cxx_destruct;
- (BOOL)checkTCCEntitlementNamesAllowContacts:(id)a0;
- (long long)resolveRequestAuthorizationFuture:(id)a0;
- (id)initWithAuditToken:(id)a0 assumedIdentity:(id)a1 tccServices:(id)a2;
- (BOOL)isGreenTeaDevice;
- (void)stopSimulation;
- (BOOL)isClientFirstOrSecondPartyImpl;
- (BOOL)isClientTCCCoupledProcess;
- (BOOL)isClientTCCRegionalAllowedImpl;
- (BOOL)shouldAlwaysQueryAuthorizationStatus;
- (id)requestAuthorizationFuture:(long long)a0;
- (BOOL)isClientTCCAllowedImpl;
- (BOOL)isClientTCCRegionalAllowed;
- (id)clientBundleIdentifierImpl;
- (id)init;
- (BOOL)shouldAlwaysQueryAuthorizationStatusImpl;
- (long long)cachedAuthorizationStatus;

@end
