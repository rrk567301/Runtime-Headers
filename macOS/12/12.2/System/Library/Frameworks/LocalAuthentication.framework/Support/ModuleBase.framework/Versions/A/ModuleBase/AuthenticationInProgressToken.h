@interface AuthenticationInProgressToken : NSObject <LARemoteAuthenticationOwnership>

@property (readonly) long long priority;
@property (readonly) int pid;

- (void)dealloc;
- (id)description;
- (id)initWithPriority:(long long)a0 pid:(int)a1;

@end
