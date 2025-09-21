@class SMMessage, SMHandle;

@interface SMMessageReceivedNotification : RTNotification

@property (readonly, nonatomic) SMMessage *message;
@property (readonly, nonatomic) SMHandle *from;
@property (readonly, nonatomic) char fromMe;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0 fromHandle:(id)a1 fromMe:(char)a2;

@end
