@class NSString, NSTimer, NSBezierPath, ScreenSaverClockView;

@interface ScreenSaverClockWindow : NSWindow <NSWindowDelegate> {
    ScreenSaverClockView *_clockView;
    NSTimer *_updateTimer;
    NSBezierPath *_clockPath;
    struct CGPoint { double x; double y; } _startingPoint;
    int _corner;
    long long _lastMinute;
    int _zeroPointIndex;
    id _clockDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)hide;
+ (void)show;
+ (void)showInSpace:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clockFrame;

- (void)dealloc;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (void)_hide;
- (void)_show;
- (void)_updateWindow;
- (void)_notifyClockMoved;
- (void)_constructClockPath;
- (int)_zeroPointIndexIntoClockPath;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_advanceClockPath:(id)a0;

@end
