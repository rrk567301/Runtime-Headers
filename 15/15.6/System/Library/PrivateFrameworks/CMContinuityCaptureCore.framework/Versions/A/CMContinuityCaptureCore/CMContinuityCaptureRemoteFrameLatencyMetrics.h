@interface CMContinuityCaptureRemoteFrameLatencyMetrics : CMContinuityCaptureFrameLatencyMetrics <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUniqueID:(long long)a0;
- (void)_finishCollectingMetrics;
- (void)finishCollectingMetrics;

@end
