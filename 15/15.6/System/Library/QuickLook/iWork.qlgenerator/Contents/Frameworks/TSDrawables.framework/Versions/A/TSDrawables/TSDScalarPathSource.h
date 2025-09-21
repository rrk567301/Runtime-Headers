@interface TSDScalarPathSource : TSDPathSource <TSDMixing, TSDSmartPathSource> {
    struct CGSize { double width; double height; } mNaturalSize;
}

@property (nonatomic) unsigned long long type;
@property (nonatomic) double scalar;
@property (readonly, nonatomic) double maxScalar;
@property (nonatomic) char isCurveContinuous;
@property (readonly, nonatomic) double cornerRadius;
@property (readonly, nonatomic) double maxCornerRadius;
@property (readonly, nonatomic) unsigned long long numberOfSides;

+ (id)chevronWithScalar:(double)a0 naturalSize:(struct CGSize { double x0; double x1; })a1;
+ (id)pathSourceWithType:(unsigned long long)a0 scalar:(double)a1 naturalSize:(struct CGSize { double x0; double x1; })a2;
+ (id)rectangleWithNaturalSize:(struct CGSize { double x0; double x1; })a0;
+ (id)regularPolygonWithScalar:(double)a0 naturalSize:(struct CGSize { double x0; double x1; })a1;
+ (id)roundedRectangleWithScalar:(double)a0 naturalSize:(struct CGSize { double x0; double x1; })a1 continuousCurve:(char)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)name;
- (char)isRectangular;
- (void)setNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })naturalSize;
- (id)initWithArchive:(const void *)a0;
- (char)isCircular;
- (void)saveToArchive:(void *)a0;
- (void)setScalarValue:(id)a0;
- (struct CGPoint { double x0; double x1; })p_getControlKnobPointForChevron;
- (id)bezierPathWithoutFlips;
- (struct CGPoint { double x0; double x1; })getControlKnobPosition:(unsigned long long)a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (unsigned long long)numberOfControlKnobs;
- (struct CGPoint { double x0; double x1; })p_getControlKnobPointForRegularPolygon;
- (struct CGPoint { double x0; double x1; })p_getControlKnobPointForRoundedRect;
- (struct CGPath { } *)p_newChevronPath;
- (struct CGPath { } *)p_newRegularPolygonPath;
- (struct CGPath { } *)p_newRoundedRectPath;
- (void)p_setControlKnobPointForChevron:(struct CGPoint { double x0; double x1; })a0;
- (void)p_setControlKnobPointForRegularPolygon:(struct CGPoint { double x0; double x1; })a0;
- (void)p_setControlKnobPointForRoundedRect:(struct CGPoint { double x0; double x1; })a0;
- (void)scaleToNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (id)inferredAccessibilityDescription;
- (id)initWithType:(unsigned long long)a0 scalar:(double)a1 naturalSize:(struct CGSize { double x0; double x1; })a2 continuousCurve:(char)a3;

@end
