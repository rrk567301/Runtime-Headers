@interface VFXBoundingBox : NSObject

@property (nonatomic) void /* unknown type, empty encoding */ min;
@property (nonatomic) void /* unknown type, empty encoding */ max;

- (id)minValue;
- (void)setMinValue:(id)a0;
- (void)setMaxValue:(id)a0;
- (id)maxValue;
- (id)description;

@end
