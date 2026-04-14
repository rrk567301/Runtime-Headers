@class NSDictionary;

@interface BWAudioConverterNode : BWNode {
    NSDictionary *_settings;
    struct OpaqueFigSampleBufferProcessor { } *_audioCompressionSBP;
}

@property (readonly, nonatomic) NSDictionary *gaplessPlaybackInfo;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (id)nodeType;
- (id)settings;
- (void)setSettings:(id)a0;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeSubType;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)acquireHardware;
- (void)relinquishHardware;

@end
