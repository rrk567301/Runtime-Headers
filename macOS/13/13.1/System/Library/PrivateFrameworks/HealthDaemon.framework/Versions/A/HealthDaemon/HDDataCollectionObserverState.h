@interface HDDataCollectionObserverState : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL isInBackground;
@property (readonly, nonatomic) BOOL hasRunningWorkout;

+ (id)dataCollectionObserverStateInBackground:(BOOL)a0 hasRunningWorkout:(BOOL)a1;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
