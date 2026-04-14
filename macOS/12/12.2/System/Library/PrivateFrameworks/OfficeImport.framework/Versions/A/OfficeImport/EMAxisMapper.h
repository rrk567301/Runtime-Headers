@interface EMAxisMapper : CMMapper

- (id)values;
- (unsigned int)type;
- (id)label;
- (float)unit;
- (id)position;
- (float)maxValue;
- (float)minValue;
- (struct CGColor { } *)textColor;
- (float)strokeWidth;
- (struct CGColor { } *)strokeColor;
- (id)labels;
- (BOOL)isLogarithmic;
- (BOOL)centerLabels;

@end
