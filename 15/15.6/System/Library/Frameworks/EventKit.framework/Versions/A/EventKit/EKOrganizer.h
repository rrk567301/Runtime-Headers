@interface EKOrganizer : EKParticipant

@property (nonatomic) long long scheduleAgent;

+ (Class)frozenClass;
+ (id)organizerWithName:(id)a0 emailAddress:(id)a1 phoneNumber:(id)a2 address:(id)a3 isCurrentUser:(char)a4;

- (id)description;
- (id)owner;
- (char)isCurrentUser;
- (long long)participantStatus;
- (long long)participantRole;
- (long long)participantType;
- (void)setCurrentUser:(char)a0;
- (id)initWithName:(id)a0 emailAddress:(id)a1 phoneNumber:(id)a2 address:(id)a3 isCurrentUser:(char)a4;

@end
