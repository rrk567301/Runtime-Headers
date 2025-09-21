@class MCMUserIdentity, MCMError, MCMContainerIdentity, NSURL, MCMCodeSignInfo;

@interface MCMCommandCreateOrLookupWithBundle : MCMCommand <MCMParametersCreateOrLookupWithBundle>

@property (readonly, nonatomic) unsigned long long containerClass;
@property (readonly, nonatomic) MCMCodeSignInfo *info;
@property (readonly, nonatomic) MCMUserIdentity *userIdentity;
@property (readonly, nonatomic) MCMContainerIdentity *containerIdentity;
@property (readonly, nonatomic) MCMError *error;
@property (readonly, nonatomic) char createIfNecessary;
@property (readonly, nonatomic) char transient;
@property (readonly, nonatomic) char issueSandboxExtension;
@property (readonly, nonatomic) const char *sandboxToken;
@property (readonly, nonatomic) NSURL *bundleURL;
@property (readonly, nonatomic) NSURL *executableURL;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void)dealloc;
- (void).cxx_destruct;
- (void)execute;
- (void)_commonInit:(id)a0;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (char)preflightClientAllowed;

@end
