@class NSDateInterval;

@interface _HKStatisticsQueryServerConfiguration : HKQueryServerConfiguration

@property (nonatomic) unsigned long long options;
@property (nonatomic) unsigned long long mergeStrategy;
@property (copy, nonatomic) NSDateInterval *dateInterval;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
