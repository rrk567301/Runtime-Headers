@class NSArray;

@interface SAClockDelete : SADomainCommand

@property (copy, nonatomic) NSArray *clockIds;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
