@interface CALDailyRecurrence : CoreRecurrenceRule

- (int)lastSpecifiedRulePartOrder;
- (id)matchingDaysOnTimeRangeArray:(id)a0 withRecurrenceStart:(id)a1;
- (void)appendICSStringToString:(id)a0;
- (BOOL)fastPathEligible;
- (unsigned long long)_recurrenceUnitsToJumpBetween:(id)a0 rangeStart:(id)a1 inCalendar:(id)a2;
- (id)_fastPathDeltaComponentsWithCount:(unsigned long long)a0;
- (id)realOccurrencesOnTimeRange:(id)a0 withRecurrenceStart:(id)a1 alwaysIncludeStartDate:(BOOL)a2;
- (BOOL)isEqualToRule:(id)a0 consideringStartDate:(id)a1;

@end
