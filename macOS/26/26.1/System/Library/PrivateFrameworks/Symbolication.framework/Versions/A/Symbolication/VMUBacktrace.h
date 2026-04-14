@class NSArray;

@interface VMUBacktrace : NSObject <NSCopying, NSSecureCoding> {
    int _flavor;
    struct { struct { int pid; unsigned int thread; int run_state; unsigned long long dispatch_queue_serial_num; } context; unsigned long long *frames; unsigned long long *framePtrs; unsigned int length; unsigned int originalLength; NSArray *recursionInfoArray; } _callstack;
    struct { struct { int pid; unsigned int thread; int run_state; unsigned long long dispatch_queue_serial_num; } context; unsigned long long *frames; unsigned long long *framePtrs; unsigned int length; unsigned int originalLength; NSArray *recursionInfoArray; } _asyncCallstack;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long timestamp;

- (unsigned long long *)stackFramePointers;
- (id)asyncRecursionInfoArray;
- (void)setThreadState:(int)a0;
- (id)recursionInfoArray;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)dealloc;
- (struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })_symbolicator;
- (id)initWithCoder:(id)a0;
- (id)initWithSamplingContext:(struct sampling_context_t { } *)a0 thread:(unsigned int)a1;
- (void).cxx_destruct;
- (unsigned int)originalLength;
- (unsigned long long *)asyncBacktrace;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)dispatchQueueSerialNumber;
- (unsigned int)backtraceLength;
- (int)threadState;
- (void)fixupStackWithSamplingContext:(struct sampling_context_t { } *)a0 symbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long *)backtrace;
- (unsigned int)thread;
- (unsigned int)asyncBacktraceLength;

@end
