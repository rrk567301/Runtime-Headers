@class NSTimer, NSWindow;

@interface NSGameControllerNavigationBinding : NSObject

@property (retain) NSTimer *timer;
@property (readonly) long long command;
@property (readonly) NSWindow *window;
@property (readonly, getter=isRepeating) BOOL repeating;
@property (readonly, getter=isFinished) BOOL finished;
@property (readonly) BOOL hasTimer;
@property unsigned long long phase;

+ (id)bind:(id)a0 to:(id)a1;

- (void)invalidate;
- (void).cxx_destruct;
- (void)_repeat;
- (void)_delayTimerFired:(id)a0;
- (void)_repeatTimerFired:(id)a0;
- (id)initWithCommand:(long long)a0 phase:(unsigned long long)a1 window:(id)a2;
- (void)scheduleDelayTimer;

@end
