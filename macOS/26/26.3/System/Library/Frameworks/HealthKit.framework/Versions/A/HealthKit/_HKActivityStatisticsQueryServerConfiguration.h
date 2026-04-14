@class NSDateComponents, NSDate;

@interface _HKActivityStatisticsQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSDateComponents *moveIntervalComponents;
@property (copy, nonatomic) NSDateComponents *exerciseIntervalComponents;
@property (nonatomic) double updateInterval;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
