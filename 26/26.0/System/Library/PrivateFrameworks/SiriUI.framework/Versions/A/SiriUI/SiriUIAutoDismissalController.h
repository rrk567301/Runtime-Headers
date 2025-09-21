@class NSTimer, NSTrackingArea, NSViewController;
@protocol SiriUIAutoDismissalControllerDelegate, SiriUIAutoDismissalControllerClickOutsideContentDelegate;

@interface SiriUIAutoDismissalController : NSObject {
    NSTimer *_timer;
    NSTrackingArea *_trackingArea;
    struct __CFMachPort { } *_tap;
    struct __CFRunLoopSource { } *_tapSource;
    id _dismissalEventMonitor;
    NSTimer *_clickOutsideOfContentHoldBackTimer;
    BOOL _pauseOutOfContentDismissal;
}

@property (nonatomic, getter=isHovering) BOOL hovering;
@property (nonatomic, getter=isKeyWindow) BOOL isKeyWindow;
@property (nonatomic) double timerInterval;
@property (readonly, weak) NSViewController *viewController;
@property (nonatomic) BOOL enabled;
@property (weak, nonatomic) id<SiriUIAutoDismissalControllerDelegate> delegate;
@property (weak, nonatomic) id<SiriUIAutoDismissalControllerClickOutsideContentDelegate> clickOutsideContentDelegate;

- (void)pause;
- (void)cancelTimer;
- (void)dealloc;
- (void)startTimer;
- (id)initWithViewController:(id)a0;
- (void)resume;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (void)setKeyWindow:(BOOL)a0;
- (void)keyWindowChanged:(id)a0;
- (void)pauseOutsideOfContentDismissal:(BOOL)a0;
- (void)watchKeyWindow:(BOOL)a0;
- (void)_maybeSpotlightIsUp;
- (void)_spaceChanged;
- (void)cancelClickOutsideOfContentHoldBackTimerIfNeeded;
- (void)clickOutsideOfContentHoldbackTimerFired;
- (void)pauseOrResume:(BOOL)a0;
- (void)startTimerWithTimingOption:(long long)a0;
- (void)watchClickOutsideOfContent:(BOOL)a0;
- (void)watchHovering:(BOOL)a0;

@end
