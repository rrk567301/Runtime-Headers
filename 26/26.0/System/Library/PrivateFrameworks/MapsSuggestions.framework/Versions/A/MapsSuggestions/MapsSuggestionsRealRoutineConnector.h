@class NSString, RTRoutineManager;

@interface MapsSuggestionsRealRoutineConnector : NSObject <MapsSuggestionsRoutineConnector> {
    RTRoutineManager *_routineManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeLocationOfInterestWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)correctLabelForCurrentPlace:(id)a0 date:(id)a1 newLabel:(id)a2 handler:(id /* block */)a3;
- (void)fetchRoutineModeFromLocation:(id)a0 withHandler:(id /* block */)a1;
- (void)startMonitoringVehicleEventsWithHandler:(id /* block */)a0;
- (void)fetchLocationOfInterestAtLocation:(id)a0 withHandler:(id /* block */)a1;
- (void)fetchStoredVisitsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchAutomaticVehicleEventDetectionSupportedWithHandler:(id /* block */)a0;
- (void)fetchLocationsOfInterestOfType:(long long)a0 withHandler:(id /* block */)a1;
- (void)fetchLocationsOfInterestVisitedSinceDate:(id)a0 withHandler:(id /* block */)a1;
- (void)fetchLocationOfInterestWithIdentifier:(id)a0 withHandler:(id /* block */)a1;
- (void)correctLabelForVisitWithIdentifier:(id)a0 entryDate:(id)a1 originalLabel:(id)a2 newLabel:(id)a3 handler:(id /* block */)a4;
- (void)fetchPredictedExitDatesFromLocation:(id)a0 onDate:(id)a1 withHandler:(id /* block */)a2;
- (void)clearAllVehicleEventsWithHandler:(id /* block */)a0;
- (void)fetchNextPLOIsFromLocation:(id)a0 startDate:(id)a1 timeInterval:(double)a2 withHandler:(id /* block */)a3;
- (id)init;
- (void)fetchLocationsOfInterestWithinDistance:(double)a0 ofLocation:(id)a1 withHandler:(id /* block */)a2;
- (void)stopMonitoringVehicleEvents;
- (void).cxx_destruct;

@end
