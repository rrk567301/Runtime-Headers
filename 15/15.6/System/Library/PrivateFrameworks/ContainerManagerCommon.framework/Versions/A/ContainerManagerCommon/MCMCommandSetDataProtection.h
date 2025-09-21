@class MCMContainerIdentity;

@interface MCMCommandSetDataProtection : MCMCommand <MCMParametersSetDataProtection>

@property (readonly, nonatomic) char skipIfUnchanged;
@property (readonly, nonatomic, getter=isThirdParty) char thirdParty;
@property (readonly, nonatomic) int dataProtectionClass;
@property (readonly, nonatomic) char retryIfLocked;
@property (readonly, nonatomic) MCMContainerIdentity *containerIdentity;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (void)execute;
- (char)_updateMetadataForContainerIdentity:(id)a0 dataProtectionClass:(int)a1 error:(id *)a2;
- (id)initWithContainerIdentity:(id)a0 thirdParty:(char)a1 dataProtectionClass:(int)a2 retryIfLocked:(char)a3 skipIfUnchanged:(char)a4 context:(id)a5 resultPromise:(id)a6;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (char)preflightClientAllowed;

@end
