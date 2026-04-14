@class NSString;

@interface LogBloodPressureIntent : INIntent

@property (nonatomic) double systolic;
@property (nonatomic) double diastolic;
@property (nonatomic, copy) NSString *unit;

- (id)init;
- (id)initWithCoder:(id)a0;

@end
