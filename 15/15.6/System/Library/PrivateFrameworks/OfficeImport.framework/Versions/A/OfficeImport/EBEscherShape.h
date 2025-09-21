@class NSData, CHDChart;

@interface EBEscherShape : ESDObject {
    NSData *mChartData;
    char mShowLegend;
    CHDChart *mChart;
}

- (void).cxx_destruct;
- (id)chartData;
- (void)setChartData:(id)a0;
- (id)chart;
- (void)setChart:(id)a0;
- (void)setShowLegend:(char)a0;
- (char)showLegend;

@end
