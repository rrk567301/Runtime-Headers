@interface KHRGBColor : KHColor

- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (id)stringRepresentation;
- (struct CGColor { } *)CGColor;
- (id)description;
- (id)systemColor;

@end
