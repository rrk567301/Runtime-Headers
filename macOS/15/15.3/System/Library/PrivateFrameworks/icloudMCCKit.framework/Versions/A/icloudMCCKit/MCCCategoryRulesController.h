@class NSXPCListener, NSString, NSDate, MCCSecretAgentController, MCCBgTimer;
@protocol MCCCategoryRulesDelegate;

@interface MCCCategoryRulesController : NSObject <MCCCategoryRulesClientProtocol, NSXPCListenerDelegate> {
    MCCSecretAgentController *_agentController;
    NSXPCListener *_callbackListener;
    NSDate *_lastCheckin;
    MCCBgTimer *_bgTimer;
    MCCBgTimer *_reconnectTimer;
}

@property (weak, nonatomic) id<MCCCategoryRulesDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)registerForWebRuleNotifications;
- (void)_checkConnectionWith:(id)a0;
- (void)agentIsAlive;
- (BOOL)createRuleWithSender:(id)a0 category:(id)a1 lastModified:(double)a2 type:(id)a3;
- (BOOL)notifyWebRuleWithSender:(id)a0 category:(id)a1 lastModified:(double)a2;
- (void)overrideRulesChanged:(id)a0;
- (void)rulesChanged:(id)a0;
- (BOOL)sendPendingRules:(id)a0;

@end
