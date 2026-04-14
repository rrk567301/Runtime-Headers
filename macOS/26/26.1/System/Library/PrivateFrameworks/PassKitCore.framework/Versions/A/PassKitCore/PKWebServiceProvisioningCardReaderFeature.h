@class NSArray;

@interface PKWebServiceProvisioningCardReaderFeature : PKWebServiceRegionFeature

@property (readonly, nonatomic) NSArray *networkConfigurations;

- (id)initWithDictionary:(id)a0 region:(id)a1;
- (void).cxx_destruct;
- (BOOL)isSupportedForNetwork:(long long)a0 device:(id)a1;

@end
