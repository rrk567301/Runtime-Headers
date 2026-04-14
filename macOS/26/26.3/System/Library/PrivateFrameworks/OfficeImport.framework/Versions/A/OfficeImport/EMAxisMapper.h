@interface EMAxisMapper : CMMapper

- (float)strokeWidth;
- (struct CGColor { } *)strokeColor;
- (unsigned int)type;
- (float)minValue;
- (id)position;
- (id)labels;
- (id)label;
- (float)unit;
- (id)values;
- (struct CGColor { } *)textColor;
- (float)maxValue;
- (BOOL)centerLabels;
- (BOOL)isLogarithmic;

@end
