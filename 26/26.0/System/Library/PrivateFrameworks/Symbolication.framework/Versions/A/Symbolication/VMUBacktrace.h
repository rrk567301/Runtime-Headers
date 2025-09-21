@class NSArray;

@interface VMUBacktrace : NSObject <NSCopying, NSSecureCoding> {
    int _flavor;
    struct { struct { int pid; unsigned int thread; int run_state; unsigned long long dispatch_queue_serial_num; } context; unsigned long long *frames; unsigned long long *framePtrs; unsigned int length; unsigned int originalLength; NSArray *recursionInfoArray; } _callstack;
    struct { struct { int pid; unsigned int thread; int run_state; unsigned long long dispatch_queue_serial_num; } context; unsigned long long *frames; unsigned long long *framePtrs; unsigned int length; unsigned int originalLength; NSArray *recursionInfoArray; } _asyncCallstack;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long timestamp;

- (unsigned long long *)backtrace;
- (unsigned int)thread;
- (void)fixupStackWithSamplingContext:(struct sampling_context_t { } *)a0 symbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a1;
- (void)dealloc;
- (struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })_symbolicator;
- (unsigned int)backtraceLength;
- (unsigned long long *)asyncBacktrace;
- (unsigned int)originalLength;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)recursionInfoArray;
- (id)initWithSamplingContext:(struct sampling_context_t { } *)a0 thread:(unsigned int)a1;
- (unsigned int)asyncBacktraceLength;
- (id)description;
- (unsigned long long)dispatchQueueSerialNumber;
- (void)setThreadState:(int)a0;
- (id)initWithCoder:(id)a0;
- (int)threadState;
- (id)asyncRecursionInfoArray;
- (unsigned long long *)stackFramePointers;
- (void).cxx_destruct;

@end
