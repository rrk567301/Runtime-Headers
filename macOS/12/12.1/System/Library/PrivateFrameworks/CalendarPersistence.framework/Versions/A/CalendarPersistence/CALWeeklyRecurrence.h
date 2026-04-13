@interface CALWeeklyRecurrence : CoreRecurrenceRule

- (int)lastSpecifiedRulePartOrder;
- (void)appendICSStringToString:(id)a0;
- (BOOL)fastPathEligible;
- (unsigned long long)_recurrenceUnitsToJumpBetween:(id)a0 rangeStart:(id)a1 inCalendar:(id)a2;
- (id)_fastPathDeltaComponentsWithCount:(unsigned long long)a0;
- (id)realOccurrencesOnTimeRange:(id)a0 withRecurrenceStart:(id)a1 alwaysIncludeStartDate:(BOOL)a2;
- (BOOL)isEqualToRule:(id)a0 consideringStartDate:(id)a1;
- (BOOL)ruleMatchesDate:(id)a0;
- (id)proposedRuleForMovingFrom:(id)a0 to:(id)a1 changes:(id)a2;
- (id)acceptableMoveToTimeRangeForDate:(id)a0;
- (id)matchingWeeksOnTimeRangeArray:(id)a0 withRecurrenceStart:(id)a1;

@end
