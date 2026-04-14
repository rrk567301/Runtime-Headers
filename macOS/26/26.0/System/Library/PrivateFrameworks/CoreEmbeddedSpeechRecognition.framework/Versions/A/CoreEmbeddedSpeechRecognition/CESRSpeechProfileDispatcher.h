@class NSXPCListener, NSString, NSSet, CESRSpeechProfileSiteManager, CCSetChangeXPCListener, NSObject, CESRTaskCoalescer;
@protocol OS_dispatch_queue, CESRSpeechProfileAdminServiceProvider;

@interface CESRSpeechProfileDispatcher : NSObject <NSXPCListenerDelegate, SFSpeechProfileResourceMonitorObserver, SFPersonaManagerObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<CESRSpeechProfileAdminServiceProvider> *_adminServiceProvider;
    CESRSpeechProfileSiteManager *_speechProfileSiteManager;
    NSSet *_supportedNotifications;
    CCSetChangeXPCListener *_setChangeListener;
}

@property (readonly, nonatomic) NSXPCListener *adminServiceListener;
@property (readonly, nonatomic) CESRTaskCoalescer *taskCoalescer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDispatcher;
+ (unsigned long long)_maintenanceReasonForDarwinNotificationEventWithName:(id)a0;
+ (id)_supportedDarwinNotifications;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)setupXPCListeners;
- (BOOL)_adminServiceShouldAcceptNewConnection:(id)a0;
- (id)init;
- (void)runMaintenanceWithShouldDefer:(id /* block */)a0 completion:(id /* block */)a1;
- (id)_initWithQueue:(id)a0;
- (id)_listenerWithMachServiceName:(id)a0 delegate:(id)a1;
- (void)runMigration:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_wait;
- (void)newPersonas:(id)a0;
- (void)removedPersonas:(id)a0;
- (void)resourceAvailableForPersona:(id)a0;
- (void)resourceUnavailableForPersona:(id)a0;
- (void)resourceUnavailableSoonForPersona:(id)a0;
- (id)_defaultTaskCoalescerWithQueue:(id)a0;
- (id)_adminServiceProvider;
- (id)_initWithQueue:(id)a0 adminServiceProvider:(id)a1 speechProfileSiteManager:(id)a2;
- (void)_notifyChangeToSets:(id)a0;
- (id)_speechProfileSiteManager;
- (BOOL)handleDarwinNotificationEventWithName:(id)a0;
- (void)snapshotBookmarksForLocale:(id)a0 toPath:(id)a1;

@end
