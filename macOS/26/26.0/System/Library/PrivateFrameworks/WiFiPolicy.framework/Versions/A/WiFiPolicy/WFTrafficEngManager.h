@class RPCompanionLinkClient, NSObject;
@protocol OS_dispatch_queue, WFTrafficEngDelegate;

@interface WFTrafficEngManager : NSObject {
    NSObject<OS_dispatch_queue> *_traffic_engr_queue;
    RPCompanionLinkClient *_discoveryClient;
    BOOL _configured;
}

@property (nonatomic) id<WFTrafficEngDelegate> trafficEngDelegate;

- (void)cleanup;
- (void)__configureRapportSessionClient:(id)a0;
- (void)__sendPeriodicEvent:(id)a0;
- (void)dealloc;
- (id)initWithTrafficEngDelegate:(id)a0;
- (void)__registerCallbacksAndActivate;
- (void)__registerRequestHandler;
- (void)__sendKeepAliveEvent:(id)a0 dictionary:(id)a1;
- (void)__invalidateSession;
- (void)__sendEventToPeers;
- (void)__invalidateDiscovery;
- (id)__collectCriticalAppInfo;
- (void)__requestCriticalAppInfo:(id)a0 completionBlock:(id /* block */)a1;
- (void)__activateDiscovery;
- (BOOL)__configureRapportDiscoveryClient;
- (void)__tearDownRapportDataSession;
- (void).cxx_destruct;

@end
