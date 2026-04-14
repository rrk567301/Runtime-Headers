@interface ConversationKit.ScreenSharingInteractionController : NSObject <CNKScreenSharingStateObserving, CNKScreenSharingInteractionControllerProtocol> {
    void /* unknown type, empty encoding */ sessionObserverTask;
    void /* unknown type, empty encoding */ groupSessionStateCancellable;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ latestRemoteControlDate;
    void /* unknown type, empty encoding */ hasJoinedOneToOneConversation;
    void /* unknown type, empty encoding */ isBroadcastingScreenSharing;
    void /* unknown type, empty encoding */ deviceRestrictionsQueue;
    void /* unknown type, empty encoding */ deviceRestrictionController;
    void /* unknown type, empty encoding */ callsFeatureManager;
    void /* unknown type, empty encoding */ _remoteControlState;
    void /* unknown type, empty encoding */ onUpdateUI;
}

- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)screenSharingStateMonitor:(id)a0 didUpdateScreenSharingBroadcastingState:(BOOL)a1;

@end
