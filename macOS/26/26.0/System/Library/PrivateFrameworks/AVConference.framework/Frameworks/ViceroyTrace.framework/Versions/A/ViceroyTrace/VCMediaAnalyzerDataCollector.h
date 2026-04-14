@class VCReportingHistogram, NSObject;
@protocol OS_dispatch_queue;

@interface VCMediaAnalyzerDataCollector : NSObject {
    NSObject<OS_dispatch_queue> *_stateQueue;
    BOOL _isMediaAnalyzerEnabled;
    double _mediaAnalyzerLastEnabledTime;
    double _mediaAnalyzerEnabledDuration;
    VCReportingHistogram *_mediaAnalyzerMeanProcessingTimesHistogram;
}

- (void)dealloc;
- (id)initWithDispatchQueue:(id)a0;
- (void)addAggregatedMediaAnalyzerMetricsToReport:(id)a0;
- (void)processMediaAnalyzerEnabled:(BOOL)a0 withCurrentTime:(double)a1;
- (void)processMediaAnalyzerMetrics:(id)a0;
- (void)setMediaAnalyzerEnabled:(BOOL)a0;

@end
