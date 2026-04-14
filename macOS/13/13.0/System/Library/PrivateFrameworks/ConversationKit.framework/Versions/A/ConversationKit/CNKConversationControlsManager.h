@class NSUUID, CNKForegroundApp;

@interface CNKConversationControlsManager : NSObject {
    void /* unknown type, empty encoding */ initiallyActiveParticipantIdentifiers;
    void /* unknown type, empty encoding */ conversationController;
    void /* unknown type, empty encoding */ noticeCoordinator;
    void /* unknown type, empty encoding */ activeNoticeCancellable;
    void /* unknown type, empty encoding */ contentExtractor;
    void /* unknown type, empty encoding */ defaults;
    void /* unknown type, empty encoding */ features;
    void /* unknown type, empty encoding */ systemConversationControlsDelegate;
    void /* unknown type, empty encoding */ inCallConversationControlsDelegate;
    void /* unknown type, empty encoding */ inCallDetailsViewControllerDelegate;
    void /* unknown type, empty encoding */ audioRoutingDelegate;
    void /* unknown type, empty encoding */ approvalDelegate;
    void /* unknown type, empty encoding */ _shouldOpenMessages;
    void /* unknown type, empty encoding */ _shouldEnableStartingStagedActivity;
    void /* unknown type, empty encoding */ _audioRoute;
    void /* unknown type, empty encoding */ _bluetoothAudioFormat;
    void /* unknown type, empty encoding */ _localAudioEnabled;
    void /* unknown type, empty encoding */ _localVideoButtonState;
    void /* unknown type, empty encoding */ _shareMenuButtonState;
    void /* unknown type, empty encoding */ _foregroundApp;
    void /* unknown type, empty encoding */ shouldShowDelayedLMIBanner;
    void /* unknown type, empty encoding */ isWaitingOnFirstRemoteFrame;
    void /* unknown type, empty encoding */ shouldShowAVLessLeaveConfirmation;
    void /* unknown type, empty encoding */ avLessLeaveConfirmationPresentedDate;
    void /* unknown type, empty encoding */ activityLaunchTimer;
    void /* unknown type, empty encoding */ _appLaunchButtonType;
    void /* unknown type, empty encoding */ screenShareCountdownTimer;
}

@property (nonatomic, readonly) NSUUID *callUUID;
@property (nonatomic, readonly) BOOL conversationIsAVLess;
@property (nonatomic) void /* unknown type, empty encoding */ shouldShowCallDetailsWhenReady;
@property (nonatomic, retain) CNKForegroundApp *foregroundApp;
@property (nonatomic) void /* unknown type, empty encoding */ applicationState;

- (void)handleDidChangeIsWaitingOnFirstRemoteFrame:(id)a0;
- (void)showInCallHUD;
- (void)accessibilityDidAddPendingParticipant:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithActiveCall:(id)a0;

@end
