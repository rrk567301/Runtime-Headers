@class SMMessage;

@interface SMMessageDeletedNotification : RTNotification

@property (readonly, nonatomic) SMMessage *message;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMessage:(id)a0;

@end
