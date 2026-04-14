@class NSString, NSRunLoop, NSObject;
@protocol OS_dispatch_queue;

@interface _CSDBThreadObject : NSObject {
    NSString *_identifier;
    NSRunLoop *_runLoop;
    struct __CFRunLoopSource { } *_runLoopSource;
    NSString *_queueContext;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)initWithIdentifier:(id)a0 qosClass:(unsigned short)a1;
- (void)dealloc;
- (void)performBlock:(id /* block */)a0;
- (void)performBlock:(id /* block */)a0 afterDelay:(double)a1;
- (void)performBlock:(id /* block */)a0 waitUntilDone:(BOOL)a1;
- (BOOL)isCurrentThreadOtherwiseAssert:(BOOL)a0;

@end
