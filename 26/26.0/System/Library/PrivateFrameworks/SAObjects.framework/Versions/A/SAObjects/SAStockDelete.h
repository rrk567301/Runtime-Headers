@class NSArray;

@interface SAStockDelete : SADomainCommand

@property (copy, nonatomic) NSArray *stocks;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
