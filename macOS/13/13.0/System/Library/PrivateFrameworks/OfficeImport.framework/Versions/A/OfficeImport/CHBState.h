@class CHDChart;

@interface CHBState : NSObject {
    CHDChart *mChart;
    struct __CFArray { } *mXlChartDataSeriesCollection;
    int mXlSeriesCount;
    int mXlCurrentSeriesIndex;
    BOOL mHasPrimaryMixedArea;
    BOOL mHasPrimaryMixedColumn;
    BOOL mHasPrimaryMixedLine;
    BOOL mHasSecondaryMixedArea;
    BOOL mHasSecondaryMixedColumn;
    BOOL mHasSecondaryMixedLine;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)resources;
- (void)setChart:(id)a0;
- (id)chart;
- (id)workbook;
- (void *)xlChartDataSeriesAtIndex:(int)a0;
- (void)setXlCurrentSeriesIndex:(int)a0;
- (void *)xlCurrentChartDataSeries;
- (int)xlCurrentChartDataSeriesIndex;
- (int)xlSeriesCount;
- (void)readAndCacheXlChartDataSeries;
- (void)deleteXlChartDataSeriesCollection;
- (BOOL)hasPrimaryMixedArea;
- (void)setHasPrimaryMixedArea:(BOOL)a0;
- (BOOL)hasPrimaryMixedColumn;
- (void)setHasPrimaryMixedColumn:(BOOL)a0;
- (BOOL)hasPrimaryMixedLine;
- (void)setHasPrimaryMixedLine:(BOOL)a0;
- (BOOL)hasSecondaryMixedArea;
- (void)setHasSecondaryMixedArea:(BOOL)a0;
- (BOOL)hasSecondaryMixedColumn;
- (void)setHasSecondaryMixedColumn:(BOOL)a0;
- (BOOL)hasSecondaryMixedLine;
- (void)setHasSecondaryMixedLine:(BOOL)a0;
- (BOOL)isMixedChart;
- (unsigned int)chartGroupIndexForType:(int)a0 isForPrimary:(BOOL)a1;

@end
