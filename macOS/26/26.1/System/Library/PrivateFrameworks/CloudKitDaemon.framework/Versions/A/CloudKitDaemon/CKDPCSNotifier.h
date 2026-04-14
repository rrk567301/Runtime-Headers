@class NSMutableDictionary, NSSet, NSMutableSet, NSHashTable, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface CKDPCSNotifier : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *pcsUpdateSource;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizeQueue;
@property (retain, nonatomic) NSMutableDictionary *missingIdentitiesContextMap;
@property (retain, nonatomic) NSMutableDictionary *cloudCoreIdentityContextsMap;
@property (retain, nonatomic) NSMutableSet *mutableServicesNeedingDBRReauthentication;
@property (retain, nonatomic) NSMutableDictionary *testOverrides;
@property (retain, nonatomic) NSHashTable *weakUnscopedIdentityChangeWatchers;
@property (readonly, nonatomic) NSSet *servicesNeedingDBRReauthentication;

+ (id)sharedNotifier;

- (BOOL)serviceNeedsDBRReauthentication:(id)a0;
- (void)unregisterIdentityChangeWatcher:(id)a0;
- (void)setupIdentityUpdateNotificationHandling;
- (void)setupGuitarfishRepairNotificationHandling;
- (void)securityViewBecameReady:(id)a0;
- (void)addTestOverrides:(id)a0;
- (void)addMissingIdentityPublicKeys:(id)a0 forManagerUUID:(id)a1 withAccount:(id)a2;
- (void)dealloc;
- (void)unregisterUnscopedIdentityChangeWatcher:(id)a0;
- (void)clearContextIfUnnecessaryForManagerUUID:(id)a0;
- (void).cxx_destruct;
- (void)noteUserKeySyncWithCompletionHandler:(id /* block */)a0;
- (void)clearServicesNeedingDBRReauthentication;
- (void)registerUnscopedIdentityChangeWatcher:(id)a0;
- (BOOL)hasOutstandingServicesNeedingDBRReauthentication;
- (BOOL)checkAndClearTestOverrides:(id)a0;
- (void)addContext:(id)a0 forManagerUUID:(id)a1;
- (void)clearServicesAndPublicKeysForManagerUUID:(id)a0;
- (void)addServicesNeedingDBRReauthentication:(id)a0;
- (id)init;
- (void)addServicesWithMissingIdentities:(id)a0 forManagerUUID:(id)a1 withAccount:(id)a2;
- (void)registerIdentityChangeWatcher:(id)a0 service:(id)a1 account:(id)a2;

@end
