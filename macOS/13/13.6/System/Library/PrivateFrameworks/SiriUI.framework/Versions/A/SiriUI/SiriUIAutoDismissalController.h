@class NSTimer, NSTrackingArea, NSViewController;
@protocol SiriUIAutoDismissalControllerDelegate;

@interface SiriUIAutoDismissalController : NSObject {
    NSTimer *_timer;
    NSTrackingArea *_trackingArea;
    struct __CFMachPort { } *_tap;
    struct __CFRunLoopSource { } *_tapSource;
}

@property (nonatomic, getter=isHovering) BOOL hovering;
@property (nonatomic, getter=isKeyWindow) BOOL isKeyWindow;
@property (nonatomic) double timerInterval;
@property (readonly, weak) NSViewController *viewController;
@property (nonatomic) BOOL enabled;
@property (weak, nonatomic) id<SiriUIAutoDismissalControllerDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)resume;
- (void)pause;
- (void)cancelTimer;
- (id)initWithViewController:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)setKeyWindow:(BOOL)a0;
- (void)startTimer;
- (void)keyWindowChanged:(id)a0;
- (void)watchKeyWindow:(BOOL)a0;
- (void)pauseOrResume:(BOOL)a0;
- (void)startTimerWithTimingOption:(long long)a0;
- (void)watchHovering:(BOOL)a0;

@end
