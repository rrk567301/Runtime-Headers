@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, ARDaemonServiceListenerDelegate;

@interface ARDaemonServiceListener : NSObject <NSXPCListenerDelegate> {
    BOOL _isInProcess;
    NSMutableDictionary *_xpcListeners;
    NSMutableDictionary *_serviceClasses;
    NSObject<OS_dispatch_queue> *_serviceQueue;
}

@property (readonly, weak, nonatomic) id<ARDaemonServiceListenerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (BOOL)addServiceByName:(id)a0 serviceClass:(Class)a1;
- (BOOL)addServiceWithQueueByName:(id)a0 serviceClass:(Class)a1;
- (id)createService:(id)a0;
- (id)initWithDelegate:(id)a0 watchdogMonitor:(id)a1 isInProcess:(BOOL)a2;
- (id)initWithDelegate:(id)a0 watchdogMonitor:(id)a1 isInProcess:(BOOL)a2 ignoredServiceNames:(id)a3;
- (id)initWithDelegate:(id)a0 watchdogMonitor:(id)a1 isInProcess:(BOOL)a2 requiredServiceNames:(id)a3;
- (id)initWithDelegate:(id)a0 watchdogMonitor:(id)a1 isInProcess:(BOOL)a2 requiredServiceNames:(id)a3 ignoredServiceNames:(id)a4;
- (id)listenerForServiceNamed:(id)a0;

@end
