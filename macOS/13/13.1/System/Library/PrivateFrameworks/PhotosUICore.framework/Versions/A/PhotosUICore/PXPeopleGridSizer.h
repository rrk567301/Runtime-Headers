@interface PXPeopleGridSizer : NSObject

+ (double)marginForGridClass:(long long)a0 width:(double)a1;
+ (struct CGSize { double x0; double x1; })cellSizeForGridClass:(long long)a0 width:(double)a1;
+ (unsigned long long)numberOfColumnsForGridClass:(long long)a0 width:(double)a1;
+ (id)_gridCColumnInterpolator;
+ (id)_gridCMarginInterpolator;
+ (id)_gridCGutterInterpolator;

@end
