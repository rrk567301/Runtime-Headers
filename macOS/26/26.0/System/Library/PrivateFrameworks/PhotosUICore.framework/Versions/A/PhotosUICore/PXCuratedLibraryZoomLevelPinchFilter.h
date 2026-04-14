@class PXInitialHysteresisNumberFilter, PXChangeDirectionNumberFilter;

@interface PXCuratedLibraryZoomLevelPinchFilter : NSObject {
    BOOL _didHandleInitialPinch;
    PXInitialHysteresisNumberFilter *_initialDirectionFilter;
    PXChangeDirectionNumberFilter *_scaleDirectionFilter;
    double _lastDirection;
}

@property (readonly, nonatomic) BOOL isTrackingPinch;

- (void)reset;
- (id)init;
- (void).cxx_destruct;
- (void)filterPinchGestureWithScale:(double)a0 initialPinchHandler:(id /* block */)a1 subsequentDirectionChangeHandler:(id /* block */)a2;

@end
