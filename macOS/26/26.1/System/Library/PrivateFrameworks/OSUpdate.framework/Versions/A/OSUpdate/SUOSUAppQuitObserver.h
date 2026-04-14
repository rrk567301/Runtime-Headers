@class NSArray, NSPointerArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SUOSUAppQuitObserver : SUOSULaterObserver

@property (retain) NSObject<OS_dispatch_queue> *q;
@property (retain) NSArray *bundleIdentifiers;
@property (retain) NSMutableArray *registeredAuditSessionIDs;
@property (retain) NSPointerArray *registeredLSNotificationIDs;
@property BOOL pendingAppScan;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)_queue_disarm;
- (void)_queue_handleAppDeathNotification;
- (void)_queue_registerNotifications;
- (BOOL)_queue_scanOpenApps;
- (void)armObserverWithBundleIdentifiers:(id)a0;
- (void)disarmLaterObserver;

@end
