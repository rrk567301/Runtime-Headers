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
@property (readonly, nonatomic) char isAccessGranted;
@property (readonly, nonatomic) char isFullAccessGranted;
@property (readonly, nonatomic) char isLimitedAccessGranted;
@property (readonly, nonatomic) char isNotesAccessGranted;
@property (readonly, nonatomic) char isAddressingGrammarAccessGranted;
@property (readonly, nonatomic) char isAccessRestricted;
@property (readonly, nonatomic) char isAccessDenied;
@property (readonly, nonatomic) char isAccessUnknown;
@property (readonly, nonatomic) char isClientFirstOrSecondParty;
@property (readonly, nonatomic) char isClientTCCAllowed;
@property (readonly, nonatomic) NSString *clientBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)os_log;
+ (char)shouldIgnoreAssumedIdentity:(id)a0;
+ (char)shouldIgnoreAssumedIdentityForBundleIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (char)isUnitTesting;
- (void)simulateStatus:(long long)a0;
- (char)checkClientIsFirstOrSecondParty;
- (id)errorForStatus:(long long)a0;
- (char)cachedAddressingGrammarAccessGranted;
- (long long)cachedAuthorizationStatus;
- (char)cachedNotesAccessGranted;
- (char)checkTCCEntitlementNamesAllowContacts:(id)a0;
- (id)clientBundleIdentifierImpl;
- (char)doesClientHaveEntitlement:(id)a0;
- (id)initWithAuditToken:(id)a0 assumedIdentity:(id)a1;
- (id)initWithAuditToken:(id)a0 assumedIdentity:(id)a1 tccServices:(id)a2;
- (char)isAccessGrantedRequestingAccessIfNeeded;
- (char)isAddressingGrammarAccessGrantedImpl;
- (char)isClientFirstOrSecondPartyImpl;
- (char)isClientTCCAllowedImpl;
- (char)isClientTCCCoupledProcess;
- (char)isClientTCCKilledOnAuthorizationChange;
- (char)isClientTCCRegionalAllowed;
- (char)isClientTCCRegionalAllowedImpl;
- (char)isClientTCCUncoupledProcess;
- (char)isFirstPartyAddressingGrammarEntitled;
- (char)isFirstPartyNotesEntitled;
- (char)isGreenTeaDevice;
- (char)isNotesAccessGrantedImpl;
- (char)isThirdPartyNotesEntitled;
- (char)requestAccessWithError:(id *)a0;
- (void)requestAuthorization:(long long)a0 completionHandler:(id /* block */)a1;
- (id)requestAuthorizationFuture:(long long)a0;
- (void)resetCachedStatus;
- (long long)resolveRequestAuthorizationFuture:(id)a0;
- (void)saveAuthorizationRecord:(id)a0 dontKillApp:(char)a1;
- (void)setAuthorizationStatus:(long long)a0 forBundleIdentifier:(id)a1 noKillApp:(char)a2;
- (char)shouldAlwaysQueryAuthorizationStatus;
- (char)shouldAlwaysQueryAuthorizationStatusImpl;
- (void)stopSimulation;

@end
