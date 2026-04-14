@class NSArray;

@interface VMUBacktrace : NSObject <NSCopying, NSSecureCoding> {
    int _flavor;
    struct { struct { int pid; unsigned int thread; int run_state; unsigned long long dispatch_queue_serial_num; } context; unsigned long long *frames; unsigned long long *framePtrs; unsigned int length; unsigned int originalLength; NSArray *recursionInfoArray; } _callstack;
    struct { struct { int pid; unsigned int thread; int run_state; unsigned long long dispatch_queue_serial_num; } context; unsigned long long *frames; unsigned long long *framePtrs; unsigned int length; unsigned int originalLength; NSArray *recursionInfoArray; } _asyncCallstack;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long timestamp;

- (unsigned long long *)backtrace;
- (id)asyncRecursionInfoArray;
- (unsigned long long *)stackFramePointers;
- (unsigned int)asyncBacktraceLength;
- (unsigned int)originalLength;
- (unsigned long long *)asyncBacktrace;
- (int)threadState;
- (id)description;
- (id)initWithSamplingContext:(struct sampling_context_t { } *)a0 thread:(unsigned int)a1;
- (unsigned int)backtraceLength;
- (void)setThreadState:(int)a0;
- (void).cxx_destruct;
- (void)fixupStackWithSamplingContext:(struct sampling_context_t { } *)a0 symbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)dispatchQueueSerialNumber;
- (id)recursionInfoArray;
- (void)encodeWithCoder:(id)a0;
- (struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })_symbolicator;
- (unsigned int)thread;

@end
