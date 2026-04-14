@interface SiriSharedUI.SiriSharedUISmartDialogInteractionManager : NSObject <VRXInteractionDelegate, SRUIFCardLoadingObserver> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ popoverViewController;
    void /* unknown type, empty encoding */ isLoadingCard;
    void /* unknown type, empty encoding */ previousCard;
}

- (id)init;
- (id)presentingViewController;
- (void)didEndEditing;
- (void).cxx_destruct;
- (void)requestDeviceUnlock:(id /* block */)a0;
- (void)emitInstrumentationEvent:(id)a0;
- (void)emitInstrumentationEvent:(id)a0 viewId:(id)a1;
- (void)informHostOfViewResize:(struct CGSize { double x0; double x1; })a0;
- (void)navigateWithPluginModelData:(id)a0 bundleName:(id)a1;
- (void)navigateWithResponseData:(id)a0;
- (void)performAceCommand:(id)a0;
- (void)performSFCommand:(id)a0;
- (void)performShowResponse:(id)a0;
- (void)submitIFMessagePayload:(id)a0;
- (void)willBeginEditing;

@end
