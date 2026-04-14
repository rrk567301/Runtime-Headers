@class CNKConversationControlsManager;

@interface CNKNotificationPresentationManager : NSObject {
    void /* unknown type, empty encoding */ notificationCenter;
    void /* unknown type, empty encoding */ _conversationControlsManager;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ notificationDelegate;
@property (nonatomic, readonly) CNKConversationControlsManager *conversationControlsManager;

- (id)init;
- (void).cxx_destruct;
- (id)initWithNotificationCenter:(id)a0;
- (void)startCollaboration;

@end
