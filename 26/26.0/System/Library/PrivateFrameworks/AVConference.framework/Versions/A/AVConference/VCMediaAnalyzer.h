@class VCPCaptureAnalysisSession, NSObject;
@protocol OS_dispatch_queue, VCMediaAnalyzerDelegate;

@interface VCMediaAnalyzer : NSObject {
    long long _streamToken;
    NSObject<OS_dispatch_queue> *_analyzerQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id<VCMediaAnalyzerDelegate> _delegate;
    struct opaqueRTCReporting { } *_reportingAgent;
    BOOL _isAnalyzerStarted;
    VCPCaptureAnalysisSession *_captureAnalysisSession;
    int _processingEventsCount;
    double _accumulatedProcessingTime;
}

@property (readonly) id<VCMediaAnalyzerDelegate> delegate;

+ (id)errorWithMediaAnalyzerErrorEvent:(unsigned int)a0 errorPath:(id)a1 returnCode:(long long)a2;
+ (id /* block */)resultsHandlerWithWeakSelf:(id)a0;

- (void)dealloc;
- (void)stop;
- (BOOL)configure:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0 forAnalysisType:(long long)a1 mediaProperties:(id)a2 error:(id *)a3;
- (void)gatherRealtimeStats:(struct __CFDictionary { } *)a0;
- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1 reportingAgent:(struct opaqueRTCReporting { } *)a2;
- (void)reportMediaAnalyzerEnabled:(BOOL)a0;
- (void)startForStreamToken:(long long)a0;

@end
