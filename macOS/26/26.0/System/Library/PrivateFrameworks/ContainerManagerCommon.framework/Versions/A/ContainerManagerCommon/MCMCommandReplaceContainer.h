@class MCMConcreteContainerIdentity;

@interface MCMCommandReplaceContainer : MCMCommand <MCMParametersReplace>

@property (readonly, nonatomic) BOOL asyncReclaim;
@property (readonly, nonatomic) MCMConcreteContainerIdentity *containerIdentityOld;
@property (readonly, nonatomic) MCMConcreteContainerIdentity *containerIdentityNew;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void)execute;
- (BOOL)preflightClientAllowed;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (void).cxx_destruct;

@end
