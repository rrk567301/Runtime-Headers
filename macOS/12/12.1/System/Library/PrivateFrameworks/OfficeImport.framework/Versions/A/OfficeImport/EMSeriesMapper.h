@interface EMSeriesMapper : CMMapper

- (id)values;
- (float)offset;
- (struct CGColor { } *)fillColor;
- (float)strokeWidth;
- (struct CGColor { } *)strokeColor;
- (struct CGColor { } *)markerColor;
- (unsigned int)chartType;
- (BOOL)useSecondaryAxis;
- (unsigned int)markerType;
- (float)markerWidth;

@end
