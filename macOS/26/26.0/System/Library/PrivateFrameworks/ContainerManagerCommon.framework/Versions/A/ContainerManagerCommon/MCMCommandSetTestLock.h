@protocol MCMXPCMessage;

@interface MCMCommandSetTestLock : MCMCommand <MCMParametersSetTestLock>

@property (readonly, nonatomic) id<MCMXPCMessage> message;
@property (readonly, nonatomic) unsigned long long requestedLocks;
@property (readonly, nonatomic) BOOL enable;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void)execute;
- (BOOL)preflightClientAllowed;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (void).cxx_destruct;

@end
