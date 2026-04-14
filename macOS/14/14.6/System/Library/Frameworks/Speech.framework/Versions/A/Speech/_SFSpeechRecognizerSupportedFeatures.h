@class _SFSpeechRecognizerDetectorOptions, NSString, NSSet, _SFSpeechRecognizerModelOptions, NSLocale, EARVoiceCommandActiveSet;

@interface _SFSpeechRecognizerSupportedFeatures : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSString *languageIdentifier;
@property (readonly, copy, nonatomic) NSSet *taskHints;
@property (readonly, copy, nonatomic) NSSet *taskNames;
@property (readonly, copy, nonatomic) EARVoiceCommandActiveSet *voiceCommandActiveSet;
@property (readonly, copy, nonatomic) _SFSpeechRecognizerModelOptions *modelOptions;
@property (readonly, nonatomic) unsigned long long flags;
@property (readonly, copy, nonatomic) _SFSpeechRecognizerDetectorOptions *detectionOptions;
@property (readonly, nonatomic) BOOL isSingleUtteranceTask;
@property (readonly, nonatomic) BOOL concatenateUtterances;

+ (BOOL)taskHintUsesSingleUtterance:(long long)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)featuresByAddingFlags:(unsigned long long)a0;
- (id)featuresByAddingTaskHints:(id)a0;
- (id)featuresWithCommandRecogitionForActiveSet:(id)a0;
- (id)featuresWithDetectionOptions:(id)a0;
- (id)initWithLocale:(id)a0 taskHints:(id)a1 voiceCommandActiveSet:(id)a2 modelOptions:(id)a3 detectionOptions:(id)a4 flags:(unsigned long long)a5;
- (BOOL)taskHintsContainsHint:(long long)a0;

@end
