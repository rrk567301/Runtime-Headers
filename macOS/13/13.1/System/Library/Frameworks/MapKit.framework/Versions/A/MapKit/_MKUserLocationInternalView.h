@class MKUserLocationView;

@interface _MKUserLocationInternalView : _MKUserLocationView

@property (weak, nonatomic) MKUserLocationView *parentView;

- (void).cxx_destruct;
- (id)_containerView;
- (id)_mapView;
- (id)_annotationContainer;
- (double)_pointsForDistance:(double)a0;

@end
