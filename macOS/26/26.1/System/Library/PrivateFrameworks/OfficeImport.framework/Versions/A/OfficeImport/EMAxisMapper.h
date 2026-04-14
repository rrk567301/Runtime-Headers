@interface EMAxisMapper : CMMapper

- (id)position;
- (unsigned int)type;
- (float)unit;
- (float)minValue;
- (struct CGColor { } *)strokeColor;
- (float)strokeWidth;
- (struct CGColor { } *)textColor;
- (id)labels;
- (float)maxValue;
- (id)values;
- (id)label;
- (BOOL)centerLabels;
- (BOOL)isLogarithmic;

@end
