@class NSArray, NSMutableDictionary, ATXDNDModeConfigurationClient, ATXModeEntityTrialClientWrapper;

@interface ATXModeConfigurationLogger : NSObject {
    ATXModeEntityTrialClientWrapper *_modeEntityTrialClientWrapper;
}

@property (retain, nonatomic) NSMutableDictionary *cachedSuggestedItems;
@property (retain, nonatomic) NSArray *cachedConfigurations;
@property (readonly, nonatomic) ATXDNDModeConfigurationClient *client;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDNDModeConfigurationClient:(id)a0;
- (void)logMetricForConfiguration:(id)a0;
- (void)logModeConfigurations;
- (void)logModeConfigurationsWithXPCActivity:(id)a0;
- (void)retrieveEvents;

@end
