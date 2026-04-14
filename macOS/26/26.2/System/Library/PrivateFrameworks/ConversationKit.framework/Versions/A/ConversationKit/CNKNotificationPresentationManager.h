@interface CNKNotificationPresentationManager : NSObject {
    void /* unknown type, empty encoding */ callCenter;
    void /* unknown type, empty encoding */ _conversationControlsManager;
    void /* unknown type, empty encoding */ presentedNotification;
    void /* unknown type, empty encoding */ presentedNotificationDismissalTimer;
}

@property (nonatomic, weak) void /* function */ notificationDelegate;

- (void).cxx_destruct;
- (id)init;
- (void)startCollaboration;

@end
