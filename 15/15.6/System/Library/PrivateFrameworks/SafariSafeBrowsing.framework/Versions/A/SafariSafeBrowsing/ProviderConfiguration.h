@class NSDictionary;

@interface ProviderConfiguration : NSObject

@property (nonatomic) char providerOff;
@property (readonly, nonatomic) char socialEngineeringThreatTypeOff;
@property (readonly, nonatomic) char malwareThreatTypeOff;
@property (readonly, nonatomic) char unwantedSoftwareThreatTypeOff;
@property (readonly, nonatomic) char useV5BatchGet;
@property (readonly, nonatomic) char proxyOff;
@property (readonly, nonatomic) char useV5;
@property (readonly, copy, nonatomic) NSDictionary *configuration;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (char)isEqualToConfiguration:(id)a0;
- (void)_configureToBeOff;
- (void)_configureToUseDefaultValues;
- (void)_parseConfiguration:(id)a0;

@end
