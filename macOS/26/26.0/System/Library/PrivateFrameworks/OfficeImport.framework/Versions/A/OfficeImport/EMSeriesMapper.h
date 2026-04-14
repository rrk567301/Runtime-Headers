@interface EMSeriesMapper : CMMapper

- (struct CGColor { } *)fillColor;
- (struct CGColor { } *)strokeColor;
- (float)strokeWidth;
- (id)values;
- (float)offset;
- (float)markerWidth;
- (unsigned int)markerType;
- (unsigned int)chartType;
- (struct CGColor { } *)markerColor;
- (BOOL)useSecondaryAxis;

@end
