@class NSArray;

@interface SATimerDismiss : SADomainCommand

@property (copy, nonatomic) NSArray *timerIds;

+ (id)dismiss;
+ (id)dismissWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
