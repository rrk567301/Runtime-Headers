@class HKQuantity, NSDate;

@interface _HKActivityStatisticsQuantityInfo : NSObject <_HKJSONObject, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) HKQuantity *quantityValue;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (id)jsonObject;

@end
