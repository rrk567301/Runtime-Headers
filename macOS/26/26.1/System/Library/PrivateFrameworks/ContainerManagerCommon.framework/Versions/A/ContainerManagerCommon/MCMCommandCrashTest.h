@interface MCMCommandCrashTest : MCMCommand <MCMParametersCrashTest>

@property (readonly, nonatomic) unsigned long long crashCount;
@property (readonly, nonatomic) unsigned long long setTestLocks;

+ (Class)incomingMessageClass;
+ (unsigned long long)command;

- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (void)execute;
- (BOOL)preflightClientAllowed;

@end
