@class NSDate;

@interface EKAttendee : EKParticipant

@property (nonatomic) long long participantRole;
@property (nonatomic) long long participantStatus;
@property (nonatomic) long long participantType;
@property (readonly, nonatomic) NSDate *lastModifiedParticipationStatus;

+ (Class)frozenClass;
+ (id)attendeeWithParticipant:(id)a0;
+ (id)attendeeWithName:(id)a0 emailAddress:(id)a1 phoneNumber:(id)a2 url:(id)a3;
+ (id)_allowableChangeKeys;
+ (id)attendeeWithEmailAddress:(id)a0 name:(id)a1;
+ (id)attendeeWithName:(id)a0 url:(id)a1;
+ (id)attendeeWithName:(id)a0 emailAddress:(id)a1;
+ (id)attendeeWithName:(id)a0 phoneNumber:(id)a1;
+ (id)attendeeWithName:(id)a0 emailAddress:(id)a1 address:(id)a2;

- (id)firstName;
- (id)displayString;
- (id)lastName;
- (void)markAsForward;
- (BOOL)_hasAllowableChanges;
- (BOOL)_hasOnlyAllowableChanges;

@end
