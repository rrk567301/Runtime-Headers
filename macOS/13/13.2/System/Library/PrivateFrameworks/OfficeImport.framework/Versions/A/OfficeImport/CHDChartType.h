@class EDCollection, CHDChart, CHDDataLabel, CHDSeriesCollection;

@interface CHDChartType : NSObject {
    CHDChart *mChart;
    EDCollection *mAxisIds;
    CHDSeriesCollection *mSeries;
    CHDDataLabel *mDefaultDataLabel;
    BOOL mVaryColors;
}

+ (BOOL)is3DType;
+ (id)chartTypeWithChart:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isHorizontal;
- (id)axes;
- (id)chart;
- (id)initWithChart:(id)a0;
- (int)defaultLabelPosition;
- (unsigned long long)seriesCount;
- (unsigned long long)categoryCount;
- (id)axisIds;
- (BOOL)isPlotedOnSecondaryAxis;
- (void)switchAxes:(id)a0;
- (id)axisForClass:(Class)a0;
- (id)seriesCollection;
- (void)setSeriesCollection:(id)a0;
- (BOOL)isVaryColors;
- (void)setVaryColors:(BOOL)a0;
- (id)defaultTitleWithResources:(id)a0;
- (id)defaultDataLabel;
- (void)setDefaultDataLabel:(id)a0;
- (id)contentFormat;

@end
