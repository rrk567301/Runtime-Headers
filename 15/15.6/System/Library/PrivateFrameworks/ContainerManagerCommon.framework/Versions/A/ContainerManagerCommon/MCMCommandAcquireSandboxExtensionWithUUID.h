@class MCMConcreteContainerIdentity;

@interface MCMCommandAcquireSandboxExtensionWithUUID : MCMCommand <MCMParametersWithConcreteContainer>

@property (readonly, nonatomic) MCMConcreteContainerIdentity *concreteContainerIdentity;
@property (readonly, nonatomic) char includedPath;
@property (readonly, nonatomic) char includedInfo;
@property (readonly, nonatomic) char includedUserManagedAssetsPath;
@property (readonly, nonatomic) char includedCreator;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (void)execute;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (char)preflightClientAllowed;

@end
