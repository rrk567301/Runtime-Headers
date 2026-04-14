@interface PDAnimationOleChartTarget : PDAnimationShapeTarget {
    int mLevel;
    int mChartSubElementType;
}

- (int)level;
- (BOOL)isEqual:(id)a0;
- (void)setLevel:(int)a0;
- (unsigned long long)hash;
- (id)init;
- (int)chartSubElementType;
- (void)setChartSubElementType:(int)a0;

@end
