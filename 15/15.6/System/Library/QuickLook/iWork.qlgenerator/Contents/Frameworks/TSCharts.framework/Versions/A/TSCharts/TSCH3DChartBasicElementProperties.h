@class TSCH3DChartModelEnumerator;

@interface TSCH3DChartBasicElementProperties : TSCH3DChartMutableElementProperties {
    TSCH3DChartModelEnumerator *_enumerator;
}

@property (readonly, nonatomic) struct tvec2<int> { union { int x; int r; int s; } ; union { int y; int g; int t; } ; } size;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)createResources;
- (id)boundsGeometryForSeries:(id)a0 index:(void *)a1;
- (id)geometryForSeries:(id)a0 index:(void *)a1;
- (id)normalsForSeries:(id)a0 index:(void *)a1;
- (void)resetWithEnumerator:(id)a0 layoutSettings:(struct { char x0; char x1; char x2; char x3; char x4; char x5; char x6; char x7; long long x8; unsigned long long x9; })a1;
- (id)texcoordsForSeries:(id)a0 index:(void *)a1;

@end
