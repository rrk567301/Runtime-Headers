@class NSMutableDictionary;

@interface CESRAudioSamplingConfigManager : NSObject {
    NSMutableDictionary *_audioSamplingConfigDict;
}

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldSampleFromConfigForProductType:(long long)a0 language:(id)a1;
- (id)initWithAudioSamplingConfigDict:(id)a0;
- (void)loadConfigs;
- (id)_createConfigFromProductType:(long long)a0;
- (id)audioSamplingConfigDict;

@end
