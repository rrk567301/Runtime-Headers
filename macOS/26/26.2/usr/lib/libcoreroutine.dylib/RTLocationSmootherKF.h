@class RTFixedSizeQueue;

@interface RTLocationSmootherKF : NSObject {
    RTFixedSizeQueue *states;
    double refLat;
    double refLon;
    double refAlt;
}

- (void).cxx_destruct;
- (id)init;
- (id)buildLocationWithEstimationState:(id)a0 originalLocation:(id)a1;
- (double)getRefAlt:(id)a0;
- (id)smoothLocations:(id)a0;

@end
