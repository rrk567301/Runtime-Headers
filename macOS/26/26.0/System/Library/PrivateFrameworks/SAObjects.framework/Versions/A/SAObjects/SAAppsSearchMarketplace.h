@class NSString;

@interface SAAppsSearchMarketplace : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSString *marketplace;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
