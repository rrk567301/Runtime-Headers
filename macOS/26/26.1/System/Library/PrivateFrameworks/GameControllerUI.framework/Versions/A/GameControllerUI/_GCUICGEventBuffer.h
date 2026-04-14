@class _NSCGEventBuffer;

@interface _GCUICGEventBuffer : NSObject {
    _NSCGEventBuffer *_impl;
}

@property (getter=isEnabled) BOOL enabled;
@property unsigned long long eventMask;
@property long long maxEventCount;

- (void).cxx_destruct;
- (id)drainEvents:(BOOL *)a0;
- (id)init;
- (void)setDispatchQueue:(id)a0 block:(id /* block */)a1;

@end
