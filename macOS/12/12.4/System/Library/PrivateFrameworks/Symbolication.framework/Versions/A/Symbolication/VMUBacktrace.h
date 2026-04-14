@interface VMUBacktrace : NSObject <NSCopying, NSSecureCoding> {
    int _flavor;
    struct { struct { double t_begin; double t_end; int pid; unsigned int thread; int run_state; unsigned long long dispatch_queue_serial_num; } context; unsigned long long *frames; unsigned long long *framePtrs; unsigned int length; } _callstack;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setStartTime:(double)a0;
- (void)setEndTime:(double)a0;
- (unsigned long long *)backtrace;
- (unsigned int)thread;
- (unsigned int)backtraceLength;
- (unsigned long long)dispatchQueueSerialNumber;
- (int)threadState;
- (unsigned long long *)stackFramePointers;
- (struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })_symbolicator;
- (id)initWithSamplingContext:(struct sampling_context_t { } *)a0 thread:(unsigned int)a1 recordFramePointers:(BOOL)a2;
- (void)fixupStackWithSamplingContext:(struct sampling_context_t { } *)a0 symbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a1;
- (void)setLengthTime:(double)a0;
- (void)setThreadState:(int)a0;

@end
