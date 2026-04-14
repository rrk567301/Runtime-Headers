@class NSMutableArray, SearchUIChartLabelInfo;

@interface SearchUIChartLabelInfoManager : NSObject {
    SearchUIChartLabelInfo *_yAxisLabelInfo;
    NSMutableArray *_monthLabelInfoArrays;
    NSMutableArray *_integerLabelInfoArray;
    BOOL _use24hrTime;
}

+ (id)sharedLabelInfoManager;
+ (void)clearSharedManager;
+ (id)chartLabelFont;
+ (struct __CFString { } *)_CFDateFormatterPropertyForMonthLabelLength:(long long)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)resetLocale;
- (id)labelInfoWithString:(id)a0;
- (id)labelInfoForYAxis;
- (id)labelInfoWithUnsignedInteger:(unsigned long long)a0;
- (BOOL)use24hrTime;
- (id)monthLabelInfoArrayForLabelLength:(long long)a0;

@end
