@class NSString;

@interface MCMCommandGetCodeSignMapping : MCMCommand <MCMParametersWithIdentifier>

@property (readonly, nonatomic) NSString *identifier;

+ (Class)incomingMessageClass;
+ (unsigned long long)command;

- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (void)execute;
- (BOOL)preflightClientAllowed;
- (void).cxx_destruct;

@end
