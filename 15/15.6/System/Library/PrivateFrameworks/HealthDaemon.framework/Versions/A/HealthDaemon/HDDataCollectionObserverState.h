@interface HDDataCollectionObserverState : NSObject <NSCopying>

@property (readonly, nonatomic) char isInForeground;
@property (readonly, nonatomic) char hasRunningWorkout;
@property (readonly, nonatomic) char hasBackgroundObserver;

+ (id)dataCollectionObserverStateInForeground:(char)a0 hasRunningWorkout:(char)a1 hasBackgroundObserver:(char)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;

@end
