@interface EMAxisMapper : CMMapper

- (id)values;
- (unsigned int)type;
- (id)label;
- (float)unit;
- (id)position;
- (float)minValue;
- (float)maxValue;
- (struct CGColor { } *)strokeColor;
- (float)strokeWidth;
- (struct CGColor { } *)textColor;
- (id)labels;
- (BOOL)isLogarithmic;
- (BOOL)centerLabels;

@end
