@class CADisplay, NSString, NSThread, CADisplayLink, NSRunLoop;

@interface LSSDisplayLink : NSObject <BSInvalidatable> {
    CADisplay *_display;
    id _target;
    SEL _action;
    NSRunLoop *_runLoop;
    NSThread *_thread;
    CADisplayLink *_thread_displayLink;
    BOOL _thread_invalid;
    double _updateInterval;
}

@property (nonatomic) BOOL paused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (BOOL)isPaused;
- (void).cxx_destruct;
- (void)_thread_displayLinkFired;
- (void)_thread_invalidate;
- (void)_thread_setPaused:(id)a0;
- (void)_thread_startRunLoop;
- (id)initWithDisplay:(id)a0 updateInterval:(double)a1 target:(id)a2 action:(SEL)a3;

@end
