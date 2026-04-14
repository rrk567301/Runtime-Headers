@class NSTimeZone, NSCalendar, NSLocale, NSDate;

@interface _NSAutoCalendar : NSCalendar {
    NSCalendar *cal;
    NSLocale *changedLocale;
    NSTimeZone *changedTimeZone;
    unsigned long long changedFirstWeekday;
    unsigned long long changedMinimumDaysinFirstWeek;
    NSDate *changedGregorianStartDate;
    unsigned long long combinedNoteCount;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (id)_init;
- (id)calendarIdentifier;
- (Class)classForCoder;
- (id)components:(unsigned long long)a0 fromDate:(id)a1;
- (id)components:(unsigned long long)a0 fromDate:(id)a1 toDate:(id)a2 options:(unsigned long long)a3;
- (id)dateByAddingComponents:(id)a0 toDate:(id)a1 options:(unsigned long long)a2;
- (id)dateFromComponents:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)enumerateDatesStartingAfterDate:(id)a0 matchingComponents:(id)a1 options:(unsigned long long)a2 usingBlock:(id /* block */)a3;
- (unsigned long long)firstWeekday;
- (id)gregorianStartDate;
- (id)initWithCalendarIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isDateInWeekend:(id)a0;
- (id)locale;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })maximumRangeOfUnit:(unsigned long long)a0;
- (unsigned long long)minimumDaysInFirstWeek;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })minimumRangeOfUnit:(unsigned long long)a0;
- (BOOL)nextWeekendStartDate:(out id *)a0 interval:(out double *)a1 options:(unsigned long long)a2 afterDate:(id)a3;
- (unsigned long long)ordinalityOfUnit:(unsigned long long)a0 inUnit:(unsigned long long)a1 forDate:(id)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfUnit:(unsigned long long)a0 inUnit:(unsigned long long)a1 forDate:(id)a2;
- (BOOL)rangeOfUnit:(unsigned long long)a0 startDate:(id *)a1 interval:(double *)a2 forDate:(id)a3;
- (void)setFirstWeekday:(unsigned long long)a0;
- (void)setGregorianStartDate:(id)a0;
- (void)setLocale:(id)a0;
- (void)setMinimumDaysInFirstWeek:(unsigned long long)a0;
- (void)setTimeZone:(id)a0;
- (id)timeZone;
- (void)_update;

@end
