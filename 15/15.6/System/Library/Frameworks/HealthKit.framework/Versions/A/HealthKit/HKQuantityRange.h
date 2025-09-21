@class HKQuantity;

@interface HKQuantityRange : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) HKQuantity *minimum;
@property (copy, nonatomic) HKQuantity *maximum;
@property (nonatomic) char isMinimumInclusive;
@property (nonatomic) char isMaximumInclusive;

+ (id)ATTDHyperglycemicRangeWithUnit:(id)a0;
+ (id)ATTDGlycemicRangesWithUnit:(id)a0;
+ (id)ATTDLevel2HypoglycemicRangeWithUnit:(id)a0;
+ (id)ATTDEuglycemicRangeWithUnit:(id)a0;
+ (id)ATTDLevel1HypoglycemicRangeWithUnit:(id)a0;
+ (char)areRangesDisjoint:(id)a0;
+ (id)exclusiveRangeWithMinimum:(id)a0 maximum:(id)a1;
+ (id)inclusiveRangeWithMinimum:(id)a0 maximum:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)intersectsRange:(id)a0;
- (char)containsQuantity:(id)a0;
- (id)initWithMinimum:(id)a0 maximum:(id)a1 isMinimumInclusive:(char)a2 isMaximumInclusive:(char)a3;
- (char)isEqualToQuantityRange:(id)a0 withAccuracy:(id)a1;

@end
