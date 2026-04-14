@interface VFXTimingFunction : NSObject <NSSecureCoding> {
    struct __CFXTimingFunction { } *_timingFunction;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)functionWithCAMediaTimingFunction:(id)a0;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTimingFunctionRef:(struct __CFXTimingFunction { } *)a0;
- (struct __CFXTimingFunction { } *)cfxTimingFunction;

@end
