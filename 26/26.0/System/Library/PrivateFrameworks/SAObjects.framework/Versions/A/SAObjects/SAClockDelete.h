@class NSArray;

@interface SAClockDelete : SADomainCommand

@property (copy, nonatomic) NSArray *clockIds;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
