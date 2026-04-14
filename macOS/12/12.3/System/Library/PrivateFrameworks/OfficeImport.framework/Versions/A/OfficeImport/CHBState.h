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
- (void)deleteXlChartDataSeriesCollection;
- (void *)xlChartDataSeriesAtIndex:(int)a0;
- (void)readAndCacheXlChartDataSeries;
- (BOOL)hasPrimaryMixedArea;
- (BOOL)hasSecondaryMixedArea;
- (BOOL)hasPrimaryMixedColumn;
- (BOOL)hasSecondaryMixedColumn;
- (BOOL)hasPrimaryMixedLine;
- (void)setXlCurrentSeriesIndex:(int)a0;
- (void *)xlCurrentChartDataSeries;
- (int)xlCurrentChartDataSeriesIndex;
- (int)xlSeriesCount;
- (void)setHasPrimaryMixedArea:(BOOL)a0;
- (void)setHasPrimaryMixedColumn:(BOOL)a0;
- (void)setHasPrimaryMixedLine:(BOOL)a0;
- (void)setHasSecondaryMixedArea:(BOOL)a0;
- (void)setHasSecondaryMixedColumn:(BOOL)a0;
- (BOOL)hasSecondaryMixedLine;
- (void)setHasSecondaryMixedLine:(BOOL)a0;
- (BOOL)isMixedChart;
- (unsigned int)chartGroupIndexForType:(int)a0 isForPrimary:(BOOL)a1;

@end
