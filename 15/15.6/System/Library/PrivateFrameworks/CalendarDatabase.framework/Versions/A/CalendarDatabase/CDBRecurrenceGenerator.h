@interface CDBRecurrenceGenerator : CalRecurrenceGenerator

- (id)_copyOccurrenceDatesWithBirthdayEvent:(void *)a0 startDate:(id)a1 endDate:(id)a2 timeZone:(id)a3 limit:(long long)a4 locked:(char)a5;
- (void)_prepareForCalRecurrence:(void *)a0 locked:(char)a1;
- (void)_setupForCalEvent:(void *)a0 locked:(char)a1;
- (id)computeRecurrenceEndDateForCalEvent:(void *)a0 recurrenceRule:(void *)a1 locked:(char)a2;
- (id)copyOccurrenceDatesWithCalEvent:(void *)a0 startDate:(id)a1 endDate:(id)a2 timeZone:(id)a3 includeExtraOccurrencesPastEndDate:(char)a4 locked:(char)a5;
- (id)copyOccurrenceDatesWithCalEvent:(void *)a0 startDate:(id)a1 endDate:(id)a2 timeZone:(id)a3 limit:(long long)a4 includeExtraOccurrencesPastEndDate:(char)a5 locked:(char)a6;
- (id)copyOccurrenceDatesWithCalEvent:(void *)a0 startDate:(id)a1 endDate:(id)a2 timeZone:(id)a3 limit:(long long)a4 locked:(char)a5;
- (id)copyOccurrenceDatesWithInitialDate:(id)a0 calRecurrences:(id)a1 rangeStart:(id)a2 rangeEnd:(id)a3 timeZone:(id)a4;
- (id)nextOccurrenceDateWithCalRecurrences:(id)a0 exceptionDates:(id)a1 initialDate:(id)a2 afterDate:(id)a3;

@end
