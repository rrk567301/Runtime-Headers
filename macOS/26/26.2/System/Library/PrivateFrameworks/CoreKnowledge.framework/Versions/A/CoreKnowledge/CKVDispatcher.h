@class NSXPCListener, NSString, CKVTaskManager, NSObject;
@protocol OS_dispatch_queue, CKVAdminServiceProvider;

@interface CKVDispatcher : NSObject <NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<CKVAdminServiceProvider> *_adminServiceProvider;
    CKVTaskManager *_taskManager;
}

@property (readonly, nonatomic) NSXPCListener *donateServiceListener;
@property (readonly, nonatomic) NSXPCListener *adminServiceListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (BOOL)_adminServiceShouldAcceptNewConnection:(id)a0;
- (void)handleDarwinNotificationEventWithName:(id)a0 completion:(id /* block */)a1;
- (void)setupXPCListeners;
- (void)handleBridgeActivityUpdate:(id)a0;
- (void).cxx_destruct;
- (void)runMigration:(id /* block */)a0;
- (void)handleDistributedNotificationEventWithName:(id)a0 completion:(id /* block */)a1;
- (id)initWithQueue:(id)a0 adminServiceProvider:(id)a1 taskManager:(id)a2;
- (id)init;
- (void)registerXPCActivities;
- (void)runMaintenanceWithShouldDefer:(id /* block */)a0 completion:(id /* block */)a1;
- (id)_listenerWithMachServiceName:(id)a0 delegate:(id)a1;

@end
