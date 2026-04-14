@class NSString;

@interface LogBloodPressureIntent : INIntent

@property (nonatomic) double systolic;
@property (nonatomic) double diastolic;
@property (nonatomic, copy) NSString *unit;

- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;

@end
