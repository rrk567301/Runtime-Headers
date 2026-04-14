@interface PDAnimationOleChartTarget : PDAnimationShapeTarget {
    int mLevel;
    int mChartSubElementType;
}

- (unsigned long long)hash;
- (int)level;
- (BOOL)isEqual:(id)a0;
- (void)setLevel:(int)a0;
- (id)init;
- (int)chartSubElementType;
- (void)setChartSubElementType:(int)a0;

@end
