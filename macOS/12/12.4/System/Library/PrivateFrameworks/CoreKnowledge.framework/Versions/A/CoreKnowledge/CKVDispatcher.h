@class NSXPCListener, NSString, CKVTaskHandler, CKVDonateConnectionFactory, CKVSettings, NSObject, CKVDonationManager;
@protocol OS_dispatch_queue, CKVAdminServiceProvider;

@interface CKVDispatcher : NSObject <NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    CKVDonateConnectionFactory *_donateConnectionFactory;
    NSObject<CKVAdminServiceProvider> *_adminServiceProvider;
    CKVSettings *_settings;
    CKVTaskHandler *_taskHandler;
    CKVDonationManager *_donationManager;
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
- (id)initWithQueue:(id)a0 donateConnectionFactory:(id)a1 adminServiceProvider:(id)a2 taskHandler:(id)a3 settings:(id)a4;
- (id)_listenerWithMachServiceName:(id)a0 delegate:(id)a1;
- (BOOL)_donateServiceShouldAcceptNewConnection:(id)a0;
- (BOOL)_adminServiceShouldAcceptNewConnection:(id)a0;
- (void)runIndexMaintenance:(id /* block */)a0;
- (void)registerXPCActivities;
- (void)setupXPCListeners;
- (BOOL)handleDarwinNotificationEventWithName:(id)a0;
- (BOOL)handleDistributedNotificationEventWithName:(id)a0;
- (void)runPostOSInstallMigration:(id /* block */)a0;

@end
