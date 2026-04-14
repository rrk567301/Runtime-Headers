@class NSDate;

@interface GetBloodPressureIntent : INIntent

@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic, copy) NSDate *endDate;

- (id)init;
- (id)initWithCoder:(id)a0;

@end
