@class CMWorkoutManagerInternal;
@protocol CMWorkoutManagerDelegate;

@interface CMWorkoutManager : NSObject

@property (readonly, nonatomic) CMWorkoutManagerInternal *_internal;
@property (nonatomic) id<CMWorkoutManagerDelegate> delegate;

+ (char)isAvailable;
+ (unsigned long long)supportedMetricsForWorkoutType:(long long)a0;

- (void)dealloc;
- (id)init;
- (void)beginWorkoutSession:(id)a0 withWorkout:(id)a1 enableWorkoutChangeDetection:(char)a2;
- (void)endWorkoutSession:(id)a0;
- (void)getPromptsNeededForWorkoutType:(long long)a0 handler:(id /* block */)a1;
- (void)muteReminderType:(long long)a0 mute:(char)a1;
- (void)pauseWorkout:(id)a0;
- (void)resumeWorkout:(id)a0;
- (void)setCurrentWorkoutType:(id)a0 isManualTransition:(char)a1;
- (void)setSuggestedStopTimeout:(double)a0;
- (void)snapshotWithCompletion:(id /* block */)a0;
- (void)startWorkout:(id)a0;
- (void)stopWorkout:(id)a0;
- (void)triggerWorkoutLocationUpdateForTesting:(long long)a0;
- (void)userDismissedWorkoutAlert;

@end
