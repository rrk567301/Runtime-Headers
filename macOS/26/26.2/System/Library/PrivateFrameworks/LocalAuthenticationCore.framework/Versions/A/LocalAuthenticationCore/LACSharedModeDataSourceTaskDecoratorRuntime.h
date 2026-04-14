@interface LACSharedModeDataSourceTaskDecoratorRuntime : NSObject {
    double _minValue;
    double _maxValue;
    double _effectiveMaxValue;
    double _effectiveMinValue;
}

@property (readonly, nonatomic) double minValue;
@property (readonly, nonatomic) double maxValue;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)init;
- (id)initWithMinValue:(double)a0 maxValue:(double)a1;
- (void)halveMaxValue;
- (void)resetMaxValue;

@end
