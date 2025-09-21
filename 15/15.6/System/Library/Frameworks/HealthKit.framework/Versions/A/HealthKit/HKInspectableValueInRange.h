@class HKInspectableValue, NSString, HKInspectableValueCollection, NSNumber;

@interface HKInspectableValueInRange : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) HKInspectableValue *lowValue;
@property (readonly, nonatomic) HKInspectableValue *highValue;
@property (readonly, nonatomic) HKInspectableValueCollection *currentValue;
@property (readonly, copy, nonatomic) NSString *unitString;
@property (readonly, nonatomic) NSNumber *lowValueNumberRepresentation;
@property (readonly, nonatomic) NSNumber *highValueNumberRepresentation;
@property (readonly, nonatomic) long long currentValueRelation;
@property (readonly, nonatomic) char hasRenderableContent;

+ (id)valueInRangeWithLow:(id)a0 high:(id)a1 currentValue:(id)a2 unit:(id)a3;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_setUnitString:(id)a0;
- (void)_assertValidRange;
- (id)_currentValueDoubleRepresentation;
- (id)_initValueInRangeWithLow:(id)a0 high:(id)a1 currentValue:(id)a2 unit:(id)a3;
- (id)_numberForValue:(id)a0;
- (id)_numberForValueCollection:(id)a0;

@end
