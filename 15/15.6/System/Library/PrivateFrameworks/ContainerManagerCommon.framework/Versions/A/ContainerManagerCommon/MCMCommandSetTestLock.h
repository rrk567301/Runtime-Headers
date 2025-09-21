@protocol MCMXPCMessage;

@interface MCMCommandSetTestLock : MCMCommand <MCMParametersSetTestLock>

@property (readonly, nonatomic) id<MCMXPCMessage> message;
@property (readonly, nonatomic) unsigned long long requestedLocks;
@property (readonly, nonatomic) char enable;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (void)execute;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (char)preflightClientAllowed;

@end
