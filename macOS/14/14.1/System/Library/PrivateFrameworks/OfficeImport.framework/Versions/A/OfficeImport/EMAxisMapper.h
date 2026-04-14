@interface EMAxisMapper : CMMapper

- (unsigned int)type;
- (id)values;
- (id)label;
- (id)position;
- (float)unit;
- (float)maxValue;
- (float)minValue;
- (struct CGColor { } *)strokeColor;
- (float)strokeWidth;
- (struct CGColor { } *)textColor;
- (id)labels;
- (BOOL)centerLabels;
- (BOOL)isLogarithmic;

@end
