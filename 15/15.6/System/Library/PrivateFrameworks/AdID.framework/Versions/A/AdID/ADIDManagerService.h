@class NSXPCListener, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface ADIDManagerService : ADSingleton <ADIDManager_XPC, NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> *_forceReconcileQueue;
}

@property (retain) NSXPCListener *listener;
@property (retain, nonatomic) NSMutableArray *reconcileArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (char)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)forceReconcile:(id /* block */)a0;
- (unsigned long long)delayForNewForceReconcileRequest;

@end
