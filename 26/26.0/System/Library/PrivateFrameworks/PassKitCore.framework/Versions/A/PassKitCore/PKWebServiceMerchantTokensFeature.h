@class NSSet;

@interface PKWebServiceMerchantTokensFeature : PKWebServiceRegionFeature

@property (readonly, copy, nonatomic) NSSet *credentialTypesRequiringDPANNotifications;

- (id)initWithDictionary:(id)a0 region:(id)a1;
- (void).cxx_destruct;

@end
