@class NSDictionary;

@interface ProviderConfiguration : NSObject {
    NSDictionary *_configuration;
}

@property (nonatomic) BOOL providerOff;
@property (readonly, nonatomic) BOOL socialEngineeringThreatTypeOff;
@property (readonly, nonatomic) BOOL malwareThreatTypeOff;
@property (readonly, nonatomic) BOOL unwantedSoftwareThreatTypeOff;
@property (readonly, nonatomic) BOOL proxyOff;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (BOOL)isEqualToConfiguration:(id)a0;
- (void)_configureToUseDefaultValues;
- (void)_configureToBeOff;
- (id)_currentRegionCode;
- (void)_parseConfiguration:(id)a0;

@end
