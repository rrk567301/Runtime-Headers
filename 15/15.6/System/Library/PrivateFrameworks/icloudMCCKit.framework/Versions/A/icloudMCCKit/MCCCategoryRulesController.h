@class NSXPCListener, NSString, NSObject, NSDate, MCCSecretAgentController, MCCBgTimer;
@protocol MCCCategoryRulesDelegate, OS_dispatch_queue;

@interface MCCCategoryRulesController : NSObject <MCCCategoryRulesClientProtocol, NSXPCListenerDelegate> {
    MCCSecretAgentController *_agentController;
    NSXPCListener *_callbackListener;
    NSDate *_lastCheckin;
    MCCBgTimer *_bgTimer;
    MCCBgTimer *_reconnectTimer;
    NSObject<OS_dispatch_queue> *reconnectTimerQueue;
}

@property (weak, nonatomic) id<MCCCategoryRulesDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)registerForWebRuleNotifications;
- (void)_checkConnection;
- (void)agentIsAlive;
- (void)newOldCategoryTimestampsChanged:(id)a0;
- (char)notifyFullSyncCategoryOverrides:(id)a0;
- (char)notifyNewOldCategoryChange:(id)a0 timestamp:(double)a1;
- (char)notifyWebRuleWithSender:(id)a0 category:(id)a1 lastModified:(double)a2;
- (void)overrideRulesChanged:(id)a0;
- (void)registerForWebRuleNotifications:(unsigned long long)a0;
- (void)setupReconnectTimer;
- (void)syncAllCategoryOverrides:(id)a0;

@end
