@class NSThread;
@protocol SSFrameBufferObserver;

@interface SSFrameBufferObserverEntry : NSObject {
    id<SSFrameBufferObserver> _observer;
    NSThread *_thread;
}

- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (id)initWithObserver:(id)a0 withThread:(id)a1;

@end
