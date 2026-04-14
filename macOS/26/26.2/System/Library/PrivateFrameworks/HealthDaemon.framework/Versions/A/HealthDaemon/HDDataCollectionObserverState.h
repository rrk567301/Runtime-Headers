@interface HDDataCollectionObserverState : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL isInForeground;
@property (readonly, nonatomic) BOOL hasRunningWorkout;
@property (readonly, nonatomic) BOOL hasBackgroundObserver;
@property (readonly, nonatomic) BOOL shouldTakeWorkoutDatabaseAssertion;

+ (id)dataCollectionObserverStateInForeground:(BOOL)a0 hasRunningWorkout:(BOOL)a1 hasBackgroundObserver:(BOOL)a2 shouldTakeWorkoutDatabaseAssertion:(BOOL)a3;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;

@end
