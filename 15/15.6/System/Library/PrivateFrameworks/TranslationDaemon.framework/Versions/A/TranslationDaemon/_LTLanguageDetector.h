@class _LTTranslationContext, NSString, CSLanguageDetector, _LTDSELFLoggingManager, _LTLanguageDetectorFeatureCombinationModel, NSMutableDictionary, NSSet, NSMutableArray, _LTLanguageDetectionResult, NSObject;
@protocol OS_dispatch_queue, _LTSpeechTranslationDelegate;

@interface _LTLanguageDetector : NSObject <CSLanguageDetectorDelegate> {
    _LTTranslationContext *_context;
    CSLanguageDetector *_csLanguageDetector;
    float _sourceLocaleConfidenceThreshold;
    float _targetLocaleConfidenceThreshold;
    unsigned long long _minimumAcousticLanguageDetectorResults;
    unsigned long long _maximumAcousticLanguageDetectorResults;
    char _endAudioCalled;
    char _useFinalThresholds;
    char _finalLIDResultSent;
    char _receivedPartialSpeechResult;
    char _havePartialASRConfidences;
    NSMutableDictionary *_partialSpeechResultConfidences;
    NSMutableDictionary *_finalSpeechResults;
    NSMutableDictionary *_modelVersions;
    NSSet *_lowConfidenceLanguagePairs;
    unsigned long long _lidSignpostID;
    NSObject<OS_dispatch_queue> *_resultQueue;
    NSObject<OS_dispatch_queue> *_finalResultWaitQueue;
    id<_LTSpeechTranslationDelegate> _delegate;
}

@property (nonatomic) double samplingRate;
@property (nonatomic) long long audioBitDepth;
@property (retain, nonatomic) NSMutableArray *acousticResults;
@property (retain, nonatomic) _LTLanguageDetectionResult *lastResult;
@property (nonatomic) char featureCombinationModelSupported;
@property (readonly, retain, nonatomic) _LTDSELFLoggingManager *selfLoggingManager;
@property (retain, nonatomic) _LTLanguageDetectorFeatureCombinationModel *featureCombinationModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)endAudio;
- (void)languageDetectorDidDetectLanguageWithConfidence:(id)a0 confidence:(id)a1 isConfident:(char)a2;
- (void)addSpeechAudioData:(id)a0;
- (void)addSpeechRecognitionResult:(id)a0;
- (void)cancelLanguageDetection;
- (char)forceLanguageDetectionResult;
- (char)haveAtLeastOneFinalASRResult;
- (char)haveFinalASRResults;
- (id)initWithSelfLoggingManager:(id)a0;
- (char)isLowConfidencePair;
- (void)sendFinalLanguageDetectionResult:(char)a0;
- (void)sendLIDResult:(id)a0;
- (void)startLanguageDetectionWithContext:(id)a0 delegate:(id)a1;

@end
