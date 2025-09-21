@interface _NSGestureRecognizerTransformAnalyzer : NSObject {
    double _lowPassTranslationMagnitudeDelta;
    double _lowPassScaleDelta;
    double _lowPassRotationDelta;
}

@property (readonly) int dominantComponent;
@property double translationWeight;
@property double pinchingWeight;
@property double rotationWeight;

- (void)reset;
- (id)init;
- (void)analyzeTouches:(id)a0;

@end
