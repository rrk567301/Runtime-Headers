@interface _HDValueRange : NSObject

@property (nonatomic) double minimum;
@property (nonatomic) double maximum;
@property (nonatomic) char isMinimumInclusive;
@property (nonatomic) char isMaximumInclusive;

- (char)isEqual:(id)a0;
- (char)contains:(double)a0;
- (id)initWithMinimum:(double)a0 maximum:(double)a1 isMinimumInclusive:(char)a2 isMaximumInclusive:(char)a3;

@end
