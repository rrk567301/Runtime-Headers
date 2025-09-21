@class AVPlayerController;
@protocol AVDesktopGestureControllerDelegate;

@interface AVDesktopGestureController : NSObject {
    char _jKeyDown;
    char _kKeyDown;
    char _lKeyDown;
    char _dontScrubBecauseOfJump;
    double _deltaX;
    double _deltaY;
    double _eventBeginTime;
    double _momentumEndTime;
    double _rateAtEventBegan;
}

@property (retain, nonatomic) AVPlayerController *playerController;
@property (weak, nonatomic) id<AVDesktopGestureControllerDelegate> delegate;

- (void).cxx_destruct;
- (char)_handleScrollEvent:(id)a0;
- (char)handleEvent:(id)a0;
- (char)_canHandleKeyEvent:(id)a0;
- (char)_canHandleScrollEvent:(id)a0;
- (char)_canHandleSwipeEvent:(id)a0;
- (void)_didConsumeEvent:(id)a0;
- (void)_didRespondToEvent:(id)a0;
- (void)_handleJKLWithEvent:(id)a0;
- (char)_handleKeyDownEvent:(id)a0;
- (char)_handleKeyUpEvent:(id)a0;
- (char)_handleSwipeEvent:(id)a0;
- (char)_shouldIgnoreKeyEvent:(id)a0 withKey:(unsigned short)a1;

@end
