@interface EKCalendarEventInvitationNotification : EKCalendarNotification

@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) BOOL isLocationDecline;
@property (readonly, nonatomic) BOOL isVirtual;

+ (id)conflictsForNotifications:(id)a0;
+ (void)clearCachedConflictsForNotifications:(id)a0;

- (long long)type;
- (id)phoneNumber;
- (id)emailAddress;
- (BOOL)isInvitation;
- (BOOL)needsReply;
- (unsigned long long)supportedActions;
- (BOOL)couldBeJunk;
- (unsigned long long)_attendeeResponsesOfType:(int)a0;
- (id)respondingAttendeeComment;
- (BOOL)supportsConflictScanning;
- (id)sendersEmail;
- (id)sendersPhoneNumber;
- (id)initWithRelatedEvent:(id)a0;
- (BOOL)isForReReply;
- (id)respondingAttendee;
- (unsigned long long)attendeeAccepts;
- (unsigned long long)attendeeDeclines;
- (unsigned long long)attendeeComments;
- (id)conflicts;

@end
