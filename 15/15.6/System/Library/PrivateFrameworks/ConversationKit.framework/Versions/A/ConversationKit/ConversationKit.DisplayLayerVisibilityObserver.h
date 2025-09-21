@interface ConversationKit.DisplayLayerVisibilityObserver : _TtCs12_SwiftObject <CNKScreenSharingStateObserving, CNKScreenSharingInteractionControllerDelegate> {
    void /* unknown type, empty encoding */ _isHidingLayersFromClonedDisplay;
    void /* unknown type, empty encoding */ display;
    void /* unknown type, empty encoding */ screenShareAttributes;
}

- (void)screenSharingInteractionController:(id)a0 didUpdateRemoteControlStatus:(char)a1;
- (void)screenSharingStateMonitor:(id)a0 didUpdateScreenSharingBroadcastingState:(char)a1;

@end
