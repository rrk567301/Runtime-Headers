@interface EMSeriesMapper : CMMapper

- (float)strokeWidth;
- (struct CGColor { } *)strokeColor;
- (float)offset;
- (struct CGColor { } *)fillColor;
- (float)markerWidth;
- (id)values;
- (unsigned int)markerType;
- (unsigned int)chartType;
- (struct CGColor { } *)markerColor;
- (BOOL)useSecondaryAxis;

@end
