@class RTRoutineManager;

@interface ATXLocationManagerRoutineCR : NSObject <ATXLocationManagerRoutine> {
    RTRoutineManager *_routineManager;
}

+ (id)closestLOI:(id)a0 toLocation:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithRoutineManager:(id)a0;
- (void)fetchLOILocationOfType:(long long)a0 reply:(id /* block */)a1;
- (void)fetchClosestLOIWithinDistance:(double)a0 ofLocation:(id)a1 reply:(id /* block */)a2;
- (void)fetchLOIVisitedDuring:(id)a0 reply:(id /* block */)a1;
- (void)fetchNextPredictedLOIFromLocation:(id)a0 startDate:(id)a1 timeInterval:(double)a2 requireHighConfidence:(char)a3 reply:(id /* block */)a4;
- (void)fetchPredictedExitDatesFromLocation:(id)a0 onDate:(id)a1 requireHighConfidence:(char)a2 reply:(id /* block */)a3;
- (unsigned long long)fetchRoutineModeFromLocation:(id)a0;

@end
