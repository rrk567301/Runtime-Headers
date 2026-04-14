@class NSString, NSDate;

@interface LogBloodPressureIntentResponse : INIntentResponse

@property (nonatomic) double systolic;
@property (nonatomic) double diastolic;
@property (nonatomic, copy) NSString *unit;
@property (nonatomic, copy) NSDate *sampleStart;
@property (nonatomic, copy) NSDate *sampleEnd;
@property (nonatomic) long long code;

- (id)initWithBackingStore:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;
- (id)initWithPropertiesByName:(id)a0;

@end
