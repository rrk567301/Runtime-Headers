@class NSDictionary;

@interface FedStatsPluginCoreConsentCheck : NSObject

@property (retain) NSDictionary *consentConfiguration;

+ (id)sharedInstance;
+ (BOOL)checkConsentConfigurationItem:(id)a0;
+ (BOOL)isConsentedForUseCase:(id)a0;

- (void).cxx_destruct;
- (id)initWithConsentConfiguration:(id)a0;

@end
