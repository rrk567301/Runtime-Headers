@class NSDictionary;

@interface BWAudioConverterNode : BWNode {
    NSDictionary *_settings;
    struct OpaqueFigSampleBufferProcessor { } *_audioCompressionSBP;
    BOOL _cinematicAudioCapture;
    BOOL _multiCamClientCompositingEnabled;
    BOOL _expectsToRecordOnlyOnce;
}

@property (readonly, nonatomic) NSDictionary *gaplessPlaybackInfo;

+ (void)initialize;

- (void)didReachEndOfDataForConfigurationID:(id)a0 input:(id)a1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)nodeType;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)setMultiCamClientCompositingEnabled:(BOOL)a0;
- (BOOL)expectsToRecordOnlyOnce;
- (void)dealloc;
- (BOOL)isCinematicAudioCapture;
- (void)setSettings:(id)a0;
- (id)settings;
- (id)init;
- (void)relinquishHardware;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)setExpectsToRecordOnlyOnce:(BOOL)a0;
- (void)acquireHardware;
- (BOOL)isMultiCamClientCompositingEnabled;
- (void)setCinematicAudioCapture:(BOOL)a0;

@end
