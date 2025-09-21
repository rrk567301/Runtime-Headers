@interface AVAudioIONode : AVAudioNode

@property (readonly, nonatomic) double presentationLatency;
@property (readonly, nonatomic) struct ComponentInstanceRecord { long long x0[1]; } *audioUnit;
@property (readonly, nonatomic, getter=isVoiceProcessingEnabled) char voiceProcessingEnabled;

- (char)enableRealtimeRenderingModeWithIOUnit:(void *)a0 isInput:(char)a1 forceIOUnitReset:(char)a2;
- (void)didAttachToEngine:(id)a0;
- (void)didDetachFromEngine:(id)a0 error:(id *)a1;
- (char)enableManualRenderingMode:(long long)a0 isInput:(char)a1;
- (id)initWithIOUnit:(void *)a0 isInput:(char)a1;
- (char)isInManualRenderingMode;
- (long long)manualRenderingMode;
- (char)setVoiceProcessingEnabled:(char)a0 error:(id *)a1;

@end
