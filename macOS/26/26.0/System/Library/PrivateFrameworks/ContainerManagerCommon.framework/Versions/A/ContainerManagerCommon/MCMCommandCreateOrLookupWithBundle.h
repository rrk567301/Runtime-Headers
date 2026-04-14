@class NSURL;

@interface MCMCommandCreateOrLookupWithBundle : MCMCommand <MCMParametersCreateOrLookupWithBundle>

@property (readonly, nonatomic) BOOL createIfNecessary;
@property (readonly, nonatomic) BOOL transient;
@property (readonly, nonatomic) BOOL issueSandboxExtension;
@property (readonly, nonatomic) const char *sandboxToken;
@property (readonly, nonatomic) NSURL *bundleURL;
@property (readonly, nonatomic) NSURL *executableURL;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void)execute;
- (BOOL)preflightClientAllowed;
- (void)dealloc;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (void).cxx_destruct;
- (id)_containerIdentityWithError:(id *)a0;
- (id)_tokenForContainerPath:(id)a0 containerIdentity:(id)a1 error:(id *)a2;

@end
