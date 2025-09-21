@class NSDate;

@interface EKAttendee : EKParticipant

@property (readonly, nonatomic) int statusRaw;
@property (nonatomic) long long participantRole;
@property (nonatomic) long long participantStatus;
@property (nonatomic) long long participantType;
@property (readonly, nonatomic) NSDate *lastModifiedParticipationStatus;
@property (readonly, nonatomic) char rsvpRequested;
@property (nonatomic) long long pendingStatus;
@property (nonatomic) char commentChanged;
@property (nonatomic) char statusChanged;
@property (nonatomic) char proposedStartDateChanged;
@property (nonatomic) int proposedStartDateStatus;

+ (int)_calAttendeeStatusFromEKParticipantStatus:(long long)a0;
+ (long long)_ekParticipantStatusFromCalAttendeeStatus:(int)a0;
+ (id)attendeeWithEmailAddress:(id)a0 name:(id)a1;
+ (id)attendeeWithName:(id)a0 emailAddress:(id)a1;
+ (id)attendeeWithName:(id)a0 emailAddress:(id)a1 address:(id)a2;
+ (id)attendeeWithName:(id)a0 emailAddress:(id)a1 phoneNumber:(id)a2 url:(id)a3;
+ (id)attendeeWithName:(id)a0 phoneNumber:(id)a1;
+ (id)attendeeWithName:(id)a0 url:(id)a1;
+ (Class)frozenClass;
+ (id)knownSingleValueKeysForComparison;

- (id)description;
- (unsigned int)flags;
- (void)setFlags:(unsigned int)a0;
- (id)owner;
- (char)isCurrentUser;
- (void)_setFlag:(unsigned int)a0 value:(char)a1;
- (char)_isParticipantStatusDirty;
- (char)_valueForFlag:(unsigned int)a0;
- (char)hasProposedStartDate;
- (void)markAsForward;
- (int)pendingStatusRaw;
- (id)proposedStartDate;
- (id)proposedStartDateForEvent:(id)a0;
- (void)setPendingStatusRaw:(int)a0;
- (void)setProposedStartDate:(id)a0;
- (void)setProposedStartDate:(id)a0 forEvent:(id)a1;
- (void)setStatusRaw:(int)a0;

@end
