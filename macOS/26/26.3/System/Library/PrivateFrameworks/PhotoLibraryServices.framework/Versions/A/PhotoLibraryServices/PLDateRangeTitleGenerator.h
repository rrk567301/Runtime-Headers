@class PLLazyObject, NSLocale;

@interface PLDateRangeTitleGenerator : NSObject {
    PLLazyObject *_lazyRecentDateRangeFormatter;
    PLLazyObject *_lazyDateRangeFormatter;
    PLLazyObject *_lazyYearlessDateRangeFormatter;
    PLLazyObject *_lazyMonthYearWithDelimiterDateRangeFormatter;
    PLLazyObject *_lazyShortMonthYearWithDelimiterDateRangeFormatter;
    PLLazyObject *_lazyShortMonthYearDateRangeFormatter;
    PLLazyObject *_lazyYearDateRangeFormatter;
    NSLocale *_locale;
}

- (id)initWithLocale:(id)a0;
- (id)recentDateRangeFormatter;
- (id)yearDateRangeFormatter;
- (id)newMonthYearWithDelimiterDateRangeFormatter;
- (id)newRecentDateRangeFormatter;
- (id)dateRangeTitleWithStartDate:(id)a0 endDate:(id)a1 category:(unsigned short)a2 kind:(unsigned short)a3 type:(unsigned short)a4;
- (id)shortMonthYearDateRangeFormatter;
- (id)init;
- (id)yearlessDateRangeFormatter;
- (id)newYearlessDateRangeFormatter;
- (id)newShortMonthYearDateRangeFormatter;
- (id)newShortMonthYearWithDelimiterDateRangeFormatter;
- (id)dateRangeFormatter;
- (id)dateRangeTitleWithStartDate:(id)a0 endDate:(id)a1 category:(unsigned short)a2 kind:(unsigned short)a3 type:(unsigned short)a4 options:(unsigned long long)a5;
- (void).cxx_destruct;
- (id)monthYearWithDelimiterDateRangeFormatter;
- (id)newDateRangeFormatter;
- (id)dateRangeFormatterForCategory:(unsigned short)a0 kind:(unsigned short)a1 type:(unsigned short)a2 options:(unsigned long long)a3;
- (id)newYearDateRangeFormatter;
- (id)shortMonthYearWithDelimiterDateRangeFormatter;

@end
