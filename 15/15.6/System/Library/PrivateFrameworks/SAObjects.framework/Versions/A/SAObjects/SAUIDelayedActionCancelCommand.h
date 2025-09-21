@class NSString;

@interface SAUIDelayedActionCancelCommand : SADomainCommand

@property (copy, nonatomic) NSString *delayedActionAceId;

+ (id)delayedActionCancelCommand;
+ (id)delayedActionCancelCommandWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
