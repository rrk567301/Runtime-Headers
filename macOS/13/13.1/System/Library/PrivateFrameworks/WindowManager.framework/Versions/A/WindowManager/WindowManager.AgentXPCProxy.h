@interface WindowManager.AgentXPCProxy : NSObject <WindowManager.AgentXPCProxyClientInterface> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ windowPickingDelegate;
}

- (id)init;
- (void).cxx_destruct;
- (void)didEndWindowPickingModeWithSelectedWindow:(unsigned int)a0;
- (void)didCancelWindowPickingMode;

@end
