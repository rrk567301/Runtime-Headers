@interface AVAudioIONode : AVAudioNode

@property (readonly, nonatomic) double presentationLatency;
@property (readonly, nonatomic) struct ComponentInstanceRecord { long long x0[1]; } *audioUnit;
@property (readonly, nonatomic, getter=isVoiceProcessingEnabled) BOOL voiceProcessingEnabled;

- (long long)manualRenderingMode;
- (void)didAttachToEngine:(id)a0;
- (BOOL)isInManualRenderingMode;
- (BOOL)enableRealtimeRenderingModeWithIOUnit:(void *)a0 isInput:(BOOL)a1 forceIOUnitReset:(BOOL)a2;
- (void)didDetachFromEngine:(id)a0 error:(id *)a1;
- (BOOL)enableManualRenderingMode:(long long)a0 isInput:(BOOL)a1;
- (id)initWithIOUnit:(void *)a0 isInput:(BOOL)a1;
- (BOOL)setVoiceProcessingEnabled:(BOOL)a0 error:(id *)a1;

@end
