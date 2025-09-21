@class NSString;

@interface SAAssistantNotReady : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *language;

+ (id)assistantNotReady;
+ (id)assistantNotReadyWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
