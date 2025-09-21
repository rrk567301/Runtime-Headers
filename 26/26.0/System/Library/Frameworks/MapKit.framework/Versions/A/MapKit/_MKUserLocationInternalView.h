@class MKUserLocationView;

@interface _MKUserLocationInternalView : _MKUserLocationView

@property (weak, nonatomic) MKUserLocationView *parentView;

- (id)_containerView;
- (void).cxx_destruct;
- (id)_annotationContainer;
- (id)_mapView;
- (double)_pointsForDistance:(double)a0;

@end
