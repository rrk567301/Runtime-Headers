@class NSArray;

@interface PKWebServiceProvisioningCardReaderFeature : PKWebServiceRegionFeature

@property (readonly, nonatomic) NSArray *networkConfigurations;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 region:(id)a1;
- (BOOL)isSupportedForNetwork:(long long)a0 device:(id)a1;

@end
