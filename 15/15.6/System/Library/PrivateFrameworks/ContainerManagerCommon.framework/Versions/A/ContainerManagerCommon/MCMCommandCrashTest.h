@interface MCMCommandCrashTest : MCMCommand <MCMParametersCrashTest>

@property (readonly, nonatomic) unsigned long long crashCount;
@property (readonly, nonatomic) unsigned long long setTestLocks;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void)execute;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (char)preflightClientAllowed;

@end
