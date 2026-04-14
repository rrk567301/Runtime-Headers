@class RPCompanionLinkClient, NSObject;
@protocol OS_dispatch_queue, WFTrafficEngDelegate;

@interface WFTrafficEngManager : NSObject {
    NSObject<OS_dispatch_queue> *_traffic_engr_queue;
    RPCompanionLinkClient *_discoveryClient;
    BOOL _configured;
}

@property (nonatomic) id<WFTrafficEngDelegate> trafficEngDelegate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cleanup;
- (void)__invalidateDiscovery;
- (void)__configureRapportSessionClient:(id)a0;
- (void)__tearDownRapportDataSession;
- (void)__activateDiscovery;
- (void)__registerCallbacksAndActivate;
- (void)__registerRequestHandler;
- (void)__sendPeriodicEvent:(id)a0;
- (void)__sendKeepAliveEvent:(id)a0 dictionary:(id)a1;
- (void)__requestCriticalAppInfo:(id)a0 completionBlock:(id /* block */)a1;
- (id)initWithTrafficEngDelegate:(id)a0;
- (BOOL)__configureRapportDiscoveryClient;
- (void)__invalidateSession;
- (void)__sendEventToPeers;
- (id)__collectCriticalAppInfo;

@end
