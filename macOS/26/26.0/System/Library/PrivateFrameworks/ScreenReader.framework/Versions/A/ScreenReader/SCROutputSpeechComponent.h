@class NSLock, NSString, NSDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface SCROutputSpeechComponent : SCROutputComponent <SCROutputSpeechComponentProtocol> {
    NSMutableArray *_synthesizers;
    NSLock *_synthesizersArrayLock;
    NSLock *_speechPausedLock;
    BOOL _speechIsPaused;
}

@property (copy, nonatomic) NSString *lastSpokenString;
@property (nonatomic, setter=_setLastSpokenWordRange:) struct _NSRange { unsigned long long location; unsigned long long length; } _lastSpokenWordRange;
@property (retain, nonatomic) NSDictionary *customPunctuationTableRules;
@property (retain, nonatomic) NSDictionary *customPunctuationTableReplacements;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *speechIdleTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *speechIdleTimerQueue;
@property (nonatomic) BOOL speechActive;
@property (nonatomic) BOOL needToRebuildDefaultLanguageTextProcessingProperties;
@property (retain, nonatomic) NSDictionary *defaultLanguageTextProcessingProperties;

- (void)handleEvent:(id)a0;
- (void)dealloc;
- (void)stop;
- (id)init;
- (void)setupObservers;
- (void).cxx_destruct;
- (void)speechSynthesizer:(id)a0 didFinishSpeaking:(BOOL)a1;
- (void)speechSynthesizer:(id)a0 willSpeakWord:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 ofString:(id)a2;
- (void)setAudioDevice:(unsigned int)a0;
- (void)_activateSpeech;
- (id)copyAllSpeechSynthesizersLocked;
- (void)_cancelSpeechIdle_speechIdleTimerQueue;
- (id)_changeStringToSpeakInCapitalsModeIfStringContainsCapitalLetters:(id)a0 withAction:(id)a1;
- (id)_findSynthesizerForAction:(id)a0 owner:(id)a1;
- (BOOL)_initializeSynthesizer:(id)a0 forAction:(id)a1 withOptions:(id)a2;
- (BOOL)_isSameSpeakInLanguageVariantForPreviousLanguage:(id)a0 andNextLanguage:(id)a1;
- (BOOL)_isSameVoiceIdentifierUsedForAction1:(id)a0 andAction2:(id)a1;
- (void)_optimizeSequentialSteps:(id)a0;
- (id)_preflightIndividualAction:(id)a0;
- (BOOL)_preflightOnTheFlySynthesizerAdjustmentAction:(id)a0 adjustRate:(BOOL)a1 adjustPitch:(BOOL)a2 adjustVolume:(BOOL)a3 adjustVoice:(BOOL)a4 speakResults:(BOOL)a5;
- (void)_punctuationGroupsChanged:(id)a0;
- (void)_replaceBraillePatternDotsWithDescriptionsInActions:(id)a0;
- (id)_replaceEmbeddedTTSCommands:(id)a0;
- (id)_replaceEmbeddedTTSCommandsAttributedString:(id)a0;
- (void)_replaceEmbeddedTTSCommandsMutableString:(id)a0;
- (void)_replaceEmojiWithDescriptionsInActions:(id)a0;
- (void)_replaceMathCharactersInActions:(id)a0;
- (void)_replaceUnspeakableActions:(id)a0 byWord:(BOOL)a1;
- (void)_scheduleSpeechIdle;
- (id)_speakAsLiteralCharacters:(id)a0;
- (id)_speechSynthesizerForAction:(id)a0 owner:(id)a1;
- (void)_stopSynthesizerOnSpeechComponentThread:(id)a0;
- (id)_synthesizerOptionsForAction:(id)a0 voiceIdenifier:(id)a1 voiceSelection:(id)a2;
- (void)_updateCustomPunctuationTables;
- (void)changePitchForString:(id)a0 action:(id)a1 key:(id)a2;
- (id)copyAllSynthesizersLocked;
- (BOOL)initializeSynthesizer:(id)a0 forAction:(id)a1;
- (BOOL)isAnySynthesizerSpeaking;
- (BOOL)isSpeechPaused;
- (id)objectForAttribute:(id)a0;
- (id)offsetStringReplaceEmojiWithDescriptions:(id)a0 stringForPauses:(id)a1 language:(id)a2 rangeReplacements:(id)a3 appendEmojiSuffix:(BOOL)a4;
- (BOOL)pauseOrContinueSpeech;
- (void)pauseSpeech:(id)a0;
- (id)pauseStringWithDuration:(unsigned int)a0 forAction:(id)a1;
- (int)preflightSequentialSteps:(id)a0 runnerName:(id)a1;
- (void)replaceVOEmbeddedCommand:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 inAction:(id)a2;
- (void)resumeSpeech:(id)a0;
- (void)setIsSpeechPaused:(BOOL)a0;
- (id)speakAsNormalText:(id)a0;
- (id)speakingSynthesizer;
- (void)stopAllSynthesizersForRunner:(id)a0;
- (id)stringReplaceEmojiWithDescriptions:(id)a0 stringForPauses:(id)a1 language:(id)a2 rangeReplacements:(id)a3 appendEmojiSuffix:(BOOL)a4;
- (id)voicePrefsForCategory:(id)a0;

@end
