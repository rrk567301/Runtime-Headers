@class NSXPCListener, NSString, CCSetChangeXPCListener, CESRSpeechProfileSiteManager, CESRDatasetSamplingConfig, NSObject, CESRTaskCoalescer;
@protocol OS_dispatch_queue, CESRSpeechProfileAdminServiceProvider;

@interface CESRSpeechProfileDispatcher : NSObject <NSXPCListenerDelegate, SFSpeechProfileResourceMonitorObserver, SFPersonaManagerObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<CESRSpeechProfileAdminServiceProvider> *_adminServiceProvider;
    CESRSpeechProfileSiteManager *_speechProfileSiteManager;
    CCSetChangeXPCListener *_setChangeListener;
    CESRDatasetSamplingConfig *_datasetSamplingConfig;
}

@property (readonly, nonatomic) NSXPCListener *adminServiceListener;
@property (readonly, nonatomic) CESRTaskCoalescer *taskCoalescer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDispatcher;
+ (id)descriptionForMaintenanceLevel:(unsigned long long)a0;
+ (id)_fullVerificationNotifications;
+ (id)_minimumVerificationNotifications;
+ (id)_supportedNotifications;

- (id)_initWithQueue:(id)a0;
- (void)setupXPCListeners;
- (void).cxx_destruct;
- (BOOL)_adminServiceShouldAcceptNewConnection:(id)a0;
- (id)_listenerWithMachServiceName:(id)a0 delegate:(id)a1;
- (void)runMaintenanceWithShouldDefer:(id /* block */)a0 completion:(id /* block */)a1;
- (id)init;
- (void)runMigration:(id /* block */)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (BOOL)handleDarwinNotification:(id)a0;
- (void)_wait;
- (void)newPersonas:(id)a0;
- (void)removedPersonas:(id)a0;
- (void)resourceAvailableForPersona:(id)a0;
- (void)resourceUnavailableForPersona:(id)a0;
- (void)resourceUnavailableSoonForPersona:(id)a0;
- (id)_defaultTaskCoalescerWithQueue:(id)a0;
- (id)_adminServiceProvider;
- (id)_datasetSamplingConfig;
- (id)_initWithQueue:(id)a0 adminServiceProvider:(id)a1 speechProfileSiteManager:(id)a2;
- (void)_notifyChangeToSets:(id)a0;
- (void)_performMaintenanceForNotification:(id)a0 maintenanceLevel:(unsigned long long)a1;
- (id)_speechProfileSiteManager;
- (void)_updateRequiredLocalesAndScheduleMaintenanceForNotification:(id)a0 maintenanceLevel:(unsigned long long)a1 transaction:(id)a2;
- (void)snapshotBookmarksForLocale:(id)a0 toPath:(id)a1;

@end
