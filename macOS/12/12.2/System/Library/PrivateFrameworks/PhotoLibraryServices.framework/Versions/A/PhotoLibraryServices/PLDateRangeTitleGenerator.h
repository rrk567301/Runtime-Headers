@class PLLazyObject;

@interface PLDateRangeTitleGenerator : NSObject {
    PLLazyObject *_lazyRecentDateRangeFormatter;
    PLLazyObject *_lazyDateRangeFormatter;
    PLLazyObject *_lazyYearlessDateRangeFormatter;
    PLLazyObject *_lazyMonthYearDateRangeFormatter;
    PLLazyObject *_lazyShortMonthYearDateRangeFormatter;
    PLLazyObject *_lazyYearDateRangeFormatter;
}

- (id)init;
- (void).cxx_destruct;
- (id)dateRangeTitleWithStartDate:(id)a0 endDate:(id)a1 category:(unsigned short)a2 kind:(unsigned short)a3 options:(unsigned long long)a4;
- (id)dateRangeTitleWithStartDate:(id)a0 endDate:(id)a1 category:(unsigned short)a2 kind:(unsigned short)a3;
- (id)dateRangeFormatterForCategory:(unsigned short)a0 kind:(unsigned short)a1 options:(unsigned long long)a2;
- (id)newRecentDateRangeFormatter;
- (id)newDateRangeFormatter;
- (id)newYearlessDateRangeFormatter;
- (id)newMonthYearDateRangeFormatter;
- (id)newShortMonthYearDateRangeFormatter;
- (id)newYearDateRangeFormatter;
- (id)recentDateRangeFormatter;
- (id)dateRangeFormatter;
- (id)yearlessDateRangeFormatter;
- (id)monthYearDateRangeFormatter;
- (id)shortMonthYearDateRangeFormatter;
- (id)yearDateRangeFormatter;

@end
