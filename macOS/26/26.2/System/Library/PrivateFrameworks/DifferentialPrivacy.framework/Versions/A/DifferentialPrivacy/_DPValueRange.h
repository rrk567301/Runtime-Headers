@class NSNumber;

@interface _DPValueRange : NSObject

@property (readonly, nonatomic) NSNumber *minPossible;
@property (readonly, nonatomic) NSNumber *maxPossible;
@property (readonly, nonatomic) NSNumber *range;

+ (id)rangeWithMin:(id)a0 max:(id)a1;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToValueRange:(id)a0;
- (id)initWithMin:(id)a0 max:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
