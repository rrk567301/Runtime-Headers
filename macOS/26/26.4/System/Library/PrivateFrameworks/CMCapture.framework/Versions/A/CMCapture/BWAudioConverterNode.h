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

- (BOOL)isMultiCamClientCompositingEnabled;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)settings;
- (void)didReachEndOfDataForConfigurationID:(id)a0 input:(id)a1;
- (void)setMultiCamClientCompositingEnabled:(BOOL)a0;
- (void)setCinematicAudioCapture:(BOOL)a0;
- (id)nodeSubType;
- (BOOL)expectsToRecordOnlyOnce;
- (void)relinquishHardware;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)setSettings:(id)a0;
- (BOOL)isCinematicAudioCapture;
- (id)nodeType;
- (void)acquireHardware;
- (id)init;
- (void)setExpectsToRecordOnlyOnce:(BOOL)a0;
- (void)dealloc;

@end
