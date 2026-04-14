@class MCMConcreteContainerIdentity;

@interface MCMCommandReplaceContainer : MCMCommand <MCMParametersReplace>

@property (readonly, nonatomic) BOOL asyncReclaim;
@property (readonly, nonatomic) MCMConcreteContainerIdentity *containerIdentityOld;
@property (readonly, nonatomic) MCMConcreteContainerIdentity *containerIdentityNew;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void)execute;
- (void).cxx_destruct;
- (BOOL)preflightClientAllowed;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;

@end
