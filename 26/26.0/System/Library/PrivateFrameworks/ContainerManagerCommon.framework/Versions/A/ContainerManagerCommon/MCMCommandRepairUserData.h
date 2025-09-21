@class NSURL;

@interface MCMCommandRepairUserData : MCMCommand <MCMParametersRepairUserData>

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) char *sandboxToken;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void)execute;
- (BOOL)preflightClientAllowed;
- (void)dealloc;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (void).cxx_destruct;

@end
