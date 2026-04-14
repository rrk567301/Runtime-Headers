@interface EMAxisMapper : CMMapper

- (id)values;
- (unsigned int)type;
- (id)label;
- (float)unit;
- (id)position;
- (float)minValue;
- (float)maxValue;
- (struct CGColor { } *)textColor;
- (float)strokeWidth;
- (struct CGColor { } *)strokeColor;
- (id)labels;
- (BOOL)isLogarithmic;
- (BOOL)centerLabels;

@end
