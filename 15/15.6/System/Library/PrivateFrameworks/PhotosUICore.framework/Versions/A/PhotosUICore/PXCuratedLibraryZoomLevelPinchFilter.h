@class PXInitialHysteresisNumberFilter, PXChangeDirectionNumberFilter;

@interface PXCuratedLibraryZoomLevelPinchFilter : NSObject {
    char _didHandleInitialPinch;
    PXInitialHysteresisNumberFilter *_initialDirectionFilter;
    PXChangeDirectionNumberFilter *_scaleDirectionFilter;
    double _lastDirection;
}

@property (readonly, nonatomic) char isTrackingPinch;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)filterPinchGestureWithScale:(double)a0 initialPinchHandler:(id /* block */)a1 subsequentDirectionChangeHandler:(id /* block */)a2;

@end
