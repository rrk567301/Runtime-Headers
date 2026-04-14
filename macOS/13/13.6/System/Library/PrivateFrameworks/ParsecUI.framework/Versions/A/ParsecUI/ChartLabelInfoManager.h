@class ChartLabelInfo, NSMutableArray;

@interface ChartLabelInfoManager : NSObject {
    ChartLabelInfo *_yAxisLabelInfo;
    NSMutableArray *_monthLabelInfoArrays;
    NSMutableArray *_integerLabelInfoArray;
    BOOL _use24hrTime;
}

+ (struct __CFString { } *)_CFDateFormatterPropertyForMonthLabelLength:(long long)a0;
+ (id)chartLabelFont;
+ (void)clearSharedManager;
+ (id)sharedLabelInfoManager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)labelInfoForYAxis;
- (id)labelInfoWithString:(id)a0;
- (id)labelInfoWithUnsignedInteger:(unsigned long long)a0;
- (id)monthLabelInfoArrayForLabelLength:(long long)a0;
- (void)resetLocale;
- (BOOL)use24hrTime;

@end
