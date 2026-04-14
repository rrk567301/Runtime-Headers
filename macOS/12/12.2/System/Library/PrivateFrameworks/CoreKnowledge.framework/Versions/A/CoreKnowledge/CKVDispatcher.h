@class NSXPCListener, NSString, CKVTaskHandler, CKVSettings, NSObject;
@protocol CKVDonateServiceProvider, CKVDonateTaskProvider, CKVAdminServiceProvider, OS_dispatch_queue;

@interface CKVDispatcher : NSObject <NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<CKVDonateServiceProvider> *_donateServiceProvider;
    NSObject<CKVAdminServiceProvider> *_adminServiceProvider;
    NSObject<CKVDonateTaskProvider> *_donateTaskProvider;
    CKVSettings *_settings;
    CKVTaskHandler *_taskHandler;
}

@property (readonly, nonatomic) NSXPCListener *donateServiceListener;
@property (readonly, nonatomic) NSXPCListener *adminServiceListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDispatcher;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithQueue:(id)a0 donateServiceProvider:(id)a1 adminServiceProvider:(id)a2 taskHandler:(id)a3 settings:(id)a4;
- (void)registerXPCActivities;
- (void)setupXPCListeners;
- (id)_listenerWithMachServiceName:(id)a0 delegate:(id)a1;
- (BOOL)_donateServiceShouldAcceptNewConnection:(id)a0;
- (BOOL)_adminServiceShouldAcceptNewConnection:(id)a0;
- (BOOL)handleDarwinNotificationEventWithName:(id)a0;
- (BOOL)handleDistributedNotificationEventWithName:(id)a0;
- (void)runPostOSInstallMigration:(id /* block */)a0;
- (void)runIndexMaintenance:(id /* block */)a0;

@end
