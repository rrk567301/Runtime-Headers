@class NSString, CHDChartType, CHDData, OADGraphicProperties, CHDFormula, CHDErrorBar, CHDDataLabel, CHDDataValue, CHDChart, EDKeyedCollection, EDCollection;

@interface CHDSeries : NSObject <EDKeyedObject> {
    CHDChart *mChart;
    CHDChartType *mChartType;
    unsigned long long mOrder;
    unsigned long long mStyleIndex;
    CHDFormula *mName;
    CHDDataValue *mLastCachedName;
    CHDData *mValueData;
    CHDData *mCategoryData;
    EDKeyedCollection *mDataValuePropertiesCollection;
    EDCollection *mTrendlinesCollection;
    CHDErrorBar *mErrorBarX;
    CHDErrorBar *mErrorBarY;
    CHDDataLabel *mDefaultDataLabel;
    OADGraphicProperties *mGraphicProperties;
    BOOL mDateTimeFormattingFlag;
    BOOL mHiddenFlag;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)seriesWithChart:(id)a0;

- (id)name;
- (BOOL)isEmpty;
- (BOOL)isHidden;
- (void).cxx_destruct;
- (void)setName:(id)a0;
- (long long)key;
- (unsigned long long)order;
- (id)valueData;
- (void)setOrder:(unsigned long long)a0;
- (id)graphicProperties;
- (id)shallowCopy;
- (id)chart;
- (id)initWithChart:(id)a0;
- (void)setGraphicProperties:(id)a0;
- (void)setLastCachedName:(id)a0;
- (BOOL)isDateTimeFormattingFlag;
- (void)setDateTimeFormattingFlag:(BOOL)a0;
- (id)defaultDataLabel;
- (id)dataValuePropertiesCollection;
- (void)setStyleIndex:(unsigned long long)a0;
- (void)setDefaultDataLabel:(id)a0;
- (void)setChartType:(id)a0;
- (void)setErrorBarYAxis:(id)a0;
- (void)setErrorBarXAxis:(id)a0;
- (void)clearBackPointers;
- (id)chartType;
- (unsigned long long)styleIndex;
- (id)lastCachedName;
- (void)setValueData:(id)a0;
- (id)categoryData;
- (void)setCategoryData:(id)a0;
- (unsigned long long)categoryCount;
- (void)setDataValuePropertiesCollection:(id)a0;
- (id)trendlineCollection;
- (void)setTrendlineCollection:(id)a0;
- (BOOL)hasTrendlines;
- (void)setErrorBar:(id)a0;
- (BOOL)hasErrorBars;
- (id)errorBarXAxis;
- (id)errorBarYAxis;
- (void)setHiddenFlag:(BOOL)a0;
- (id)defaultSeriesNameForIndex:(unsigned long long)a0;

@end
