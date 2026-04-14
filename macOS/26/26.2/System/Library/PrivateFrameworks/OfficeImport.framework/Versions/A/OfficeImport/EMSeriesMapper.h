@interface EMSeriesMapper : CMMapper

- (float)strokeWidth;
- (struct CGColor { } *)fillColor;
- (struct CGColor { } *)strokeColor;
- (id)values;
- (float)offset;
- (float)markerWidth;
- (unsigned int)markerType;
- (unsigned int)chartType;
- (struct CGColor { } *)markerColor;
- (BOOL)useSecondaryAxis;

@end
