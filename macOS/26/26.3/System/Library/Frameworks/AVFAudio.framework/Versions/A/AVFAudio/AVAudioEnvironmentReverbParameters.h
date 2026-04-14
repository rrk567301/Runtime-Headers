@class AVAudioUnitEQFilterParameters;

@interface AVAudioEnvironmentReverbParameters : NSObject {
    void *_impl;
}

@property (nonatomic) BOOL enable;
@property (nonatomic) float level;
@property (readonly, nonatomic) AVAudioUnitEQFilterParameters *filterParameters;

- (id)initWithEnvironment:(void *)a0;
- (id)init;
- (void)dealloc;
- (void)loadFactoryReverbPreset:(long long)a0;

@end
