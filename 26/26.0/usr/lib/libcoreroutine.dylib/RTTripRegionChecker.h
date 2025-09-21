@class RTDefaultsManager, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface RTTripRegionChecker : NSObject {
    BOOL _enableRegionCheck;
    struct CLLocationCoordinate2D { double latitude; double longitude; } _lastQueryVisitCoordinate;
    NSDate *_lastQueryVisitTime;
    BOOL _lastTripSegmentGenerationDecision;
    BOOL _shouldDisableProcessingInChina;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;

- (void).cxx_destruct;
- (id)initWithDefaultsManager:(id)a0;
- (double)getDistanceThresholdForEarlyReturn;
- (id)getGeoTerritoryListForLatitude:(double)a0 longitude:(double)a1;
- (BOOL)isValidCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (BOOL)shouldAllowProcessingTripSegmentInCurrentCountry;
- (BOOL)shouldGenerateTripSegmentForTransitionWithStartLocation:(id)a0 stopLocation:(id)a1 startDate:(id)a2 stopDate:(id)a3 identifier:(id)a4;
- (BOOL)shouldGenerateTripSegmentWithLatitude:(double)a0 longitude:(double)a1 date:(id)a2;

@end
