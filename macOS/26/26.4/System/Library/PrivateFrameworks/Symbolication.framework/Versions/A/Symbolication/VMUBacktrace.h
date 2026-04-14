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
- (unsigned long long *)asyncBacktrace;
- (int)threadState;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long *)stackFramePointers;
- (id)recursionInfoArray;
- (void)encodeWithCoder:(id)a0;
- (id)asyncRecursionInfoArray;
- (struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })_symbolicator;
- (unsigned int)originalLength;
- (void).cxx_destruct;
- (unsigned int)asyncBacktraceLength;
- (unsigned int)backtraceLength;
- (void)setThreadState:(int)a0;
- (id)description;
- (unsigned long long)dispatchQueueSerialNumber;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)fixupStackWithSamplingContext:(struct sampling_context_t { } *)a0 symbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithSamplingContext:(struct sampling_context_t { } *)a0 thread:(unsigned int)a1;

@end
