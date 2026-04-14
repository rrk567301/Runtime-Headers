@class NSMutableArray;

@interface OADCustomShapeGeometry : OADShapeGeometry {
    void *mGeometryCoordSpace;
    void *mLimo;
    NSMutableArray *mFormulas;
    NSMutableArray *mTextBodyRects;
    NSMutableArray *mPaths;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (int)type;
- (unsigned long long)pathCount;
- (void)addPath:(id)a0;
- (id)pathAtIndex:(unsigned long long)a0;
- (struct CsRect<int> { int x0[4]; })geometryCoordSpace;
- (void)setGeometryCoordSpace:(struct CsRect<int> { int x0[4]; })a0;
- (void)setLimo:(struct CsPoint<int> { int x0[2]; })a0;
- (unsigned long long)formulaCount;
- (id)formulaAtIndex:(unsigned long long)a0;
- (void)addFormula:(id)a0;
- (unsigned long long)textBodyRectCount;
- (id)textBodyRectAtIndex:(unsigned long long)a0;
- (void)addTextBodyRect:(id)a0;
- (id)equivalentCustomGeometry;
- (struct CsPoint<int> { int x0[2]; })limo;

@end
