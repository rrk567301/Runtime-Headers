@class NSString;

@interface SAAssistantDestroyed : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *assistantId;

+ (id)assistantDestroyedWithDictionary:(id)a0 context:(id)a1;
+ (id)assistantDestroyed;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
