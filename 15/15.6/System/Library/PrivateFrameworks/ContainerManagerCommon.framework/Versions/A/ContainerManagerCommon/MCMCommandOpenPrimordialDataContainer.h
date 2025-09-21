@class MCMError, MCMContainerIdentity;

@interface MCMCommandOpenPrimordialDataContainer : MCMCommand

@property (readonly, nonatomic) MCMContainerIdentity *containerIdentity;
@property (readonly, nonatomic) MCMError *error;
@property (readonly, nonatomic) char testMode;
@property (readonly, nonatomic) char extension;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (void)execute;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (char)preflightClientAllowed;

@end
