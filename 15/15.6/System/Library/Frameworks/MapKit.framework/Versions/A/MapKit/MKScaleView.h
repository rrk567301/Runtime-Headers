@class NSImageView, MKMapView, NSVisualEffectView, NSCache;

@interface MKScaleView : NSView {
    char _useMetric;
    char _useYardsForShortDistances;
    char _wasDragged;
    char _wasClickedInside;
    struct CGPoint { double x; double y; } _clickPosition;
    char _isVisible;
    double _segmentLength;
    NSCache *_cache;
    NSVisualEffectView *_effectView;
    NSImageView *_vibrantImageView;
    NSImageView *_imageView;
    double _segmentThickness;
    double _legendOffset;
    double _leftMarginForText;
    double _approximateSegmentWidth;
    double _bottomMarginForText;
    double _legendFontSize;
}

@property (readonly, nonatomic) NSCache *cache;
@property (weak, nonatomic) MKMapView *mapView;
@property (nonatomic) long long scaleVisibility;
@property (nonatomic) double distanceInMeters;
@property (readonly, nonatomic) double segmentLength;
@property (nonatomic) char drawsOutline;
@property (nonatomic) char reducesTransparency;
@property (nonatomic, getter=_controlSize, setter=_setControlSize:) unsigned long long controlSize;

+ (double)_chooseUnitForSegment:(id)a0 mileageContext:(char)a1 useMetricSystem:(char)a2 useYardsForShortDistances:(char)a3;
+ (id)mileageSegmentWithDistance:(double)a0 useMetricSystem:(char)a1;
+ (double)niceDistanceFromDistance:(double)a0;
+ (id)niceMileageSegmentWithLowerBound:(double)a0 useMetricSystem:(char)a1;
+ (id)niceSegmentWithLowerBound:(double)a0 useMetricSystem:(char)a1 useYardsForShortDistances:(char)a2;
+ (id)scaleViewWithMapView:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })fittingSize;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })trackingRect;
- (void)viewDidMoveToWindow;
- (void)localWasUpdated;
- (void)updateHighlight;
- (void)_setVisible:(char)a0 animated:(char)a1 quickly:(char)a2 completion:(id /* block */)a3;
- (void)_updateVisibility;
- (void)accessibilityDisplayOptionsDidChange:(id)a0;
- (id)initWithMapView:(id)a0;
- (void)setupLocale;
- (void)shouldUpdateScaleNotification:(id)a0;
- (struct CGSize { double x0; double x1; })sizeForLegendString:(id)a0;
- (void)updateImages;
- (void)updateMetrics;

@end
