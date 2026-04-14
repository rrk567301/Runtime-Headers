@class HKQuantity;

@interface HDFakeDataCollectorConfiguration : NSObject <NSCopying>

@property (nonatomic) long long activityType;
@property (copy, nonatomic) HKQuantity *speed;

+ (id)configurationForWorkoutActivityType:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
