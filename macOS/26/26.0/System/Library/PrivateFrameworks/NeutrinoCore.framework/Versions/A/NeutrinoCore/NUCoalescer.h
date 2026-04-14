@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NUCoalescer : NSObject {
    NSObject<OS_dispatch_source> *_timer;
}

@property (readonly) double delay;
@property (readonly) NSObject<OS_dispatch_queue> *queue;

- (void)coalesceBlock:(id /* block */)a0;
- (void)dealloc;
- (id)initWithDelay:(double)a0 queue:(id)a1;
- (id)init;
- (id)initWithDelay:(double)a0;
- (void).cxx_destruct;

@end
