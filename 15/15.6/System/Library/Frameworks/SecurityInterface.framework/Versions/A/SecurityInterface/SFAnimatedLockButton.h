@class NSTimer, NSTrackingArea, NSMutableArray, NSSound;

@interface SFAnimatedLockButton : NSButton {
    NSMutableArray *_animationArray;
    int _animationIndex;
    NSTimer *_timer;
    char _locked;
    char _mouseEntered;
    NSTrackingArea *_trackingArea;
    NSSound *_sfUnlockSound;
    NSSound *_sfLockSound;
}

- (void)dealloc;
- (id)_imageNamed:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)_animate:(char)a0;
- (void)unlock:(char)a0;
- (void)_animatorTimerProc:(id)a0;
- (void)_drawRollOver:(char)a0;
- (void)_loadAnimation;
- (void)_setPressedStateImage;
- (void)_setupImages;
- (void)lock:(char)a0;
- (void)startRollOverTracking;
- (void)startRollOverTracking:(float)a0;
- (void)startRollOverTracking:(float)a0 forRTL:(char)a1;
- (void)stopRollOverTracking;
- (void)stopRollOverTracking:(char)a0;

@end
