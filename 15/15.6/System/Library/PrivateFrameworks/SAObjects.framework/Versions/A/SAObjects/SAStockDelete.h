@class NSArray;

@interface SAStockDelete : SADomainCommand

@property (copy, nonatomic) NSArray *stocks;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
