@interface ConversationKit.ScreenSharingViewModel : ConversationKit.ScreenSharingBaseViewModel <CNKScreenSharingStateObserving> {
    void /* unknown type, empty encoding */ screenSharingStateMonitor;
    void /* unknown type, empty encoding */ screenSharingAllowed;
}

- (void)screenSharingStateMonitor:(id)a0 didUpdateScreenSharingBroadcastingState:(BOOL)a1;
- (void)screenSharingStateMonitor:(id)a0 didUpdateScreenSharingState:(BOOL)a1;
- (void)screenSharingStateMonitorDidUpdateScreenInfoForParticipant:(id)a0;

@end
