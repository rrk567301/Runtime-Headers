@class NSArray;

@interface UASpeechSettings : UASettings

@property (class, readonly, nonatomic) UASpeechSettings *shared;

@property (nonatomic) char detectLanguages;
@property (nonatomic) char pronunciationsEnabled;
@property (copy, nonatomic) NSArray *pronunciationsList;
@property (nonatomic) char speakItemUnderMouseEnabled;
@property (nonatomic) long long speakItemUnderMouseMode;
@property (nonatomic) long long speakItemUnderMouseVerbosity;
@property (nonatomic) double speakItemUnderMouseDelayTime;
@property (nonatomic) char speakSelectionEnabled;
@property (nonatomic) unsigned long long spokenContentControllerMode;
@property (nonatomic) unsigned long long speakSelectionHighlightOptions;
@property (nonatomic) unsigned long long speakSelectionWordHighlightColor;
@property (nonatomic) unsigned long long speakSelectionSentenceHighlightColor;
@property (nonatomic) unsigned long long speakSelectionSentenceStyle;
@property (nonatomic) double speakSelectionSpeakingRate;
@property (nonatomic) char typingEchoEnabled;
@property (readonly, nonatomic) char canSetSpeakItemUnderMouseMode;
@property (readonly, nonatomic) char canSetSpeakItemUnderMouseVerbosity;
@property (readonly, nonatomic) char canSetSpeakItemUnderMouseDelayTime;
@property (readonly, nonatomic) char canSetSpokenContentControllerMode;
@property (readonly, nonatomic) char canSetSpeakSelectionHighlightOptions;
@property (readonly, nonatomic) char canSetSpeakSelectionWordHighlightColor;
@property (readonly, nonatomic) char canSetSpeakSelectionSentenceHighlightColor;
@property (readonly, nonatomic) char canSetSpeakSelectionSentenceStyle;

+ (id)keyPathsForValuesAffectingDetectLanguages;
+ (id)keyPathsForValuesAffectingPronunciationsEnabled;
+ (id)keyPathsForValuesAffectingPronunciationsList;
+ (id)keyPathsForValuesAffectingSpeakItemUnderMouseDelayTime;
+ (id)keyPathsForValuesAffectingSpeakItemUnderMouseEnabled;
+ (id)keyPathsForValuesAffectingSpeakItemUnderMouseMode;
+ (id)keyPathsForValuesAffectingSpeakItemUnderMouseVerbosity;
+ (id)keyPathsForValuesAffectingSpeakSelectionEnabled;
+ (id)keyPathsForValuesAffectingSpeakSelectionHighlightOptions;
+ (id)keyPathsForValuesAffectingSpeakSelectionSentenceHighlightColor;
+ (id)keyPathsForValuesAffectingSpeakSelectionSentenceStyle;
+ (id)keyPathsForValuesAffectingSpeakSelectionWordHighlightColor;
+ (id)keyPathsForValuesAffectingSpokenContentControllerMode;
+ (id)keyPathsForValuesAffectingTypingEchoEnabled;

- (id)_init;
- (long long)_validateSpeakItemUnderMouseModeValue:(long long)a0;
- (long long)_validateSpeakItemUnderMouseVerbosityValue:(long long)a0;
- (unsigned long long)_validateSpeakSelectionHighlightColorValue:(long long)a0;
- (unsigned long long)_validateSpeakSelectionHighlightOptionsValue:(long long)a0;
- (unsigned long long)_validateSpokenContentControllerModeValue:(long long)a0;

@end
