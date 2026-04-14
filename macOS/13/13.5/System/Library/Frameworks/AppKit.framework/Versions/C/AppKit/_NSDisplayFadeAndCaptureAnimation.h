@interface _NSDisplayFadeAndCaptureAnimation : NSAnimation {
    unsigned long long displayCount;
    unsigned int *displays;
    struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; } *gammas;
}

@property BOOL fadeOut;
@property (copy) id /* block */ completionHandler;

- (void)dealloc;
- (id)init;
- (void)_stopAnimation:(long long)a0 withDisplayLink:(id)a1;
- (void)setCurrentProgress:(float)a0;
- (void)startAnimation;

@end
