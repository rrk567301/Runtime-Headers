@interface UASpeechSettings : UASettings

@property (class, readonly, nonatomic) UASpeechSettings *shared;

@property (nonatomic) BOOL speakItemUnderMouseEnabled;
@property (nonatomic) long long speakItemUnderMouseMode;
@property (nonatomic) long long speakItemUnderMouseVerbosity;
@property (nonatomic) double speakItemUnderMouseDelayTime;
@property (nonatomic) unsigned long long spokenContentControllerMode;
@property (nonatomic) unsigned long long speakSelectionHighlightOptions;
@property (nonatomic) unsigned long long speakSelectionWordHighlightColor;
@property (nonatomic) unsigned long long speakSelectionSentenceHighlightColor;
@property (nonatomic) unsigned long long speakSelectionSentenceStyle;
@property (readonly, nonatomic) BOOL canSetSpeakItemUnderMouseMode;
@property (readonly, nonatomic) BOOL canSetSpeakItemUnderMouseVerbosity;
@property (readonly, nonatomic) BOOL canSetSpeakItemUnderMouseDelayTime;
@property (readonly, nonatomic) BOOL canSetSpokenContentControllerMode;
@property (readonly, nonatomic) BOOL canSetSpeakSelectionHighlightOptions;
@property (readonly, nonatomic) BOOL canSetSpeakSelectionWordHighlightColor;
@property (readonly, nonatomic) BOOL canSetSpeakSelectionSentenceHighlightColor;
@property (readonly, nonatomic) BOOL canSetSpeakSelectionSentenceStyle;

+ (id)keyPathsForValuesAffectingSpeakItemUnderMouseDelayTime;
+ (id)keyPathsForValuesAffectingSpeakItemUnderMouseEnabled;
+ (id)keyPathsForValuesAffectingSpeakItemUnderMouseMode;
+ (id)keyPathsForValuesAffectingSpeakItemUnderMouseVerbosity;
+ (id)keyPathsForValuesAffectingSpeakSelectionHighlightOptions;
+ (id)keyPathsForValuesAffectingSpeakSelectionSentenctHighlightColor;
+ (id)keyPathsForValuesAffectingSpeakSelectionWordHighlightColor;
+ (id)keyPathsForValuesAffectingSpokenContentControllerMode;

- (id)_init;
- (long long)_validateSpeakItemUnderMouseModeValue:(long long)a0;
- (long long)_validateSpeakItemUnderMouseVerbosityValue:(long long)a0;
- (unsigned long long)_validateSpeakSelectionHighlightColorValue:(long long)a0;
- (unsigned long long)_validateSpeakSelectionHighlightOptionsValue:(long long)a0;
- (unsigned long long)_validateSpokenContentControllerModeValue:(long long)a0;

@end
