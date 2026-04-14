@interface EMSeriesMapper : CMMapper

- (struct CGColor { } *)fillColor;
- (float)offset;
- (struct CGColor { } *)strokeColor;
- (float)strokeWidth;
- (id)values;
- (float)markerWidth;
- (unsigned int)markerType;
- (unsigned int)chartType;
- (struct CGColor { } *)markerColor;
- (BOOL)useSecondaryAxis;

@end
