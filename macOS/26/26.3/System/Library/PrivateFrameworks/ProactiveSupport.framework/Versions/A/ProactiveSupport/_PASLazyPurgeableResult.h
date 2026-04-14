@class NSObject;
@protocol OS_dispatch_source;

@interface _PASLazyPurgeableResult : _PASLazyResult {
    id _weakData;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    NSObject<OS_dispatch_source> *_idleTimeoutSource;
    double _idleTimeout;
    _Atomic BOOL _nil;
}

- (id)initWithBlock:(id /* block */)a0;
- (id)resultIfAvailable;
- (id)result;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBlock:(id /* block */)a0 idleTimeout:(double)a1;

@end
