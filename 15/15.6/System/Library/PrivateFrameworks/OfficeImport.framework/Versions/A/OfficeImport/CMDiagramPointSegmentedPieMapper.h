@interface CMDiagramPointSegmentedPieMapper : CMDiagramPointMapper {
    double mStartAngle;
    double mStopAngle;
    char mDrawArrows;
    unsigned long long mSegmentIndex;
    unsigned long long mSegmentCount;
}

- (void)setSegmentCount:(unsigned long long)a0;
- (void)setStartAngle:(double)a0;
- (id)_arrowFillWithState:(id)a0;
- (void)mapAt:(id)a0 withState:(id)a1;
- (void)setDrawArrows:(char)a0;
- (void)setSegmentIndex:(unsigned long long)a0;
- (void)setStopAngle:(double)a0;
- (id)transformPresentationName;

@end
