@class NSWindow;

@interface WebWindowFadeAnimation : NSAnimation {
    double _initialAlpha;
    double _finalAlpha;
    NSWindow *_window;
    BOOL _isStopped;
}

- (void)setWindow:(id)a0;
- (void)setCurrentProgress:(float)a0;
- (id)init;
- (double)currentAlpha;
- (void)setDuration:(double)a0;
- (void)stopAnimation;
- (id)initWithDuration:(double)a0 window:(id)a1 initialAlpha:(double)a2 finalAlpha:(double)a3;

@end
