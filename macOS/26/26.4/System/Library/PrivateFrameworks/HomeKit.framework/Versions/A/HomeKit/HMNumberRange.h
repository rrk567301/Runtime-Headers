@class NSNumber;

@interface HMNumberRange : NSObject

@property (readonly, nonatomic) NSNumber *minValue;
@property (readonly, nonatomic) NSNumber *maxValue;

+ (id)numberRangeWithMaxValue:(id)a0;
+ (id)numberRangeWithMinValue:(id)a0;
+ (id)numberRangeWithMinValue:(id)a0 maxValue:(id)a1;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithMinValue:(id)a0 maxValue:(id)a1;

@end
