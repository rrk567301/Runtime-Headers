@class NSSet;

@interface PKWebServiceTicketingFeature : PKWebServiceRegionFeature {
    NSSet *_supportedFeatures;
}

- (id)initWithDictionary:(id)a0 region:(id)a1;
- (void).cxx_destruct;
- (BOOL)isIntegrationTypeSupported:(long long)a0;

@end
