@interface ConversationKit.ScreenSharingViewModel : ConversationKit.ScreenSharingBaseViewModel <CNKScreenSharingStateObserving> {
    void /* unknown type, empty encoding */ screenSharingStateMonitor;
}

- (void)screenSharingStateMonitor:(id)a0 didChangeClientCursorAvailable:(char)a1;
- (void)screenSharingStateMonitor:(id)a0 didUpdateScreenSharingBroadcastingState:(char)a1;
- (void)screenSharingStateMonitor:(id)a0 didUpdateScreenSharingState:(char)a1;
- (void)screenSharingStateMonitorDidUpdateScreenInfoForParticipant:(id)a0;

@end
