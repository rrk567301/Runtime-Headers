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
- (void)setMode:(unsigned long long)a0 forWorkout:(id)a1;
- (void)beginWorkoutSession:(id)a0 withWorkout:(id)a1 enableWorkoutChangeDetection:(BOOL)a2;
- (void)setCurrentWorkoutType:(id)a0 isManualTransition:(BOOL)a1;
- (void)endWorkoutSession:(id)a0;
- (void)pauseWorkout:(id)a0;
- (void)resumeWorkout:(id)a0;

@end
