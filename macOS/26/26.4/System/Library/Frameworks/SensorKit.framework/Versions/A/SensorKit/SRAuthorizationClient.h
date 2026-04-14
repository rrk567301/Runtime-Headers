@class NSXPCConnection, NSString, NSArray, NSMutableDictionary, NSMutableSet, NSNumber, NSMapTable;

@interface SRAuthorizationClient : NSObject <SRSensorKitServiceClientAuthorizationListening> {
    int _registrationToken;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _initialAuthLock;
    NSXPCConnection *_connection;
    NSMapTable *_listeners;
    NSMutableDictionary *_actualAuthorizedServices;
    NSMutableDictionary *_deniedServices;
    NSMutableDictionary *_lastModifiedTimes;
    NSNumber *_prerequisites;
    NSMutableSet *_initialAuthCompleteByBundleId;
}

@property (class, retain, nonatomic) SRAuthorizationClient *authClient;
@property (class, readonly) SRAuthorizationClient *sharedInstance;

@property (readonly, nonatomic) NSArray *legacyResearchStudyBundleIDs;
@property (readonly, nonatomic) NSString *legacyResearchStudyEntitlement;
@property (nonatomic) BOOL dataCollectionEnabled;
@property (nonatomic) BOOL firstRunOnboardingCompleted;

+ (void)initialize;

- (void)removeListener:(id)a0;
- (void)addListener:(id)a0;
- (id)initWithConnection:(id)a0;
- (void)invalidate;
- (id)init;
- (void)dealloc;
- (void)addListener:(id)a0 forBundleId:(id)a1;
- (void)authorizedServicesDidChange:(id)a0 deniedServices:(id)a1 prerequisites:(long long)a2 lastModifiedTimes:(id)a3 bundleIdentifier:(id)a4;
- (id)authorizedServicesForBundleId:(id)a0;
- (void)completeEnrollmentForBundleId:(id)a0 sensors:(id)a1;
- (BOOL)initialAuthorizationNeededForBundleId:(id)a0;
- (void)initialAuthorizationStateForBundleId:(id)a0 authorizationState:(id /* block */)a1;
- (void)reregisterAfterInterruption:(id)a0 effectiveBundleId:(id)a1;
- (void)setInitialAuthorizationCompleteForBundleId:(id)a0;

@end
