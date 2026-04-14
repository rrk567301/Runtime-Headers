@interface EMAxisMapper : CMMapper

- (struct CGColor { } *)strokeColor;
- (float)strokeWidth;
- (id)values;
- (unsigned int)type;
- (float)unit;
- (struct CGColor { } *)textColor;
- (id)label;
- (id)labels;
- (id)position;
- (float)maxValue;
- (float)minValue;
- (BOOL)centerLabels;
- (BOOL)isLogarithmic;

@end
