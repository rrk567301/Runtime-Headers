@class NSArray;

@interface SAStockAdd : SADomainCommand

@property (copy, nonatomic) NSArray *stocks;

+ (id)addWithDictionary:(id)a0 context:(id)a1;
+ (id)add;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
