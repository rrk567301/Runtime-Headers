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

- (id)newShortMonthYearWithDelimiterDateRangeFormatter;
- (id)dateRangeFormatter;
- (id)shortMonthYearDateRangeFormatter;
- (id)yearlessDateRangeFormatter;
- (id)dateRangeTitleWithStartDate:(id)a0 endDate:(id)a1 category:(unsigned short)a2 kind:(unsigned short)a3 type:(unsigned short)a4 options:(unsigned long long)a5;
- (id)newMonthYearWithDelimiterDateRangeFormatter;
- (id)shortMonthYearWithDelimiterDateRangeFormatter;
- (id)yearDateRangeFormatter;
- (id)initWithLocale:(id)a0;
- (id)newRecentDateRangeFormatter;
- (id)recentDateRangeFormatter;
- (id)monthYearWithDelimiterDateRangeFormatter;
- (void).cxx_destruct;
- (id)newShortMonthYearDateRangeFormatter;
- (id)dateRangeFormatterForCategory:(unsigned short)a0 kind:(unsigned short)a1 type:(unsigned short)a2 options:(unsigned long long)a3;
- (id)newDateRangeFormatter;
- (id)newYearlessDateRangeFormatter;
- (id)dateRangeTitleWithStartDate:(id)a0 endDate:(id)a1 category:(unsigned short)a2 kind:(unsigned short)a3 type:(unsigned short)a4;
- (id)newYearDateRangeFormatter;
- (id)init;

@end
