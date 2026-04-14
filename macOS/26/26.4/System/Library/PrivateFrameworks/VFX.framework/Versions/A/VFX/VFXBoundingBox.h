@interface VFXBoundingBox : NSObject

@property (nonatomic) void /* unknown type, empty encoding */ min;
@property (nonatomic) void /* unknown type, empty encoding */ max;

- (void)setMaxValue:(id)a0;
- (id)minValue;
- (id)maxValue;
- (void)setMinValue:(id)a0;
- (id)description;

@end
