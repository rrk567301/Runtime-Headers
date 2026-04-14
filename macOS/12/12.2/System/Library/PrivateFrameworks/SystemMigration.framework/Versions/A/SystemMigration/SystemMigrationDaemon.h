@class NSXPCListener, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SystemMigrationDaemon : NSObject <NSXPCListenerDelegate, SMSystemScannerDaemonClient>

@property (retain) NSXPCListener *migrateFromListener;
@property (retain) NSXPCListener *selectSourceListener;
@property (retain) NSXPCListener *customizeListener;
@property (retain) NSXPCListener *progressListener;
@property (retain) NSXPCListener *debugListener;
@property (retain) NSXPCListener *odUtilsListener;
@property (retain) NSMutableArray *clientConnections;
@property (retain) NSObject<OS_dispatch_queue> *serviceQueue;
@property unsigned long long requestedDaemonScannerState;
@property (retain) NSObject<OS_dispatch_source> *shutdownTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedDaemon;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)startListeningForConnections;
- (void)performOnServiceQueue:(id /* block */)a0 blocking:(BOOL)a1;
- (void)updateRequestedScannerState;
- (void)doIdleCheck;
- (void)removeConnectionObservers:(id)a0;
- (void)updateServicesStateAfterRemoval:(id)a0;
- (void)addConnectionObservers:(id)a0;
- (BOOL)daemonIsIdle;
- (void)attemptIdleExit;
- (void)performOnServiceQueue:(id /* block */)a0;

@end
