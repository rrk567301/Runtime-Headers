@class VCReportingHistogram, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VCCaptionsDataCollector : NSObject {
    NSObject<OS_dispatch_queue> *_stateQueue;
    BOOL _receivedCaptionsMetrics;
    unsigned int _totalCollectedCaptionsRatioMetrics;
    unsigned int _longCaptionRatioCollection;
    unsigned int _maxCaptionsRatio;
    unsigned int _captionTaskCount;
    double _lastUtteranceDuration;
    VCReportingHistogram *_captionsRatioHistogram;
    VCReportingHistogram *_captionsRatioLongHistogram;
    VCReportingHistogram *_captionsUtteranceHistogram;
    VCReportingHistogram *_captionsUsage;
    NSString *_captionsLocale;
    NSString *_captionsSourceLocale;
    double _lastCaptionsEnabledTime;
    double _captionsEnabledDuration;
    VCReportingHistogram *_captionsSpeechModel;
    VCReportingHistogram *_callTypeHistogram;
    unsigned int _utteranceCount;
    unsigned int _translatedUtteranceCount;
    double _translatedLatencyAverage;
    NSMutableDictionary *_languageCodeDict;
}

@property (nonatomic) BOOL captionsEnabled;
@property (nonatomic) BOOL languageDetectorEnabled;
@property (nonatomic) BOOL explicitLanguageFilterEnabled;

- (void)dealloc;
- (id)initWithDispatchQueue:(id)a0;
- (void)addAggregatedCaptionsConfigurationToReport:(id)a0;
- (void)addAggregatedCaptionsHistogramsToReport:(id)a0 shouldAlwaysAdd:(BOOL)a1;
- (void)addAggregatedCaptionsMetricsToReport:(id)a0;
- (void)addAggregatedCaptionsValueTypesToReport:(id)a0;
- (void)addAggregatedLanguageDetectorMetricsToReport:(id)a0;
- (void)processCaptionsConfiguration:(id)a0;
- (void)processCaptionsEnabled:(BOOL)a0 withCurrentTime:(double)a1;
- (void)processCaptionsMetrics:(id)a0;

@end
