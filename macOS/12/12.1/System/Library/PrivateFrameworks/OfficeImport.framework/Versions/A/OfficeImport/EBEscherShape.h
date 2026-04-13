@class NSData, CHDChart;

@interface EBEscherShape : ESDObject {
    NSData *mChartData;
    BOOL mShowLegend;
    CHDChart *mChart;
}

- (void).cxx_destruct;
- (id)chartData;
- (void)setChartData:(id)a0;
- (void)setChart:(id)a0;
- (id)chart;
- (BOOL)showLegend;
- (void)setShowLegend:(BOOL)a0;

@end
