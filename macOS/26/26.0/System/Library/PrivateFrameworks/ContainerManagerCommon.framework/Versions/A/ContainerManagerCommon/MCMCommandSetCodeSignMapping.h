@class NSString;

@interface MCMCommandSetCodeSignMapping : MCMCommand <MCMParametersSetCodeSignMapping>

@property (readonly, nonatomic) id info;
@property (readonly, nonatomic) id options;
@property (readonly, nonatomic) NSString *identifier;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void)execute;
- (BOOL)preflightClientAllowed;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (void).cxx_destruct;

@end
