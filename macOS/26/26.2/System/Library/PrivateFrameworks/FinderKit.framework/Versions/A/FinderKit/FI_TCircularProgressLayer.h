@class NSColor;

@interface FI_TCircularProgressLayer : FI_TLayer {
    struct function<void ()> { struct __value_func<void ()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _progressDidCompleteHandler;
}

@property double endAngle;
@property (nonatomic) double fractionComplete;
@property (nonatomic) double animationDuration;
@property (retain, nonatomic) NSColor *fillColor;
@property (readonly, nonatomic) BOOL isProgressAnimationCompleted;

+ (BOOL)needsDisplayForKey:(id)a0;

- (id)actionForKey:(id)a0;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void).cxx_destruct;
- (id)initWithLayer:(id)a0;
- (id).cxx_construct;
- (id)init;
- (void)callProgressAnimationDidCompleteHandlerIfNeeded;
- (void)setEndAngleAnimated:(double)a0;
- (void)setProgressDidCompleteHandler:(const void *)a0;

@end
