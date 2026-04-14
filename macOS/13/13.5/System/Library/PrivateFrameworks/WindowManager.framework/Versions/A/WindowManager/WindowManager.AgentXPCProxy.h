@interface WindowManager.AgentXPCProxy : NSObject <WindowManager.AgentXPCProxyClientInterface> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ windowPickingDelegate;
}

- (id)init;
- (void).cxx_destruct;
- (void)didCancelWindowPickingMode;
- (void)didEndWindowPickingModeWithSelectedWindow:(unsigned int)a0;

@end
