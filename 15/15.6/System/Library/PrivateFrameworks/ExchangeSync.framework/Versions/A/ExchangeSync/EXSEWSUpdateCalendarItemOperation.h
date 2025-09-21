@interface EXSEWSUpdateCalendarItemOperation : EXSEWSOperation

@property (nonatomic) char attendeeChangesOccurred;
@property (nonatomic) char wasOrganizedByUser;
@property (nonatomic) char forceNotification;

- (id)initWithProtocol:(id)a0;
- (char)_areAttendeesChangedInChangeItem:(id)a0;
- (id)_buildItemSettersForCalendarChangeItem:(id)a0;
- (char)_changesShouldBeSentToAllAttendeesForChangeItem:(id)a0;
- (id)_nonOrganizerItemSettersForCalendarChangeItem:(id)a0;
- (id)buildAttendeeSettersForChangeItem:(id)a0 withCurrentSetters:(id)a1;
- (char)executeWithChangeItem:(id)a0 error:(id *)a1;

@end
