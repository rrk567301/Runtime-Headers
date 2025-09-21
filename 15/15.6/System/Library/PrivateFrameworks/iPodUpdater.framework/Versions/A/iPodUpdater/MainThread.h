@class NSMachPort, NSMutableArray;

@interface MainThread : NSObject {
    NSMachPort *_ticklePort;
    NSMutableArray *_requests;
}

+ (void)initialize;
+ (id)mainThread;
+ (char)runningOnMainThread;
+ (void)setupMainThreadObject;

- (id)init;
- (void)handlePortMessage:(id)a0;
- (void)_threadWillDie:(id)a0;
- (void)_postNotificationInMainThread:(id)a0;
- (char)_runningOnMainThread;
- (void)performOneway:(char)a0 result:(void *)a1 withTarget:(id)a2 selector:(SEL)a3;

@end
