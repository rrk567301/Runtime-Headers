@class NSString, NSArray, NSDictionary, NSURL, AFLanguageDetectionUserContext, STSiriContext;

@interface AFDictationOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *applicationName;
@property (copy, nonatomic) NSString *applicationDisplayName;
@property (copy, nonatomic) NSString *applicationVersion;
@property (retain, nonatomic) STSiriContext *context;
@property (copy, nonatomic) NSString *fieldLabel;
@property (copy, nonatomic) NSString *fieldIdentifier;
@property (copy, nonatomic) NSString *interactionIdentifier;
@property (copy, nonatomic) NSString *requestIdentifier;
@property (nonatomic) long long keyboardType;
@property (copy, nonatomic) NSString *prefixText;
@property (copy, nonatomic) NSString *postfixText;
@property (copy, nonatomic) NSString *selectedText;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) long long transcriptionMode;
@property (copy, nonatomic) NSArray *inlineItemList;
@property (copy, nonatomic) NSString *microphoneIdentifier;
@property (copy, nonatomic) NSString *orthography;
@property (copy, nonatomic) NSString *keyboardIdentifier;
@property (copy, nonatomic) NSString *languageCodeOverride;
@property (copy, nonatomic) NSString *offlineLanguage;
@property (nonatomic) long long voiceSearchTypeOptions;
@property (copy, nonatomic) NSDictionary *voiceSearchHeaderFields;
@property (copy, nonatomic) NSDictionary *voiceSearchQueryParameters;
@property (copy, nonatomic) NSDictionary *voiceTriggerEventInfo;
@property (nonatomic) char forceOfflineRecognition;
@property (nonatomic) char preferOnlineRecognition;
@property (nonatomic) char detectUtterances;
@property (nonatomic) char continuousListening;
@property (nonatomic) char shouldHandleCapitalization;
@property (nonatomic) char autoPunctuation;
@property (nonatomic) char emojiRecognition;
@property (nonatomic) char preferOnDeviceRecognition;
@property (nonatomic) char secureOfflineOnly;
@property (nonatomic) char farField;
@property (nonatomic) char releaseAudioSessionOnRecordingCompletion;
@property (nonatomic) char incremental;
@property (nonatomic) double maximumRecognitionDuration;
@property (nonatomic) long long taskHint;
@property (copy, nonatomic) NSURL *originalAudioFileURL;
@property (copy, nonatomic) NSDictionary *recognitionOverrides;
@property (copy, nonatomic) NSURL *modelOverrideURL;
@property (copy, nonatomic) AFLanguageDetectionUserContext *languageDetectionUserContext;
@property (nonatomic) long long dictationInputOrigin;
@property (copy, nonatomic) NSString *samplingInfo;
@property (nonatomic) char shouldClassifyIntent;
@property (nonatomic) char shouldRecognizeCommands;
@property (nonatomic) char shouldGenerateVoiceCommandCandidates;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictationOptionsWithoutTextContext;

@end
