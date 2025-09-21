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
- (id)shortMonthYearWithDelimiterDateRangeFormatter;
- (id)yearlessDateRangeFormatter;
- (id)newShortMonthYearWithDelimiterDateRangeFormatter;
- (id)dateRangeTitleWithStartDate:(id)a0 endDate:(id)a1 category:(unsigned short)a2 kind:(unsigned short)a3 type:(unsigned short)a4;
- (id)dateRangeFormatter;
- (id)newRecentDateRangeFormatter;
- (id)dateRangeTitleWithStartDate:(id)a0 endDate:(id)a1 category:(unsigned short)a2 kind:(unsigned short)a3 type:(unsigned short)a4 options:(unsigned long long)a5;
- (id)recentDateRangeFormatter;
- (id)newYearlessDateRangeFormatter;
- (id)init;
- (id)newYearDateRangeFormatter;
- (id)newDateRangeFormatter;
- (id)shortMonthYearDateRangeFormatter;
- (id)newShortMonthYearDateRangeFormatter;
- (id)monthYearWithDelimiterDateRangeFormatter;
- (id)yearDateRangeFormatter;
- (id)dateRangeFormatterForCategory:(unsigned short)a0 kind:(unsigned short)a1 type:(unsigned short)a2 options:(unsigned long long)a3;
- (id)newMonthYearWithDelimiterDateRangeFormatter;
- (void).cxx_destruct;

@end
