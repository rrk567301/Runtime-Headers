@class NSURL;

@interface MCMCommandContainerFromPath : MCMCommand <MCMParametersWithURL>

@property (readonly, nonatomic) NSURL *url;

+ (Class)incomingMessageClass;
+ (unsigned long long)command;

- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (void)execute;
- (struct container_object_s { } *)_containerFromRelayToDaemonWithURL:(id)a0 relativePath:(char **)a1 error:(struct container_error_extended_s **)a2;
- (BOOL)preflightClientAllowed;
- (void).cxx_destruct;

@end
