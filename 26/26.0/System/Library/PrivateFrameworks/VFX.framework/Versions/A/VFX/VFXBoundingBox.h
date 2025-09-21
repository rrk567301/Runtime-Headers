@interface VFXBoundingBox : NSObject

@property (nonatomic) void /* unknown type, empty encoding */ min;
@property (nonatomic) void /* unknown type, empty encoding */ max;

- (id)description;
- (void)setMaxValue:(id)a0;
- (void)setMinValue:(id)a0;
- (id)maxValue;
- (id)minValue;

@end
