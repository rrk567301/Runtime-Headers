@class NSArray;

@interface PKWebServiceRemoteNetworkPaymentFeature : PKWebServiceRegionFeature

@property (readonly, nonatomic) BOOL enabled;
@property (readonly, copy, nonatomic) NSArray *unsupportedIssuerCardCountryCodes;
@property (readonly, copy, nonatomic) NSArray *unsupportedNetworks;

+ (id)remoteNetworkPaymentFeatureWithWebService:(id)a0;

- (id)initWithDictionary:(id)a0 region:(id)a1;
- (void).cxx_destruct;

@end
