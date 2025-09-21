@class MCMContainerIdentity;

@interface MCMCommandDeleteContainerContent : MCMCommand <MCMParametersWithContainer>

@property (readonly, nonatomic) MCMContainerIdentity *containerIdentity;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void)execute;
- (BOOL)preflightClientAllowed;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (void).cxx_destruct;
- (id)initWithContainerIdentity:(id)a0 context:(id)a1 resultPromise:(id)a2;

@end
