@class NSArray;

@interface SAStockDelete : SADomainCommand

@property (copy, nonatomic) NSArray *stocks;

- (id)groupIdentifier;
- (BOOL)mutatingCommand;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
