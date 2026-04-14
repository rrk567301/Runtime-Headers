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

- (id)nodeSubType;
- (void)didReachEndOfDataForConfigurationID:(id)a0 input:(id)a1;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)setMultiCamClientCompositingEnabled:(BOOL)a0;
- (id)settings;
- (BOOL)isMultiCamClientCompositingEnabled;
- (BOOL)expectsToRecordOnlyOnce;
- (void)setExpectsToRecordOnlyOnce:(BOOL)a0;
- (void)acquireHardware;
- (BOOL)isCinematicAudioCapture;
- (void)setCinematicAudioCapture:(BOOL)a0;
- (void)setSettings:(id)a0;
- (void)relinquishHardware;
- (id)init;
- (void)dealloc;

@end
