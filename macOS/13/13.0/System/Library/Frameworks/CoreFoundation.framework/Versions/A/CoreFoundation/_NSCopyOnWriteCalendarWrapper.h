@class NSCalendar, _NSRefcountedPthreadMutex;

@interface _NSCopyOnWriteCalendarWrapper : NSCalendar {
    NSCalendar *cal;
    _NSRefcountedPthreadMutex *_lock;
    BOOL needsToCopy;
}

+ (id)currentCalendar;

- (void)dealloc;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)timeZone;
- (void)setTimeZone:(id)a0;
- (id)calendarIdentifier;
- (void)setLocale:(id)a0;
- (id)locale;
- (void)setFirstWeekday:(unsigned long long)a0;
- (unsigned long long)firstWeekday;
- (void)setMinimumDaysInFirstWeek:(unsigned long long)a0;
- (unsigned long long)minimumDaysInFirstWeek;
- (id)gregorianStartDate;
- (void)setGregorianStartDate:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })minimumRangeOfUnit:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })maximumRangeOfUnit:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfUnit:(unsigned long long)a0 inUnit:(unsigned long long)a1 forDate:(id)a2;
- (unsigned long long)ordinalityOfUnit:(unsigned long long)a0 inUnit:(unsigned long long)a1 forDate:(id)a2;
- (BOOL)rangeOfUnit:(unsigned long long)a0 startDate:(id *)a1 interval:(double *)a2 forDate:(id)a3;
- (id)dateFromComponents:(id)a0;
- (id)components:(unsigned long long)a0 fromDate:(id)a1;
- (id)dateByAddingComponents:(id)a0 toDate:(id)a1 options:(unsigned long long)a2;
- (id)components:(unsigned long long)a0 fromDate:(id)a1 toDate:(id)a2 options:(unsigned long long)a3;
- (BOOL)nextWeekendStartDate:(out id *)a0 interval:(out double *)a1 options:(unsigned long long)a2 afterDate:(id)a3;
- (BOOL)isDateInWeekend:(id)a0;
- (void)enumerateDatesStartingAfterDate:(id)a0 matchingComponents:(id)a1 options:(unsigned long long)a2 usingBlock:(id /* block */)a3;

@end
