@class NSMutableDictionary;

@interface CESRAudioSamplingConfigManager : NSObject {
    NSMutableDictionary *_audioSamplingConfigDict;
}

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAudioSamplingConfigDict:(id)a0;
- (void)loadConfigs;
- (id)audioSamplingConfigDict;
- (id)_createConfigFromProductType:(long long)a0;
- (BOOL)shouldSampleFromConfigForProductType:(long long)a0 language:(id)a1;

@end
