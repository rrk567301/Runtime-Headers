@class NSString, MCMContainerIdentity;

@interface MCMCommandDeleteUserManagedAsset : MCMCommand <MCMParametersDeleteUserManagedAsset>

@property (readonly, nonatomic) NSString *sourceRelativePath;
@property (readonly, nonatomic) MCMContainerIdentity *containerIdentity;

+ (Class)incomingMessageClass;
+ (unsigned long long)command;

- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (void)execute;
- (BOOL)preflightClientAllowed;
- (void).cxx_destruct;

@end
