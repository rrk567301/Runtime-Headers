@class PCLatLon;

@interface PCOutOfPatternLogic : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PCLatLon *modelCentroid;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)filterItems:(id)a0 usingLocationBlock:(id /* block */)a1;
- (id)closestHomeLOIFromCandidates:(id)a0 toLocation:(id)a1;
- (id)filterCalendarEvents:(id)a0;
- (id)filterInputSignals:(id)a0;
- (id)filterMapsViewedPlaces:(id)a0;
- (id)filterTransitions:(id)a0 withLocationOfInterests:(id)a1;
- (id)filterVisits:(id)a0;
- (id)homeLOIsWithinBoundingBoxCenteredAtLocation:(id)a0 fromLocationOfInterests:(id)a1;
- (id)initWithModelCentroidLatLon:(id)a0;
- (BOOL)isLatLon:(id)a0 insideBoundingBoxWithCentroid:(id)a1;
- (BOOL)isOutOfPatternForInputSignals:(id)a0;
- (id)locationOfInterestForIdentifier:(id)a0 fromArray:(id)a1;
- (id)processInputSignals:(id)a0 isOutOfPattern:(BOOL *)a1;
- (id)snapModelCentroidForCurrentLocation:(id)a0 withInputSignals:(id)a1;

@end
