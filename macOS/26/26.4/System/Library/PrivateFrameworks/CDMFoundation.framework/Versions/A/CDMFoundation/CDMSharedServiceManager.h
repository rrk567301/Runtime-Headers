@class NSLock, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CDMSharedServiceManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *serviceInstances;
@property (retain, nonatomic) NSMutableDictionary *serviceRefCounts;
@property (retain, nonatomic) NSMutableDictionary *waitingCallbacks;
@property (retain, nonatomic) NSLock *serviceManagementLock;
@property (retain, nonatomic) NSLock *notificationLock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)cleanupEmptyDictionaries:(id)a0 refCountsForConfig:(id)a1 servicesForConfig:(id)a2;
- (void)cleanupServiceIfNeeded:(id)a0 inRefCountsForConfig:(id)a1 inServicesForConfig:(id)a2 forConfigKey:(id)a3;
- (long long)decrementReferenceCount:(id)a0 inRefCountsForConfig:(id)a1 forConfigKey:(id)a2;
- (void)decrementReferenceCountForService:(id)a0 forConfigKey:(id)a1;
- (id)getCurrentServiceForConfigKey:(id)a0 serviceName:(id)a1;
- (id)getOrCreateServicesForConfig:(id)a0;
- (id)getOrRegisterService:(id)a0 forConfigKey:(id)a1;
- (id)getServiceSharingStatistics;
- (id)getSharedServiceDetails;
- (id)handleExistingService:(id)a0 newService:(id)a1 serviceName:(id)a2 configKey:(id)a3 servicesForConfig:(id)a4;
- (BOOL)hasSharedServiceInstance:(id)a0 forConfigKey:(id)a1;
- (void)incrementReferenceCountForService:(id)a0 configKey:(id)a1;
- (id)lookupExistingService:(id)a0 inServicesMap:(id)a1;
- (void)notifyWaitingClientsForService:(id)a0 forConfigKey:(id)a1;
- (BOOL)registerCallbackIfServiceNotReady:(id /* block */)a0 forService:(id)a1 forConfigKey:(id)a2 withClientId:(id)a3;
- (id)registerNewService:(id)a0 serviceName:(id)a1 configKey:(id)a2 servicesForConfig:(id)a3;
- (id)replaceFailedService:(id)a0 withNewService:(id)a1 serviceName:(id)a2 configKey:(id)a3 servicesForConfig:(id)a4;
- (id)validateServiceParameters:(id)a0 configKey:(id)a1;

@end
