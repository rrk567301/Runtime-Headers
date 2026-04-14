@interface CALMonthlyRecurrence : CoreRecurrenceRule

- (int)lastSpecifiedRulePartOrder;
- (void)appendICSStringToString:(id)a0;
- (id)realOccurrencesOnTimeRange:(id)a0 withRecurrenceStart:(id)a1 alwaysIncludeStartDate:(BOOL)a2;
- (BOOL)isEqualToRule:(id)a0 consideringStartDate:(id)a1;
- (id)matchingMonthsOnTimeRangeArray:(id)a0 withRecurrenceStart:(id)a1;
- (BOOL)ruleMatchesDate:(id)a0;
- (id)proposedRuleForMovingFrom:(id)a0 to:(id)a1 changes:(id)a2;
- (id)acceptableMoveToTimeRangeForDate:(id)a0;

@end
