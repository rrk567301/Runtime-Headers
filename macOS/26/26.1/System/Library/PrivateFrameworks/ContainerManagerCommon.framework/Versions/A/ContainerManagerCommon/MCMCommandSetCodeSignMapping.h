@class NSString;

@interface MCMCommandSetCodeSignMapping : MCMCommand <MCMParametersSetCodeSignMapping>

@property (readonly, nonatomic) id info;
@property (readonly, nonatomic) id options;
@property (readonly, nonatomic) NSString *identifier;

+ (Class)incomingMessageClass;
+ (unsigned long long)command;

- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (void)execute;
- (BOOL)preflightClientAllowed;
- (void).cxx_destruct;

@end
