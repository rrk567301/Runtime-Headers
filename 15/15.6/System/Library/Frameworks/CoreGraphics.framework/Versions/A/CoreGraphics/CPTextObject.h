@interface CPTextObject : CPChunk {
    struct CGPoint { double x; double y; } anchor;
    char metricInfoCalculated;
    float maxFontSize;
    double maxFontLineHeight;
}

- (void)clearCachedInfo;
- (void)calculateMetrics;
- (double)maxFontLineHeight;
- (float)maxFontSize;
- (void)translateObjectYBy:(double)a0;

@end
