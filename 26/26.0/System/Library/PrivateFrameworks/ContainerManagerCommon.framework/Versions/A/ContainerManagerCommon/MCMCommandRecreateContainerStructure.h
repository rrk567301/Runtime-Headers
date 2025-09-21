@class MCMConcreteContainerIdentity;

@interface MCMCommandRecreateContainerStructure : MCMCommand <MCMParametersWithConcreteContainer>

@property (readonly, nonatomic) MCMConcreteContainerIdentity *concreteContainerIdentity;
@property (readonly, nonatomic) BOOL includedPath;
@property (readonly, nonatomic) BOOL includedInfo;
@property (readonly, nonatomic) BOOL includedUserManagedAssetsPath;
@property (readonly, nonatomic) BOOL includedCreator;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void)execute;
- (BOOL)preflightClientAllowed;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (void).cxx_destruct;
- (id)initWithConcreteContainerIdentity:(id)a0 context:(id)a1 resultPromise:(id)a2;

@end
