@class NSIndexSet, NSData, TSCHChartSeries;

@interface TSCHPointArrayCache : NSObject {
    TSCHChartSeries *_series;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _areaFrame;
    NSIndexSet *_groupIndexSet;
    char _cull;
    NSData *_data;
}

+ (void)clearCache;
+ (struct { struct CGPoint { double x0; double x1; } x0; double x1; char x2; unsigned long long x3; } *)cachedPointsForSeries:(id)a0 inAreaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 groupIndexSet:(id)a2 cullBadPoints:(char)a3 outCount:(unsigned long long *)a4;
+ (id)p_getCacheCreate:(char)a0;
+ (void)setCachedPointsForSeries:(id)a0 inAreaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 groupIndexSet:(id)a2 cullBadPoints:(char)a3 points:(struct { struct CGPoint { double x0; double x1; } x0; double x1; char x2; unsigned long long x3; } *)a4 count:(unsigned long long)a5;

- (void).cxx_destruct;
- (char)matchesSeries:(id)a0 areaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 groupIndexSet:(id)a2 cull:(char)a3;

@end
