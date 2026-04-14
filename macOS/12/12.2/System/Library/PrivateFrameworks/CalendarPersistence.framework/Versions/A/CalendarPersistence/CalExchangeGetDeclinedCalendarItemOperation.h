@interface CalExchangeGetDeclinedCalendarItemOperation : CalExchangeGetCalendarItemOperation

- (id)debugTitle;
- (BOOL)shouldInsertCalendarItem:(id)a0 existsEventWithSameSharedUID:(BOOL)a1 forPrincipal:(id)a2;
- (BOOL)_isDeclinedByMe:(id)a0 forCalendarItem:(id)a1 forPrincipal:(id)a2;

@end
