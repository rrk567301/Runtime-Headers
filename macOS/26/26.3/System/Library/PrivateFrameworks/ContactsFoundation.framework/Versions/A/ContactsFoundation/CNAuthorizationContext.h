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

+ (BOOL)shouldIgnoreAssumedIdentity:(id)a0;
+ (id)os_log;
+ (BOOL)shouldIgnoreAssumedIdentityForBundleIdentifier:(id)a0;

- (BOOL)isUnitTesting;
- (void)requestAuthorization:(long long)a0 completionHandler:(id /* block */)a1;
- (id)requestAuthorizationFuture:(long long)a0;
- (long long)resolveRequestAuthorizationFuture:(id)a0;
- (BOOL)isThirdPartyNotesEntitled;
- (id)initWithAuditToken:(id)a0 assumedIdentity:(id)a1 tccServices:(id)a2;
- (id)init;
- (BOOL)isClientFirstOrSecondPartyImpl;
- (BOOL)isAddressingGrammarAccessGrantedImpl;
- (BOOL)isAccessGrantedRequestingAccessIfNeeded;
- (id)errorForStatus:(long long)a0;
- (BOOL)shouldAlwaysQueryAuthorizationStatus;
- (BOOL)requestAccessWithError:(id *)a0;
- (void)setAuthorizationStatus:(long long)a0 forBundleIdentifier:(id)a1 noKillApp:(BOOL)a2;
- (BOOL)isGreenTeaDevice;
- (BOOL)isClientTCCAllowedImpl;
- (void)stopSimulation;
- (BOOL)isClientTCCRegionalAllowedImpl;
- (void).cxx_destruct;
- (BOOL)shouldAlwaysQueryAuthorizationStatusImpl;
- (void)resetCachedStatus;
- (void)simulateStatus:(long long)a0;
- (BOOL)isClientTCCKilledOnAuthorizationChange;
- (BOOL)isFirstPartyNotesEntitled;
- (BOOL)checkTCCEntitlementNamesAllowContacts:(id)a0;
- (BOOL)doesClientHaveEntitlement:(id)a0;
- (BOOL)checkClientIsFirstOrSecondParty;
- (BOOL)isFirstPartyAddressingGrammarEntitled;
- (BOOL)isNotesAccessGrantedImpl;
- (BOOL)cachedNotesAccessGranted;
- (BOOL)isClientTCCUncoupledProcess;
- (id)clientBundleIdentifierImpl;
- (BOOL)isClientTCCCoupledProcess;
- (BOOL)isClientTCCRegionalAllowed;
- (BOOL)cachedAddressingGrammarAccessGranted;
- (long long)cachedAuthorizationStatus;
- (void)saveAuthorizationRecord:(id)a0 dontKillApp:(BOOL)a1;
- (id)initWithAuditToken:(id)a0 assumedIdentity:(id)a1;

@end
