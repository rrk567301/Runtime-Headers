@class EDCollection, CHDChart, CHDDataLabel, CHDSeriesCollection;

@interface CHDChartType : NSObject {
    CHDChart *mChart;
    EDCollection *mAxisIds;
    CHDSeriesCollection *mSeries;
    CHDDataLabel *mDefaultDataLabel;
    BOOL mVaryColors;
}

+ (id)chartTypeWithChart:(id)a0;
+ (BOOL)is3DType;

- (id)description;
- (unsigned long long)categoryCount;
- (void).cxx_destruct;
- (BOOL)isHorizontal;
- (id)axes;
- (id)axisIds;
- (id)axisForClass:(Class)a0;
- (id)chart;
- (id)contentFormat;
- (id)defaultDataLabel;
- (int)defaultLabelPosition;
- (id)defaultTitleWithResources:(id)a0;
- (id)initWithChart:(id)a0;
- (BOOL)isPlotedOnSecondaryAxis;
- (BOOL)isVaryColors;
- (id)seriesCollection;
- (unsigned long long)seriesCount;
- (void)setDefaultDataLabel:(id)a0;
- (void)setSeriesCollection:(id)a0;
- (void)setVaryColors:(BOOL)a0;
- (void)switchAxes:(id)a0;

@end
