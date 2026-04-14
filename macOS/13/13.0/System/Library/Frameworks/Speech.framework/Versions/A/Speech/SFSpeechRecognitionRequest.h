@class _SFSearchRequest, NSString, NSDictionary, NSURL, NSArray;

@interface SFSpeechRecognitionRequest : NSObject

@property (retain, nonatomic, getter=_afDictationRequestParams, setter=_setAFDictationRequestParams:) NSDictionary *_afDictationRequestParams;
@property (retain, nonatomic, getter=_searchRequest, setter=_setSearchRequest:) _SFSearchRequest *_searchRequest;
@property (nonatomic) BOOL detectMultipleUtterances;
@property (nonatomic, getter=_forceOfflineRecognition, setter=_setForceOfflineRecognition:) BOOL _forceOfflineRecognition;
@property (retain, nonatomic, getter=_voiceTriggerEventInfo, setter=_setVoiceTriggerEventInfo:) NSDictionary *_voiceTriggerEventInfo;
@property (nonatomic, getter=_maximumRecognitionDuration, setter=_setMaximumRecognitionDuration:) double _maximumRecognitionDuration;
@property (retain, nonatomic, getter=_recognitionOverrides, setter=_setRecognitionOverrides:) NSDictionary *_recognitionOverrides;
@property (retain, nonatomic, getter=_modelOverrideURL, setter=_setModelOverrideURL:) NSURL *_modelOverrideURL;
@property (retain, nonatomic, getter=_dynamicLanguageModel, setter=_setDynamicLanguageModel:) NSURL *_dynamicLanguageModel;
@property (retain, nonatomic, getter=_dynamicVocabulary, setter=_setDynamicVocabulary:) NSURL *_dynamicVocabulary;
@property (nonatomic, getter=_forceUseSiriProcess, setter=_setForceUseSiriProcess:) BOOL _forceUseSiriProcess;
@property (retain, nonatomic) NSString *taskIdentifier;
@property (nonatomic) long long taskHint;
@property (nonatomic) BOOL shouldReportPartialResults;
@property (copy, nonatomic) NSArray *contextualStrings;
@property (copy, nonatomic) NSString *interactionIdentifier;
@property (nonatomic) BOOL requiresOnDeviceRecognition;
@property (nonatomic) BOOL addsPunctuation;

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (id)_speechRequestOptions;
- (void)_setSearchRequests:(id)a0;
- (id)_searchRequests;
- (BOOL)automaticallyEndpoint;
- (BOOL)_powerMeteringAvailable;
- (id)_startedConnectionWithLanguageCode:(id)a0 delegate:(id)a1 taskHint:(long long)a2 requestIdentifier:(id)a3;
- (id)_startedLocalConnectionWithLanguageCode:(id)a0 delegate:(id)a1 taskHint:(long long)a2 requestIdentifier:(id)a3 taskIdentifier:(id)a4;
- (id)_dictationOptionsWithTaskHint:(long long)a0 requestIdentifier:(id)a1;
- (id)_requestParametersWithTaskHint:(long long)a0 requestIdentifier:(id)a1 taskIdentifier:(id)a2 narrowband:(BOOL)a3 language:(id)a4;
- (id)_sandboxExtensionsWithError:(id *)a0;

@end
