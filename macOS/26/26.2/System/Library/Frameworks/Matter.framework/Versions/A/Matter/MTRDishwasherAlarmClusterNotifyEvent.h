@class NSNumber;

@interface MTRDishwasherAlarmClusterNotifyEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *active;
@property (copy, nonatomic) NSNumber *inactive;
@property (copy, nonatomic) NSNumber *state;
@property (copy, nonatomic) NSNumber *mask;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
