@class SSSession, NSObject;
@protocol OS_dispatch_semaphore;

@interface SenderThread : NSThread {
    NSObject<OS_dispatch_semaphore> *mSuspendSemaphore;
    struct __CFRunLoop { } *mRunLoop;
    BOOL mSuspended;
}

@property SSSession *session;

- (void)dealloc;
- (id)init;
- (void)resume;
- (void)suspend;
- (void)main;
- (void)shutDown;

@end
