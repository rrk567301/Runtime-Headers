@class NSSet;

@interface PKWebServiceTicketingFeature : PKWebServiceRegionFeature {
    NSSet *_supportedFeatures;
}

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 region:(id)a1;
- (char)isIntegrationTypeSupported:(long long)a0;

@end
