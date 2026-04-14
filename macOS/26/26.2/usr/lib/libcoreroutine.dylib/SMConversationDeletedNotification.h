@class SMConversation;

@interface SMConversationDeletedNotification : RTNotification

@property (readonly, nonatomic) SMConversation *conversation;

- (void).cxx_destruct;
- (id)init;
- (id)initWithConversation:(id)a0;

@end
