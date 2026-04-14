@interface CalExchangeAbstractWriteCalendarItemOperation : CalExchangePersistentOperation

- (void)updateRecurrenceForCalendarItem:(id)a0 withEvent:(id)a1;
- (void)updateRequiredAttendeesForCalendarItem:(id)a0 withEvent:(id)a1;
- (void)updateOptionalAttendeesForCalendarItem:(id)a0 withEvent:(id)a1;
- (void)updateResourcesForCalendarItem:(id)a0 withEvent:(id)a1;
- (void)removeUninvitedAttendeesForEvent:(id)a0;
- (long long)_EWSDayFromCalDay:(unsigned long long)a0;

@end
