@class NSError;

@interface AVMetricErrorEvent : AVMetricEvent {
    char _didRecover;
    NSError *_error;
}

@property (readonly) char didRecover;
@property (readonly) NSError *error;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDate:(id)a0 mediaTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 sessionID:(id)a2 didRecover:(char)a3 error:(id)a4;

@end
