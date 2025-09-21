@interface AVMetricPlayerItemSeekDidCompleteEvent : AVMetricPlayerItemRateChangeEvent {
    char _didSeekInBuffer;
}

@property (readonly) char didSeekInBuffer;

+ (char)supportsSecureCoding;

- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDate:(id)a0 mediaTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 sessionID:(id)a2 variant:(id)a3 didSeekInBuffer:(char)a4 rate:(double)a5 previousRate:(double)a6;

@end
