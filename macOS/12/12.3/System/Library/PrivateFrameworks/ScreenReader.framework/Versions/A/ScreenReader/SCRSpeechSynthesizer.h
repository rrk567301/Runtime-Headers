@class SCRSpeechSynthesizerVars, NSString, NSArray;

@interface SCRSpeechSynthesizer : NSObject

@property (nonatomic) BOOL _wordCallBackRegistered;
@property (nonatomic) struct __CFMessagePort { } *_speechSynthesizerConsoleRemoteMessagePort;
@property (retain, nonatomic) SCRSpeechSynthesizerVars *_privateSCRSpeechSynthesizerVars;
@property (weak, nonatomic) id delegate;
@property (copy, nonatomic) NSString *voice;
@property (nonatomic) BOOL usesFeedbackWindow;
@property (readonly, nonatomic) BOOL isSpeaking;
@property (readonly, nonatomic) BOOL isPaused;
@property (readonly, nonatomic) NSArray *supportedCharacterRanges;
@property (readonly, nonatomic) NSArray *supportedLiteralCharacterRanges;
@property (readonly, nonatomic) float pitchBase;
@property (readonly, nonatomic) BOOL shouldPostWhenSpeechCompletes;

+ (void)initialize;
+ (id)defaultVoice;
+ (id)availableVoices;
+ (BOOL)isAnyApplicationSpeaking;
+ (id)attributesForVoice:(id)a0;
+ (void)_setShouldShortCircuitSpeechSynthesizer:(BOOL)a0;
+ (BOOL)makeVoiceForIdentifier:(struct __CFString { } *)a0 voiceSpec:(struct VoiceSpec { unsigned int x0; unsigned int x1; } *)a1;
+ (id)copyIdentifierStringForVoiceSpec:(struct VoiceSpec { unsigned int x0; unsigned int x1; } *)a0;
+ (BOOL)voiceIdentifier:(id)a0 matchesLocale:(id)a1;
+ (id)bestVoiceForSelectedVoice:(id)a0 language:(id)a1;
+ (BOOL)loadSynthesizerResourceFromPath:(id)a0 forDeviceID:(id)a1;
+ (BOOL)unloadSynthesizerResourceForDeviceID:(id)a0;
+ (unsigned int)creatorCodeForVoice:(id)a0;
+ (short)countVoices:(short *)a0;
+ (short)getVoiceSpecForIndex:(short)a0 voiceSpec:(struct VoiceSpec { unsigned int x0; unsigned int x1; } *)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithVoice:(id)a0;
- (BOOL)startSpeakingString:(id)a0;
- (void)stopSpeaking;
- (float)_volume;
- (void)_handleDefaultVoiceChange;
- (BOOL)_beginSpeakingString:(id)a0 optionallyToURL:(id)a1;
- (void)_handleSpeechDoneCallback;
- (BOOL)_feedbackWindowIsVisible;
- (BOOL)startSpeakingString:(id)a0 toURL:(id)a1;
- (void)_handleWordCallbackWithParams:(id)a0;
- (float)_normalSpeakingRate;
- (void)_setPitchBase:(float)a0;
- (float)_pitchBase;
- (void)_setRate:(float)a0;
- (float)_rate;
- (void)_setVolume:(float)a0;
- (void)_stopSpeakingAtBoundary:(unsigned int)a0;
- (void)_pauseSpeakingAtBoundary:(unsigned int)a0;
- (void)_continueSpeaking;
- (unsigned int)_audioDeviceID;
- (void)resetChannel;
- (BOOL)_skipSpeechDoneToggle;
- (BOOL)_makeCallbacksOnTTSThread;
- (float)_normalPitchBase;
- (float)_normalPitchMod;
- (id)_speakingString;
- (void)_setMakeCallbacksOnTTSThread:(BOOL)a0;
- (BOOL)_setObject:(id)a0 forProperty:(struct __CFString { } *)a1;
- (void)_setAudioDeviceID:(unsigned int)a0;
- (void)_setSkipSpeechDoneToggle:(BOOL)a0;
- (id)_objectForProperty:(struct __CFString { } *)a0;
- (void)_stopAllSpeechNotify:(id)a0;
- (BOOL)_setupCallbacksSavingToFile:(BOOL)a0;
- (void)_setPitchMod:(float)a0;
- (float)_pitchMod;
- (void)_handleSpeechDoneNoCallback;

@end
