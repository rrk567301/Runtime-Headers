@class NSString;

@interface AVAudioInputNode : AVAudioIONode <AVAudioMixing>

@property (nonatomic, getter=isVoiceProcessingBypassed) char voiceProcessingBypassed;
@property (nonatomic, getter=isVoiceProcessingAGCEnabled) char voiceProcessingAGCEnabled;
@property (nonatomic, getter=isVoiceProcessingInputMuted) char voiceProcessingInputMuted;
@property (nonatomic) struct AVAudioVoiceProcessingOtherAudioDuckingConfiguration { char x0; long long x1; } voiceProcessingOtherAudioDuckingConfiguration;
@property (nonatomic) float volume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
