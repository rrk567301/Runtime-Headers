@class _NSCGEventBuffer;

@interface _GCUICGEventBuffer : NSObject {
    _NSCGEventBuffer *_impl;
}

@property (getter=isEnabled) BOOL enabled;
@property unsigned long long eventMask;
@property long long maxEventCount;

- (id)init;
- (id)drainEvents:(BOOL *)a0;
- (void).cxx_destruct;
- (void)setDispatchQueue:(id)a0 block:(id /* block */)a1;

@end
