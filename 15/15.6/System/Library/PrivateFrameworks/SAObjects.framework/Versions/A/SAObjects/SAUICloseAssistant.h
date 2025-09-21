@class NSString;

@interface SAUICloseAssistant : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *reason;

+ (id)closeAssistant;
+ (id)closeAssistantWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
