@class ULHomeSlamTimer, ULHomeSlamFence;

@interface ULHomeSlamStopDetection : NSObject

@property (nonatomic) struct ULDatabaseStoreInterface { void /* function */ **x0; } *dbStore;
@property (nonatomic) long long state;
@property (retain, nonatomic) ULHomeSlamFence *largeFence;
@property (retain, nonatomic) ULHomeSlamFence *smallFence;
@property (retain, nonatomic) ULHomeSlamFence *staticFence;
@property (retain, nonatomic) ULHomeSlamTimer *longTimer;
@property (retain, nonatomic) ULHomeSlamTimer *shortTimer;

- (void).cxx_destruct;
- (void)_setStaticFence;
- (void)_enterMotionStateAtTime:(struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; })a0;
- (void)_enterStaticState;
- (id)_getStopMotionTriggersFromOdometryEntries:(struct vector<ULOdometryDO, std::allocator<ULOdometryDO>> { struct ULOdometryDO *x0; struct ULOdometryDO *x1; struct ULOdometryDO *x2; })a0;
- (void)_runMotionStateLogicWithEntry:(const void *)a0 andTriggers:(id)a1;
- (void)_runStaticStateLogicWithEntry:(const void *)a0 andTriggers:(id)a1;
- (void)_setLargeMotionFence;
- (void)_setLongMotionTimerStartingDate:(id)a0;
- (void)_setShortMotionTimerStartingDate:(id)a0;
- (void)_setSmallMotionFence;
- (id)_shouldExitMotionState:(const void *)a0;
- (BOOL)_shouldExitStaticState:(const void *)a0;
- (id)_timepointToDate:(struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; })a0;
- (void)_updateFencesAndTimersInMotionStateWithEntry:(const void *)a0;
- (id)initWithDbStore:(struct ULDatabaseStoreInterface { void /* function */ **x0; } *)a0;
- (id)runStopDetectionAnalysisFromTime:(struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; })a0 toTime:(struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; })a1;

@end
