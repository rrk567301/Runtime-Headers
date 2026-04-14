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

- (id)yearlessDateRangeFormatter;
- (id)shortMonthYearDateRangeFormatter;
- (id)dateRangeTitleWithStartDate:(id)a0 endDate:(id)a1 category:(unsigned short)a2 kind:(unsigned short)a3 type:(unsigned short)a4 options:(unsigned long long)a5;
- (id)initWithLocale:(id)a0;
- (id)dateRangeFormatterForCategory:(unsigned short)a0 kind:(unsigned short)a1 type:(unsigned short)a2 options:(unsigned long long)a3;
- (id)shortMonthYearWithDelimiterDateRangeFormatter;
- (id)monthYearWithDelimiterDateRangeFormatter;
- (void).cxx_destruct;
- (id)newMonthYearWithDelimiterDateRangeFormatter;
- (id)newShortMonthYearWithDelimiterDateRangeFormatter;
- (id)recentDateRangeFormatter;
- (id)yearDateRangeFormatter;
- (id)newRecentDateRangeFormatter;
- (id)newYearlessDateRangeFormatter;
- (id)newDateRangeFormatter;
- (id)dateRangeTitleWithStartDate:(id)a0 endDate:(id)a1 category:(unsigned short)a2 kind:(unsigned short)a3 type:(unsigned short)a4;
- (id)dateRangeFormatter;
- (id)init;
- (id)newShortMonthYearDateRangeFormatter;
- (id)newYearDateRangeFormatter;

@end
