@class NSTimer, NSTrackingArea, NSViewController;
@protocol SiriUIAutoDismissalControllerDelegate, SiriUIAutoDismissalControllerClickOutsideContentDelegate;

@interface SiriUIAutoDismissalController : NSObject {
    NSTimer *_timer;
    NSTrackingArea *_trackingArea;
    struct __CFMachPort { } *_tap;
    struct __CFRunLoopSource { } *_tapSource;
    id _dismissalEventMonitor;
    NSTimer *_clickOutsideOfContentHoldBackTimer;
    char _pauseOutOfContentDismissal;
}

@property (nonatomic, getter=isHovering) char hovering;
@property (nonatomic, getter=isKeyWindow) char isKeyWindow;
@property (nonatomic) double timerInterval;
@property (readonly, weak) NSViewController *viewController;
@property (nonatomic) char enabled;
@property (weak, nonatomic) id<SiriUIAutoDismissalControllerDelegate> delegate;
@property (weak, nonatomic) id<SiriUIAutoDismissalControllerClickOutsideContentDelegate> clickOutsideContentDelegate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)resume;
- (void)pause;
- (void)cancelTimer;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)setKeyWindow:(char)a0;
- (void)startTimer;
- (id)initWithViewController:(id)a0;
- (void)keyWindowChanged:(id)a0;
- (void)pauseOutsideOfContentDismissal:(char)a0;
- (void)watchKeyWindow:(char)a0;
- (void)_maybeSpotlightIsUp;
- (void)_spaceChanged;
- (void)cancelClickOutsideOfContentHoldBackTimerIfNeeded;
- (void)clickOutsideOfContentHoldbackTimerFired;
- (void)pauseOrResume:(char)a0;
- (void)startTimerWithTimingOption:(long long)a0;
- (void)watchClickOutsideOfContent:(char)a0;
- (void)watchHovering:(char)a0;

@end
