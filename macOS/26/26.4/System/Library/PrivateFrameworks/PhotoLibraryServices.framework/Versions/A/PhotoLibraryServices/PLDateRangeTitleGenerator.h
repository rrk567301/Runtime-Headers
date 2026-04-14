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

- (id)newYearDateRangeFormatter;
- (id)shortMonthYearWithDelimiterDateRangeFormatter;
- (id)newYearlessDateRangeFormatter;
- (id)dateRangeFormatter;
- (id)newDateRangeFormatter;
- (id)newShortMonthYearWithDelimiterDateRangeFormatter;
- (id)newShortMonthYearDateRangeFormatter;
- (id)yearlessDateRangeFormatter;
- (id)shortMonthYearDateRangeFormatter;
- (id)newMonthYearWithDelimiterDateRangeFormatter;
- (id)dateRangeTitleWithStartDate:(id)a0 endDate:(id)a1 category:(unsigned short)a2 kind:(unsigned short)a3 type:(unsigned short)a4 options:(unsigned long long)a5;
- (id)dateRangeFormatterForCategory:(unsigned short)a0 kind:(unsigned short)a1 type:(unsigned short)a2 options:(unsigned long long)a3;
- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (id)recentDateRangeFormatter;
- (id)newRecentDateRangeFormatter;
- (id)monthYearWithDelimiterDateRangeFormatter;
- (id)init;
- (id)yearDateRangeFormatter;
- (id)dateRangeTitleWithStartDate:(id)a0 endDate:(id)a1 category:(unsigned short)a2 kind:(unsigned short)a3 type:(unsigned short)a4;

@end
