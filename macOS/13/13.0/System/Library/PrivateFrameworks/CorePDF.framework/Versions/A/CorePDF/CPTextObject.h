@interface CPTextObject : CPChunk {
    struct CGPoint { double x; double y; } anchor;
    BOOL metricInfoCalculated;
    float maxFontSize;
    double maxFontLineHeight;
}

- (void)translateObjectYBy:(double)a0;
- (void)clearCachedInfo;
- (void)calculateMetrics;
- (float)maxFontSize;
- (double)maxFontLineHeight;

@end
