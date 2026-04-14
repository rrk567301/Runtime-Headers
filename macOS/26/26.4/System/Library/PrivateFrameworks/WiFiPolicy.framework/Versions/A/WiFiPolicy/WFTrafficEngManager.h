@class RPCompanionLinkClient, NSObject;
@protocol OS_dispatch_queue, WFTrafficEngDelegate;

@interface WFTrafficEngManager : NSObject {
    NSObject<OS_dispatch_queue> *_traffic_engr_queue;
    RPCompanionLinkClient *_discoveryClient;
    BOOL _configured;
}

@property (nonatomic) id<WFTrafficEngDelegate> trafficEngDelegate;

- (void)cleanup;
- (void)__registerCallbacksAndActivate;
- (void)__configureRapportSessionClient:(id)a0;
- (void)__invalidateSession;
- (id)initWithTrafficEngDelegate:(id)a0;
- (void)__activateDiscovery;
- (id)__collectCriticalAppInfo;
- (void)__sendEventToPeers;
- (void)__sendKeepAliveEvent:(id)a0 dictionary:(id)a1;
- (void).cxx_destruct;
- (void)__requestCriticalAppInfo:(id)a0 completionBlock:(id /* block */)a1;
- (void)__registerRequestHandler;
- (void)__invalidateDiscovery;
- (void)__tearDownRapportDataSession;
- (BOOL)__configureRapportDiscoveryClient;
- (void)__sendPeriodicEvent:(id)a0;
- (void)dealloc;

@end
