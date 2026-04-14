@interface EMSeriesMapper : CMMapper

- (struct CGColor { } *)fillColor;
- (struct CGColor { } *)strokeColor;
- (float)markerWidth;
- (id)values;
- (float)offset;
- (float)strokeWidth;
- (unsigned int)markerType;
- (unsigned int)chartType;
- (struct CGColor { } *)markerColor;
- (BOOL)useSecondaryAxis;

@end
