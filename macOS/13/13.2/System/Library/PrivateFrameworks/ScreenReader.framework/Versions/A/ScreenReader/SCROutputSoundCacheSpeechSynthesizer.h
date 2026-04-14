@class SCRSound, NSString;

@interface SCROutputSoundCacheSpeechSynthesizer : NSObject <SCROutputSpeechSynthesizerProtocol, SCROutputSoundCallbackProtocol>

@property (weak, nonatomic) id delegate;
@property (retain, nonatomic) SCRSound *sound;
@property (retain, nonatomic) id owner;
@property (retain, nonatomic) id action;
@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *spokenString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isPaused;
- (BOOL)isSpeaking;
- (void)sound:(id)a0 didFinishPlaying:(BOOL)a1;
- (void)stopSpeaking;
- (void)startAction;
- (id)supportedLiteralCharacterRanges;
- (void)lockSynthesizer;
- (void)unlockSynthesizer;

@end
