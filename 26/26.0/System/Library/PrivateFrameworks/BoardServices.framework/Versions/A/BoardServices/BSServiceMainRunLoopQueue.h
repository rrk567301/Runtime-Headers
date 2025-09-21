@class NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface BSServiceMainRunLoopQueue : BSServiceQueue {
    NSArray *_modes;
    NSObject<OS_dispatch_queue> *_queue;
    struct __CFRunLoopSource { } *_source;
    NSMutableArray *_queue_blocks;
    BSServiceMainRunLoopQueue *_queue_keepAliveForBlocks;
    BOOL _main_callingOut;
}

+ (id)queueWithModes:(id)a0;
+ (id)commonModesQueue;

- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)assertBarrierOnQueue;
- (void)performAfter:(double)a0 withBlock:(id /* block */)a1;
- (void)performAsync:(id /* block */)a0;
- (void)_performAsync:(id /* block */)a0 withHandoff:(id)a1;

@end
