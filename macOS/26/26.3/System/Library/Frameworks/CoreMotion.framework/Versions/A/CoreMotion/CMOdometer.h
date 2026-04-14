@class CMOdometerProxy;
@protocol CMOdometerDelegate;

@interface CMOdometer : NSObject

@property (readonly, nonatomic) CMOdometerProxy *odometerProxy;
@property (weak, nonatomic) id<CMOdometerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)startOdometerUpdatesForActivity:(long long)a0 withHandler:(id /* block */)a1;
- (void)stopOdometerUpdates;
- (void)startCyclingWorkoutDistanceUpdatesWithHandler:(id /* block */)a0;
- (void)stopCyclingWorkoutDistanceUpdates;

@end
