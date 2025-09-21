@class NSDictionary;

@interface ProviderConfiguration : NSObject

@property (nonatomic) BOOL providerOff;
@property (readonly, nonatomic) BOOL socialEngineeringThreatTypeOff;
@property (readonly, nonatomic) BOOL malwareThreatTypeOff;
@property (readonly, nonatomic) BOOL unwantedSoftwareThreatTypeOff;
@property (readonly, nonatomic) BOOL useV5BatchGet;
@property (readonly, nonatomic) BOOL proxyOff;
@property (readonly, nonatomic) BOOL useV5;
@property (readonly, nonatomic) BOOL isWebBrowserOnly;
@property (readonly, copy, nonatomic) NSDictionary *configuration;

- (BOOL)isEqualToConfiguration:(id)a0;
- (id)init;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)_configureToBeOff;
- (void)_configureToUseDefaultValues;
- (void)_parseConfiguration:(id)a0;
- (BOOL)useV5ForConnection:(id)a0;

@end
