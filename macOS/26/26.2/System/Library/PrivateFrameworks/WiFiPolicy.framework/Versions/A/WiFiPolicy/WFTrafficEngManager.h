@class RPCompanionLinkClient, NSObject;
@protocol OS_dispatch_queue, WFTrafficEngDelegate;

@interface WFTrafficEngManager : NSObject {
    NSObject<OS_dispatch_queue> *_traffic_engr_queue;
    RPCompanionLinkClient *_discoveryClient;
    BOOL _configured;
}

@property (nonatomic) id<WFTrafficEngDelegate> trafficEngDelegate;

- (void)cleanup;
- (void)__sendPeriodicEvent:(id)a0;
- (BOOL)__configureRapportDiscoveryClient;
- (void)__activateDiscovery;
- (void)__sendKeepAliveEvent:(id)a0 dictionary:(id)a1;
- (void)__registerCallbacksAndActivate;
- (id)__collectCriticalAppInfo;
- (void)__invalidateSession;
- (void).cxx_destruct;
- (void)__invalidateDiscovery;
- (void)__sendEventToPeers;
- (void)__configureRapportSessionClient:(id)a0;
- (void)__tearDownRapportDataSession;
- (void)__registerRequestHandler;
- (id)initWithTrafficEngDelegate:(id)a0;
- (void)__requestCriticalAppInfo:(id)a0 completionBlock:(id /* block */)a1;
- (void)dealloc;

@end
