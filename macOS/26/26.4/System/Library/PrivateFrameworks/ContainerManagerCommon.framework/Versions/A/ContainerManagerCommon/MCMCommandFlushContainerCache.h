@protocol MCMXPCMessage, MCMContainerConfiguration;

@interface MCMCommandFlushContainerCache : MCMCommand <MCMParametersFlushContainerCache>

@property (readonly, nonatomic) id<MCMXPCMessage> message;
@property (readonly, nonatomic) BOOL transient;
@property (readonly, nonatomic) id<MCMContainerConfiguration> containerConfig;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void)execute;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (void).cxx_destruct;
- (BOOL)preflightClientAllowed;

@end
