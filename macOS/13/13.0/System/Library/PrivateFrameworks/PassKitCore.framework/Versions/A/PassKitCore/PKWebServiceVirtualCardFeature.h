@class NSString, NSSet;

@interface PKWebServiceVirtualCardFeature : PKWebServiceRegionFeature

@property (readonly, copy, nonatomic) NSString *merchantId;
@property (readonly, copy, nonatomic) NSSet *supportedNetworks;

+ (id)virtualCardFeatureWithWebService:(id)a0;

- (void).cxx_destruct;
- (id)initWithFeatureType:(long long)a0 dictionary:(id)a1 region:(id)a2;

@end
