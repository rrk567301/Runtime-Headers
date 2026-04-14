@class NSDictionary, NSArray;

@interface VSIdentityProviderStorefrontParser : NSObject

@property (retain, nonatomic) NSDictionary *storefrontsByCountryCode;
@property (retain, nonatomic) NSDictionary *providersByStorefront;
@property (copy, nonatomic) NSArray *allIdentityProviders;
@property (copy, nonatomic) NSArray *allStorefronts;
@property (readonly, copy, nonatomic) NSDictionary *identityProvidersByStorefront;
@property (readonly, copy, nonatomic) NSArray *tvProviderSupportedStorefronts;

- (id)init;
- (void).cxx_destruct;
- (id)providersForStorefront:(id)a0;

@end
