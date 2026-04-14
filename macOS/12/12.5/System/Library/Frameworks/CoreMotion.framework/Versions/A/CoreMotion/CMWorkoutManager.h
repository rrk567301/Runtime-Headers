@class CMWorkoutManagerInternal;
@protocol CMWorkoutManagerDelegate;

@interface CMWorkoutManager : NSObject

@property (readonly, nonatomic) CMWorkoutManagerInternal *_internal;
@property (nonatomic) id<CMWorkoutManagerDelegate> delegate;

+ (BOOL)isAvailable;

- (void)dealloc;
- (id)init;
- (void)startWorkout:(id)a0;
- (void)stopWorkout:(id)a0;
- (unsigned long long)supportedMetricsForWorkoutType:(long long)a0;
- (void)getPromptsNeededForWorkoutType:(long long)a0 handler:(id /* block */)a1;
- (void)setSuggestedStopTimeout:(double)a0;
- (void)userDismissedWorkoutAlert;
- (void)triggerWorkoutLocationUpdateForTesting:(long long)a0;

@end
