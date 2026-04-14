@class TUCall;

@interface ConversationKit.ScreenSharingStateMonitor : NSObject <CNKScreenSharingStateMonitorProtocol> {
    void /* unknown type, empty encoding */ conversationController;
    void /* unknown type, empty encoding */ observations;
    void /* unknown type, empty encoding */ conversationControllerProvider;
    void /* unknown type, empty encoding */ screenSharingRemoteControllerObservation;
    void /* unknown type, empty encoding */ currentlySharingParticipant;
}

@property (nonatomic) BOOL isBroadcastingScreenSharing;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } currentlySharingParticipantContentsSize;
@property (nonatomic, retain) TUCall *call;

- (void)removeObserver:(id)a0;
- (id)init;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;

@end
