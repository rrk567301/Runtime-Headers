@interface PassKitMacHelper.UIFlowManager : NSObject <PKUIFlowManagerRendererDelegate> {
    void /* unknown type, empty encoding */ parentRenderer;
    void /* unknown type, empty encoding */ resultHandler;
    void /* unknown type, empty encoding */ onViewLoaded;
    void /* unknown type, empty encoding */ root;
    void /* unknown type, empty encoding */ activeNode;
    void /* unknown type, empty encoding */ completion;
    void /* unknown type, empty encoding */ isPerformingMutation;
    void /* unknown type, empty encoding */ inflightRenderersBeingPresented;
}

- (id)init;
- (void).cxx_destruct;
- (void)rendererDidDisappearWithRenderer:(id)a0;
- (void)rendererDidRunOutOfContentWithRenderer:(id)a0;

@end
