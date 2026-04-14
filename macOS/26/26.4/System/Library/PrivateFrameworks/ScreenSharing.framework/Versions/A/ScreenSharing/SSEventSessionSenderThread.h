@class SSEventSession, NSObject;
@protocol OS_dispatch_semaphore;

@interface SSEventSessionSenderThread : NSThread

@property NSObject<OS_dispatch_semaphore> *suspendSemaphore;
@property struct __CFRunLoop { } *runLoop;
@property (weak) SSEventSession *session;
@property BOOL suspended;

- (void)resume;
- (void)main;
- (void)suspend;
- (void)shutDown;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
