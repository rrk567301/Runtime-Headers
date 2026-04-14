@class NSMachPort, NSMutableArray;

@interface MainThread : NSObject {
    NSMachPort *_ticklePort;
    NSMutableArray *_requests;
}

+ (void)initialize;
+ (id)mainThread;
+ (void)setupMainThreadObject;
+ (BOOL)runningOnMainThread;

- (id)init;
- (void)handlePortMessage:(id)a0;
- (void)performOneway:(BOOL)a0 result:(void *)a1 withTarget:(id)a2 selector:(SEL)a3;
- (void)_postNotificationInMainThread:(id)a0;
- (BOOL)_runningOnMainThread;
- (void)_threadWillDie:(id)a0;

@end
