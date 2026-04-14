@class SSSession, NSObject;
@protocol OS_dispatch_semaphore;

@interface SenderThread : NSThread

@property NSObject<OS_dispatch_semaphore> *suspendSemaphore;
@property struct __CFRunLoop { } *runLoop;
@property (weak) SSSession *session;
@property BOOL suspended;

- (void)shutDown;
- (void)suspend;
- (void)main;
- (void)resume;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
