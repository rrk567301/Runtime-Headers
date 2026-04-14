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

- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)nodeSubType;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (BOOL)isMultiCamClientCompositingEnabled;
- (void)relinquishHardware;
- (id)settings;
- (void)didReachEndOfDataForConfigurationID:(id)a0 input:(id)a1;
- (BOOL)isCinematicAudioCapture;
- (void)acquireHardware;
- (void)setMultiCamClientCompositingEnabled:(BOOL)a0;
- (void)setCinematicAudioCapture:(BOOL)a0;
- (void)setSettings:(id)a0;
- (BOOL)expectsToRecordOnlyOnce;
- (void)dealloc;
- (void)setExpectsToRecordOnlyOnce:(BOOL)a0;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)init;

@end
