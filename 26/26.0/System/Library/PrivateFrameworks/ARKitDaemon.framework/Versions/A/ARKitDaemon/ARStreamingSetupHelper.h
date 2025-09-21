@class ARDaemonServiceListener, NSString, NSMutableArray, ARAppConnectionManager, ARNetworkServiceControl, NSObject;
@protocol OS_dispatch_queue, ARServiceEventListener;

@interface ARStreamingSetupHelper : NSObject <ARDaemonServiceListenerDelegate, ARDaemonServiceDelegate> {
    ARAppConnectionManager *_appConnectionManager;
    ARNetworkServiceControl *_networkServiceControl;
    ARDaemonServiceListener *_listener;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    NSMutableArray *_services;
}

@property (weak) id<ARServiceEventListener> serviceEventListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)services;
- (void)removeService:(id)a0;
- (void)addService:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithAppConnectionManager:(id)a0 networkServiceControl:(id)a1 serviceName:(id)a2;
- (void)didDiscoverService:(id)a0;
- (id)initWithAppConnectionManager:(id)a0 networkServiceControl:(id)a1 serviceName:(id)a2 isInProcess:(BOOL)a3;
- (id)listenerForServiceNamed:(id)a0;
- (void)serviceDidInterrupt:(id)a0;
- (void)serviceDidInvalidate:(id)a0;
- (void)serviceDidStart:(id)a0;

@end
