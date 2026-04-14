@interface EMAxisMapper : CMMapper

- (float)unit;
- (struct CGColor { } *)strokeColor;
- (id)position;
- (id)labels;
- (id)values;
- (float)minValue;
- (id)label;
- (struct CGColor { } *)textColor;
- (float)maxValue;
- (unsigned int)type;
- (float)strokeWidth;
- (BOOL)centerLabels;
- (BOOL)isLogarithmic;

@end
