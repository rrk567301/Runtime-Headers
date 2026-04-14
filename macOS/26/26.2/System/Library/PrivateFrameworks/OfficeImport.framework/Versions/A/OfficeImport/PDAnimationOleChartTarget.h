@interface PDAnimationOleChartTarget : PDAnimationShapeTarget {
    int mLevel;
    int mChartSubElementType;
}

- (void)setLevel:(int)a0;
- (int)level;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (int)chartSubElementType;
- (void)setChartSubElementType:(int)a0;

@end
