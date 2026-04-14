@class SMMessage;

@interface SMMessageDeletedNotification : RTNotification

@property (readonly, nonatomic) SMMessage *message;

- (id)initWithMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
