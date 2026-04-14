@class NSColor;

@interface FI_TCircularProgressLayer : FI_TLayer {
    NSColor *_fillColor;
    BOOL _progressAnimationCompleted;
    struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _progressDidCompleteHandler;
}

@property double endAngle;
@property (nonatomic) double fractionComplete;
@property (nonatomic) double animationDuration;
@property (retain, nonatomic) NSColor *fillColor;
@property (readonly, nonatomic) BOOL isProgressAnimationCompleted;

+ (BOOL)needsDisplayForKey:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setFillColor:(id)a0;
- (id)fillColor;
- (id)actionForKey:(id)a0;
- (id)initWithLayer:(id)a0;
- (void)drawInContext:(struct CGContext { } *)a0;
- (double)fractionComplete;
- (void)setFractionComplete:(double)a0;
- (void)setEndAngleAnimated:(double)a0;
- (void)callProgressAnimationDidCompleteHandlerIfNeeded;
- (void)setProgressDidCompleteHandler:(const void *)a0;
- (BOOL)isProgressAnimationCompleted;

@end
