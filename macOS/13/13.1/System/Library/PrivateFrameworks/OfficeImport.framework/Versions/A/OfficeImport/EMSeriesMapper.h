@interface EMSeriesMapper : CMMapper

- (id)values;
- (float)offset;
- (struct CGColor { } *)fillColor;
- (struct CGColor { } *)strokeColor;
- (float)strokeWidth;
- (struct CGColor { } *)markerColor;
- (unsigned int)chartType;
- (BOOL)useSecondaryAxis;
- (unsigned int)markerType;
- (float)markerWidth;

@end
