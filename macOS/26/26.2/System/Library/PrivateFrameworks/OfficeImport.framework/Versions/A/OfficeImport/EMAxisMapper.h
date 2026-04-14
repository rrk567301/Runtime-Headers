@interface EMAxisMapper : CMMapper

- (float)unit;
- (float)strokeWidth;
- (struct CGColor { } *)strokeColor;
- (float)maxValue;
- (struct CGColor { } *)textColor;
- (id)values;
- (unsigned int)type;
- (float)minValue;
- (id)position;
- (id)labels;
- (id)label;
- (BOOL)centerLabels;
- (BOOL)isLogarithmic;

@end
