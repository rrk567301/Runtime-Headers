@class VKMapView;
@protocol MKRotationFilterDelegate;

@interface MKRotationFilter : NSObject {
    VKMapView *_mapLayer;
    double _gestureStartAngle;
    char _userRotatedAwayFromVerticalYaw;
    double _previousVerticalYawOverride;
    char _snappedAtStart;
    char _snappingEnabled;
}

@property (nonatomic, getter=isSnappedToNorth) char snappedToNorth;
@property (nonatomic) double additionalSnappingAngle;
@property (weak, nonatomic) id<MKRotationFilterDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (char)hasAdditionalSnappingAngle;
- (id)initWithMapLayer:(id)a0;
- (void)snapToNorthAnimated:(char)a0 forceTrueNorth:(char)a1;
- (void)startRotatingWithFocusPoint:(struct CGPoint { double x0; double x1; })a0 withSnapping:(char)a1;
- (void)stopRotatingWithFocusPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)updateRotationWithFocusPoint:(struct CGPoint { double x0; double x1; })a0 newValue:(double)a1;
- (void)updateSnappedToNorth;

@end
