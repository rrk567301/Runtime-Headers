@class SCROutputAction, NSString, SCRSpeechSynthesizerOptions, NSLock;

@interface SCROutputSpeechSynthesizer : SCRSpeechSynthesizer <SCROutputSpeechSynthesizerProtocol>

@property (retain, nonatomic) NSLock *_synthesizerLock;
@property (retain, nonatomic) SCRSpeechSynthesizerOptions *synthesizerOptions;
@property (nonatomic) float rate;
@property (nonatomic) float customizedNormalRate;
@property (nonatomic) float customizedMinRate;
@property (nonatomic) float customizedMaxRate;
@property (nonatomic) float pitchMod;
@property (nonatomic) float pitchBase;
@property (nonatomic) float customizedNormalPitch;
@property (nonatomic) float customizedMinPitch;
@property (nonatomic) float customizedMaxPitch;
@property (nonatomic) float volume;
@property (nonatomic) float customizedNormalVolume;
@property (nonatomic) float customizedMaxVolume;
@property (nonatomic) float customizedNormalIntonation;
@property (nonatomic) float customizedMinIntonation;
@property (nonatomic) float customizedMaxIntonation;
@property (retain, nonatomic) id owner;
@property (retain, nonatomic) SCROutputAction *action;
@property (copy, nonatomic) NSString *category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithVoice:(id)a0;
- (void)setVoice:(id)a0;
- (BOOL)canBePaused;
- (void)startAction;
- (void)lockSynthesizer;
- (void)unlockSynthesizer;
- (BOOL)_setObject:(id)a0 forProperty:(struct __CFString { } *)a1;
- (void)adjustOnTheFlyChangesForAction:(id)a0 adjustRate:(BOOL)a1 adjustPitch:(BOOL)a2 adjustVolume:(BOOL)a3 adjustIntonation:(BOOL)a4 adjustVoice:(BOOL)a5 adjustingCurrentSpeech:(BOOL)a6 lastSpokenWordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a7 speakResults:(BOOL)a8;
- (BOOL)shouldPostWhenSpeechCompletes;
- (void)_clearOptions;
- (void)_outputTestingLogging:(id)a0;

@end
