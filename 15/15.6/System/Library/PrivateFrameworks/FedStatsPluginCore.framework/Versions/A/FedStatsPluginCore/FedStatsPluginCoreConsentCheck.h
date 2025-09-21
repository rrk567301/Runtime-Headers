@class NSDictionary;

@interface FedStatsPluginCoreConsentCheck : NSObject

@property (retain) NSDictionary *consentConfiguration;

+ (id)sharedInstance;
+ (char)checkConsentConfigurationItem:(id)a0;
+ (char)isConsentedForUseCase:(id)a0;

- (void).cxx_destruct;
- (id)initWithConsentConfiguration:(id)a0;

@end
