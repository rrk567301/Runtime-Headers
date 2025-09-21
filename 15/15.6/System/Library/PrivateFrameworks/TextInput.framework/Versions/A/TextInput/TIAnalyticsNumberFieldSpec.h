@class NSNumber;

@interface TIAnalyticsNumberFieldSpec : TIAnalyticsFieldSpec

@property (readonly, nonatomic) char isInteger;
@property (readonly, nonatomic) NSNumber *minValue;
@property (readonly, nonatomic) NSNumber *maxValue;
@property (readonly, nonatomic) NSNumber *significantDigits;

- (void).cxx_destruct;
- (char)validate:(id)a0 error:(id *)a1;
- (id)initWithName:(id)a0 isInteger:(char)a1 minValue:(id)a2 maxValue:(id)a3 significantDigits:(id)a4;

@end
