@interface CMContinuityCaptureRemoteFrameLatencyMetrics : CMContinuityCaptureFrameLatencyMetrics <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithUniqueID:(long long)a0;
- (void)_finishCollectingMetrics;
- (void)finishCollectingMetrics;

@end
