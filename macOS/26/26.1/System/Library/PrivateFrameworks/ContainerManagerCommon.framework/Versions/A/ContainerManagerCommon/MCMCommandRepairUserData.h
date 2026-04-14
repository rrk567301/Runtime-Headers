@class NSURL;

@interface MCMCommandRepairUserData : MCMCommand <MCMParametersRepairUserData>

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) char *sandboxToken;

+ (Class)incomingMessageClass;
+ (unsigned long long)command;

- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (void)execute;
- (void)dealloc;
- (BOOL)preflightClientAllowed;
- (void).cxx_destruct;

@end
