@class NSString, NSMutableSet, DNDModeConfigurationService;

@interface PSUModeConfigurationService : NSObject <DNDModeConfigurationServiceListener> {
    NSMutableSet *_modesWithIntelligentBreakthroughEnabled;
    DNDModeConfigurationService *_modeService;
    BOOL _didCompleteOneSuccessfulModeConfigurationFetch;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)modeConfigurationService:(id)a0 didReceiveAvailableModesUpdate:(id)a1;
- (id)init;
- (void)_updateModesWithIntelligentBreakthroughEnabled;
- (BOOL)doesModeHaveIntelligentBreakthroughEnabled:(id)a0;

@end
