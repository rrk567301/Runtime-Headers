@class NSArray, AVMetricErrorEvent;

@interface AVMetricDownloadSummaryEvent : AVMetricEvent {
    AVMetricErrorEvent *_errorEvent;
    long long _recoverableErrorCount;
    long long _mediaResourceRequestCount;
    long long _bytesDownloadedCount;
    double _downloadDuration;
    NSArray *_variants;
}

@property (readonly) AVMetricErrorEvent *errorEvent;
@property (readonly) long long recoverableErrorCount;
@property (readonly) long long mediaResourceRequestCount;
@property (readonly) long long bytesDownloadedCount;
@property (readonly) double downloadDuration;
@property (readonly) NSArray *variants;

+ (BOOL)supportsSecureCoding;

- (id)debugDescription;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDate:(id)a0 mediaTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 sessionID:(id)a2 errorEvent:(id)a3 recoverableErrorCount:(long long)a4 mediaResourceRequestCount:(long long)a5 bytesDownloadedCount:(long long)a6 downloadDuration:(double)a7 variants:(id)a8;

@end
