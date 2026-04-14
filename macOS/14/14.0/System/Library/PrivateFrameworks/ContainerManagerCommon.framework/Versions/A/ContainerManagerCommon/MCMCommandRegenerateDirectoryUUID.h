@class MCMConcreteContainerIdentity;

@interface MCMCommandRegenerateDirectoryUUID : MCMCommand <MCMParametersWithConcreteContainer>

@property (readonly, nonatomic) MCMConcreteContainerIdentity *concreteContainerIdentity;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (void)execute;
- (id)initWithConcreteContainerIdentity:(id)a0 context:(id)a1 resultPromise:(id)a2;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (BOOL)preflightClientAllowed;
- (id)regenerateDirectoryUUIDNoCacheUpdateWithMetadata:(id)a0 error:(id *)a1;

@end
