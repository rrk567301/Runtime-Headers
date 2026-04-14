@class MCMConcreteContainerIdentity;

@interface MCMCommandDiskUsageForContainer : MCMCommand <MCMParametersWithConcreteContainer>

@property (readonly, nonatomic) MCMConcreteContainerIdentity *concreteContainerIdentity;
@property (readonly, nonatomic) BOOL includedPath;
@property (readonly, nonatomic) BOOL includedInfo;
@property (readonly, nonatomic) BOOL includedUserManagedAssetsPath;
@property (readonly, nonatomic) BOOL includedCreator;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void)execute;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (void).cxx_destruct;
- (BOOL)preflightClientAllowed;

@end
