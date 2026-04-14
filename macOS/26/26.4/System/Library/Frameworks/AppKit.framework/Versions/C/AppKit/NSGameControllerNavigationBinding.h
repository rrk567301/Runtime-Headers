@class NSTimer, NSWindow;

@interface NSGameControllerNavigationBinding : NSObject

@property (retain) NSTimer *timer;
@property (getter=isActive) BOOL active;
@property (readonly) long long command;
@property (readonly) NSWindow *window;
@property (readonly, getter=isFinished) BOOL finished;
@property (readonly) BOOL hasTimer;
@property unsigned long long phase;

+ (id)bind:(id)a0 to:(id)a1;

- (void)activate;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_repeat;
- (void)_delayTimerFired:(id)a0;
- (void)_repeatTimerFired:(id)a0;
- (id)initWithCommand:(long long)a0 phase:(unsigned long long)a1 window:(id)a2;
- (void)scheduleDelayTimer;

@end
