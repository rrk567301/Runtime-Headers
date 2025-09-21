@class NSDictionary;

@interface SACFFlowCommand : SACFAbstractClientCommand

@property (copy, nonatomic) NSDictionary *jsDialogScripts;

+ (id)flowCommand;
+ (id)flowCommandWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
