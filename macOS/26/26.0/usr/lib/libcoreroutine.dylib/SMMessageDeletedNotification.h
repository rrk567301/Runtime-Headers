@class SMMessage;

@interface SMMessageDeletedNotification : RTNotification

@property (readonly, nonatomic) SMMessage *message;

- (id)initWithMessage:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
