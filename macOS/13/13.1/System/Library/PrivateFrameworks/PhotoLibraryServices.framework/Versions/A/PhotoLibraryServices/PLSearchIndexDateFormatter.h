@class PLDateRangeFormatter, NSDateFormatter, NSString, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface PLSearchIndexDateFormatter : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSDateFormatter *_dateFormatter;
    PLDateRangeFormatter *_dateRangeFormatter;
    NSString *_yearFormat;
    NSString *_monthFormat;
    NSString *_displayFormat;
    NSString *_parseFormat;
    NSArray *_monthSymbols;
    BOOL _didSetupLocaleAndFormats;
}

+ (id)yearFormatForLocale:(id)a0;
+ (id)monthFormatForLocale:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_arrangedMonthSymbols;
- (void)_inqSetupDateFormatter;
- (void)_inqUpdateDateFormat:(id)a0;
- (id)localizedSeasonNameFromDate:(id)a0;
- (id)localizedMonthStringsFromDate:(id)a0;
- (id)newLocalizedComponentsFromDate:(id)a0 includeMonth:(BOOL)a1;
- (id)_inqNewLocalizedStringFromDate:(id)a0;
- (id)newLocalizedStringFromDate:(id)a0;
- (id)newLocalizedStringFromYear:(id)a0 month:(id)a1;
- (id)formattedDateRangeWithStartDate:(id)a0 endDate:(id)a1;

@end
