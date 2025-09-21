@class NSView, MKMapView, NSTextField;
@protocol TTRMRadialMapControllerDelegate, MKOverlay, MKAnnotation;

@interface TTRMMapDragRadiusView : NSView

@property (retain) NSView *handleImageView;
@property (retain) id<MKAnnotation> annotation;
@property (retain) id<MKOverlay> circleOverlay;
@property (retain) id<MKOverlay> dashOverlay;
@property (weak, nonatomic) MKMapView *mapView;
@property (weak, nonatomic) id<TTRMRadialMapControllerDelegate> delegate;
@property long long proximity;
@property (nonatomic) double radius;
@property struct CGPoint { double x; double y; } center;
@property (nonatomic) double metersPerPixel;
@property (retain) NSTextField *text;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (char)accessibilityPerformDecrement;
- (char)accessibilityPerformIncrement;
- (id)accessibilityRole;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isAccessibilityElement;
- (double)minimumInMeters;
- (void)addHandleForAnnotation:(id)a0;
- (void)animateHandleIn:(char)a0;
- (struct CGPoint { double x0; double x1; })calculatedCenter;
- (double)feetToMeters:(double)a0;
- (void)popAnimateHandle;
- (void)recalcMetersPerPixel;
- (void)removeHandle:(char)a0;
- (void)resizeCircleAfterDelay;
- (void)resizeCircleDragEnded:(char)a0;
- (void)updateOverlays;
- (void)updateTextWithRadius:(double)a0;
- (char)usesMetric;
- (double)ttrmAccessibilityRadiusByAdding:(double)a0;
- (double)ttrmAccessibilityRadiusIncrement;
- (char)ttrmAccessibilityUpdateWithRadius:(double)a0;
- (void)updateRadius:(double)a0 finished:(char)a1;

@end
