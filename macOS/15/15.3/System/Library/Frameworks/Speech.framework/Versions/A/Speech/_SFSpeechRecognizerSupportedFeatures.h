@class _SFSpeechRecognizerDetectorOptions, NSSet, _SFSpeechRecognizerModelOptions, NSLocale, EARVoiceCommandActiveSet;

@interface _SFSpeechRecognizerSupportedFeatures : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, copy, nonatomic) NSSet *taskNames;
@property (readonly, copy, nonatomic) EARVoiceCommandActiveSet *voiceCommandActiveSet;
@property (readonly, copy, nonatomic) _SFSpeechRecognizerModelOptions *modelOptions;
@property (readonly, nonatomic) unsigned long long flags;
@property (readonly, copy, nonatomic) _SFSpeechRecognizerDetectorOptions *detectionOptions;
@property (readonly, nonatomic) BOOL isSingleUtteranceTask;
@property (readonly, nonatomic) BOOL concatenateUtterances;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLocale:(id)a0 taskNames:(id)a1 singleUtterance:(BOOL)a2 concatenateUtterances:(BOOL)a3 voiceCommandActiveSet:(id)a4 modelOptions:(id)a5 detectionOptions:(id)a6 flags:(unsigned long long)a7;

@end
