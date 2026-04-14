@class SSEventSession, NSObject;
@protocol OS_dispatch_semaphore;

@interface SSEventSessionSenderThread : NSThread

@property NSObject<OS_dispatch_semaphore> *suspendSemaphore;
@property struct __CFRunLoop { } *runLoop;
@property (weak) SSEventSession *session;
@property BOOL suspended;

- (void)shutDown;
- (void)main;
- (void)dealloc;
- (void)suspend;
- (void)resume;
- (id)init;
- (void).cxx_destruct;

@end
