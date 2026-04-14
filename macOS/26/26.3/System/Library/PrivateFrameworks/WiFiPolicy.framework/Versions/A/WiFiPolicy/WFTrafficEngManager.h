@class RPCompanionLinkClient, NSObject;
@protocol OS_dispatch_queue, WFTrafficEngDelegate;

@interface WFTrafficEngManager : NSObject {
    NSObject<OS_dispatch_queue> *_traffic_engr_queue;
    RPCompanionLinkClient *_discoveryClient;
    BOOL _configured;
}

@property (nonatomic) id<WFTrafficEngDelegate> trafficEngDelegate;

- (void)__sendEventToPeers;
- (void)__requestCriticalAppInfo:(id)a0 completionBlock:(id /* block */)a1;
- (void)__activateDiscovery;
- (void)cleanup;
- (void)__sendKeepAliveEvent:(id)a0 dictionary:(id)a1;
- (void).cxx_destruct;
- (void)__sendPeriodicEvent:(id)a0;
- (void)__tearDownRapportDataSession;
- (void)__invalidateSession;
- (void)dealloc;
- (void)__invalidateDiscovery;
- (void)__registerCallbacksAndActivate;
- (BOOL)__configureRapportDiscoveryClient;
- (id)__collectCriticalAppInfo;
- (id)initWithTrafficEngDelegate:(id)a0;
- (void)__configureRapportSessionClient:(id)a0;
- (void)__registerRequestHandler;

@end
