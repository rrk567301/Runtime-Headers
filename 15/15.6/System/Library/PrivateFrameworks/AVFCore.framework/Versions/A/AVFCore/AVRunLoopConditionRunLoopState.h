@interface AVRunLoopConditionRunLoopState : NSObject

@property (readonly, nonatomic) struct __CFRunLoop { } *runLoop;
@property (nonatomic) struct __CFRunLoopSource { } *signalSource;
@property (nonatomic) char signaled;

+ (id)runLoopStateWithRunLoop:(struct __CFRunLoop { } *)a0;

- (void)dealloc;
- (id)initWithRunLoop:(struct __CFRunLoop { } *)a0;

@end
