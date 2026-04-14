@interface PDAnimationOleChartTarget : PDAnimationShapeTarget {
    int mLevel;
    int mChartSubElementType;
}

- (int)level;
- (void)setLevel:(int)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (int)chartSubElementType;
- (void)setChartSubElementType:(int)a0;

@end
