@interface TSCHChartTypeDonut3D : TSCH3DChartType

- (id)init;
- (id)valueLabelPositioner;
- (id)categoryLabelPositioner;
- (id)userInterfaceName;
- (id)defaultSeriesType:(unsigned long long)a0;
- (BOOL)supportsGroupedShadows;
- (BOOL)supportsBevels;
- (id)imageWithPreset:(id)a0 target:(int)a1 imageSize:(struct CGSize { double x0; double x1; })a2 imageScale:(double)a3 swatchFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 documentRoot:(id)a5 shouldCache:(BOOL *)a6;
- (BOOL)approximatesTitleAccommodationUsingLegendSize;
- (long long)userInterfaceTag;

@end
