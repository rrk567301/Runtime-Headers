@class _NS2DVelocityFilter;

@interface _NSScrollingPredominantAxisFilter : NSObject {
    _NS2DVelocityFilter *_velocityFilter;
}

@property long long predominantAxisMode;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void)reset;
- (BOOL)resetIfOutOfDate:(double)a0;
- (void)filterInputDelta:(struct CGPoint { double x0; double x1; })a0 timestamp:(double)a1 outputDelta:(struct CGPoint { double x0; double x1; } *)a2 velocity:(struct CGPoint { double x0; double x1; } *)a3;
- (void)filterInputScrollEvent:(id)a0 outputDelta:(struct CGPoint { double x0; double x1; } *)a1 velocity:(struct CGPoint { double x0; double x1; } *)a2;

@end
