@class CMExerciseMinuteInternal;

@interface CMExerciseMinute : NSObject

@property (readonly, nonatomic) CMExerciseMinuteInternal *_internal;

+ (id)maxExerciseMinuteDataEntries;
+ (BOOL)isExerciseMinuteAvailable;

- (void)dealloc;
- (id)init;
- (void)stopUpdates;
- (void)startUpdatesFromRecord:(id)a0 handler:(id /* block */)a1;
- (void)startUpdatesWithHandler:(id /* block */)a0;
- (void)queryExerciseMinutesFromRecord:(id)a0 handler:(id /* block */)a1;

@end
