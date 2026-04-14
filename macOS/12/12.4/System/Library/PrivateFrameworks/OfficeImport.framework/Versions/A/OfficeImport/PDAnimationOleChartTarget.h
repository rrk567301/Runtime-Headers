@interface PDAnimationOleChartTarget : PDAnimationShapeTarget {
    int mLevel;
    int mChartSubElementType;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (int)level;
- (void)setLevel:(int)a0;
- (void)setChartSubElementType:(int)a0;
- (int)chartSubElementType;

@end
