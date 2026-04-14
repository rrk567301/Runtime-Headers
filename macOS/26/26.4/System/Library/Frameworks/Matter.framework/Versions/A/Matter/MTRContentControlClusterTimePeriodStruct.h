@class NSNumber;

@interface MTRContentControlClusterTimePeriodStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *startHour;
@property (copy, nonatomic) NSNumber *startMinute;
@property (copy, nonatomic) NSNumber *endHour;
@property (copy, nonatomic) NSNumber *endMinute;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
