@class NSWindow;

@interface WebWindowFadeAnimation : NSAnimation {
    double _initialAlpha;
    double _finalAlpha;
    NSWindow *_window;
    BOOL _isStopped;
}

- (double)currentAlpha;
- (void)setDuration:(double)a0;
- (void)setWindow:(id)a0;
- (void)stopAnimation;
- (id)init;
- (void)setCurrentProgress:(float)a0;
- (id)initWithDuration:(double)a0 window:(id)a1 initialAlpha:(double)a2 finalAlpha:(double)a3;

@end
