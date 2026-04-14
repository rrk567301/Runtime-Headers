@class NSString;

@interface SAAppsSearchMarketplace : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSString *marketplace;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
