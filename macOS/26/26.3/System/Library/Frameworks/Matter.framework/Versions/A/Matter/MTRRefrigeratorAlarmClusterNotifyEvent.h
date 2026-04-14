@class NSNumber;

@interface MTRRefrigeratorAlarmClusterNotifyEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *active;
@property (copy, nonatomic) NSNumber *inactive;
@property (copy, nonatomic) NSNumber *state;
@property (copy, nonatomic) NSNumber *mask;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
