@interface EXSEWSUpdateCalendarItemOperation : EXSEWSOperation

@property BOOL attendeeChangesOccurred;

+ (id)buildItemSettersForCalendarChangeItem:(id)a0;

- (id)initWithProtocol:(id)a0;
- (BOOL)executeWithChangeItem:(id)a0 error:(id *)a1;
- (id)buildAttendeeSettersForChangeItem:(id)a0 withCurrentSetters:(id)a1;

@end
