@interface PDAnimationOleChartTarget : PDAnimationShapeTarget {
    int mLevel;
    int mChartSubElementType;
}

- (int)level;
- (void)setLevel:(int)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (int)chartSubElementType;
- (void)setChartSubElementType:(int)a0;

@end
