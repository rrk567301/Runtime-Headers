@class CMOdometerProxy;
@protocol CMOdometerDelegate;

@interface CMOdometer : NSObject

@property (readonly, nonatomic) CMOdometerProxy *odometerProxy;
@property (nonatomic) id<CMOdometerDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void)startOdometerUpdatesForActivity:(long long)a0 withHandler:(id /* block */)a1;
- (void)stopOdometerUpdates;
- (void)startCyclingWorkoutDistanceUpdatesWithHandler:(id /* block */)a0;
- (void)stopCyclingWorkoutDistanceUpdates;

@end
