@class NSString, NSDictionary, NSArray, NSMutableArray, NSLock;

@interface SCROutputSpeechComponent : SCROutputComponent {
    int _characterTypeLookupArray[512];
    NSMutableArray *_synthesizers;
    NSLock *_synthesizersArrayLock;
    NSLock *_speechPausedLock;
    NSLock *_sanitizedAvailableVoicesLock;
    NSArray *_sanitizedAvailableVoices;
    BOOL _speechIsPaused;
}

@property (copy, nonatomic) NSString *lastSpokenString;
@property (nonatomic, setter=_setLastSpokenWordRange:) struct _NSRange { unsigned long long location; unsigned long long length; } _lastSpokenWordRange;
@property (retain, nonatomic) NSDictionary *customPunctuationTableRules;
@property (retain, nonatomic) NSDictionary *customPunctuationTableReplacements;
@property (nonatomic) BOOL needToRebuildDefaultLanguageTextProcessingProperties;
@property (retain, nonatomic) NSDictionary *defaultLanguageTextProcessingProperties;

+ (id)_createSanitizedAvailableVoices;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)speechSynthesizer:(id)a0 didFinishSpeaking:(BOOL)a1;
- (void)handleEvent:(id)a0;
- (void)speechSynthesizer:(id)a0 willSpeakWord:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 ofString:(id)a2;
- (void)setupObservers;
- (void)setAudioDevice:(unsigned int)a0;
- (id)objectForAttribute:(id)a0;
- (int)preflightSequentialSteps:(id)a0 runnerName:(id)a1;
- (void)replaceVOEmbeddedCommand:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 inAction:(id)a2;
- (void)clearAvailableScreenReaderVoicesCache;
- (BOOL)isSpeechPaused;
- (int)_substitutionActionForPunctuationString:(id)a0 punctuationTable:(id)a1;
- (id)_textProcessingProperties;
- (int)typeForCharacter:(int)a0;
- (id)mergedPunctuationTableForVerboseness:(long long)a0;
- (id)_createSubstitutionStringForPunctuationString:(id)a0 punctuationTable:(id)a1 stringsFileName:(id)a2 verbosityLevel:(long long)a3;
- (long long)typeForComposedCharacter:(id)a0;
- (BOOL)_makeSubstitutionsInAction:(id)a0 stringsFileName:(id)a1 ranges:(id)a2 verbosityLevel:(long long)a3;
- (void)_updateCustomPunctuationTables;
- (void)_handleVoicesChangedNotification:(id)a0;
- (void)_punctuationGroupsChanged:(id)a0;
- (id)_availableScreenReaderVoices;
- (void)setIsSpeechPaused:(BOOL)a0;
- (BOOL)_preflightOnTheFlySynthesizerAdjustmentAction:(id)a0 adjustRate:(BOOL)a1 adjustPitch:(BOOL)a2 adjustVolume:(BOOL)a3 adjustIntonation:(BOOL)a4 adjustVoice:(BOOL)a5 speakResults:(BOOL)a6;
- (id)_preflightIndividualAction:(id)a0;
- (BOOL)_preflightPauseOrContinueAction:(id)a0;
- (void)_optimizeSequentialSteps:(id)a0;
- (void)stopAllSynthesizersForRunner:(id)a0;
- (id)copyAllSynthesizersLocked;
- (id)_soundCacheSynthesizerForAction:(id)a0 owner:(id)a1;
- (id)_speechSynthesizerForAction:(id)a0 owner:(id)a1;
- (id)_synthesizerOptionsForAction:(id)a0 voiceIdenifier:(id)a1;
- (id)copyAllSpeechSynthesizersLocked;
- (BOOL)_initializeSynthesizer:(id)a0 forAction:(id)a1 withOptions:(id)a2;
- (id)voicePrefsForCategory:(id)a0;
- (id)_speakAsLiteralCharacters:(id)a0;
- (id)_speakAsNormalText:(id)a0;
- (void)_preflightActionForContextInformation:(id)a0;
- (id)_replaceEmbeddedTTSCommands:(id)a0;
- (BOOL)_isSameSpeakInLanguageVariantForPreviousLanguage:(id)a0 andNextLanguage:(id)a1;
- (BOOL)_isSameVoiceIdentifierUsedForAction1:(id)a0 andAction2:(id)a1;
- (id)_findSynthesizerForAction:(id)a0 owner:(id)a1;
- (id)offsetStringReplaceEmojiWithDescriptions:(id)a0 stringForPauses:(id)a1 language:(id)a2 rangeReplacements:(id)a3 appendEmojiSuffix:(BOOL)a4;
- (void)changePitchForString:(id)a0 action:(id)a1 key:(id)a2;
- (id)_replaceEmbeddedTTSCommandsAttributedString:(id)a0;
- (void)_makeNumberSubstitutionsInAction:(id)a0;
- (void)_replaceMathCharacters:(id)a0;
- (void)_replaceUnspeakableAction:(id)a0 byWord:(BOOL)a1;
- (id)_changeStringToSpeakInCapitalsModeIfStringContainsCapitalLetters:(id)a0 withAction:(id)a1;
- (void)_replaceEmbeddedTTSCommandsMutableString:(id)a0;
- (BOOL)initializeSynthesizer:(id)a0 forAction:(id)a1;
- (void)_stopSynthesizerOnSpeechComponentThread:(id)a0;
- (id)categoryBeingSpoken;
- (BOOL)isAnySynthesizerSpeaking;
- (id)stringReplaceEmojiWithDescriptions:(id)a0 stringForPauses:(id)a1 language:(id)a2 rangeReplacements:(id)a3 appendEmojiSuffix:(BOOL)a4;

@end
