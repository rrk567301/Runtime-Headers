@class NSDictionary, NSArray;

@interface VSIdentityProviderStorefrontParser : NSObject

@property (retain, nonatomic) NSDictionary *providersByStorefront;
@property (retain, nonatomic) NSDictionary *storefrontsByCountryCode;
@property (copy, nonatomic) NSArray *allIdentityProviders;
@property (copy, nonatomic) NSArray *allStorefronts;
@property (readonly, copy, nonatomic) NSDictionary *identityProvidersByStorefront;
@property (readonly, copy, nonatomic) NSArray *tvProviderSupportedStorefronts;

- (id)init;
- (void).cxx_destruct;
- (void)setAllStorefronts:(id)a0 withCurrentStorefrontCode:(id)a1;
- (id)providersForStorefront:(id)a0;
- (id)updateFeaturedStorefronts:(id)a0 withCurrentStorefrontCodeOrNil:(id)a1;

@end
