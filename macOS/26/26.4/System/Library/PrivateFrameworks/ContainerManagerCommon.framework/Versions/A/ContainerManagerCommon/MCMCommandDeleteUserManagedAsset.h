@class NSString, MCMContainerIdentity;

@interface MCMCommandDeleteUserManagedAsset : MCMCommand <MCMParametersDeleteUserManagedAsset>

@property (readonly, nonatomic) NSString *sourceRelativePath;
@property (readonly, nonatomic) MCMContainerIdentity *containerIdentity;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void)execute;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (void).cxx_destruct;
- (BOOL)preflightClientAllowed;

@end
