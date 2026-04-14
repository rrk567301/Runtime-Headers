@class MCMError, MCMContainerIdentity;

@interface MCMCommandOpenPrimordialDataContainer : MCMCommand

@property (readonly, nonatomic) MCMContainerIdentity *containerIdentity;
@property (readonly, nonatomic) MCMError *error;
@property (readonly, nonatomic) BOOL testMode;
@property (readonly, nonatomic) BOOL extension;

+ (Class)incomingMessageClass;
+ (unsigned long long)command;

- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (void)execute;
- (BOOL)preflightClientAllowed;
- (void).cxx_destruct;

@end
