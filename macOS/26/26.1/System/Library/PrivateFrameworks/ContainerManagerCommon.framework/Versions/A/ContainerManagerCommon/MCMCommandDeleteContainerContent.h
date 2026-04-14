@class MCMContainerIdentity;

@interface MCMCommandDeleteContainerContent : MCMCommand <MCMParametersWithContainer>

@property (readonly, nonatomic) MCMContainerIdentity *containerIdentity;

+ (Class)incomingMessageClass;
+ (unsigned long long)command;

- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (void)execute;
- (BOOL)preflightClientAllowed;
- (void).cxx_destruct;
- (id)initWithContainerIdentity:(id)a0 context:(id)a1 resultPromise:(id)a2;

@end
