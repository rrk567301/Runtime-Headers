@class NSString;

@interface SAAppsSearchMarketplace : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSString *marketplace;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
