@interface EKOrganizer : EKParticipant

@property (nonatomic) long long scheduleAgent;

+ (Class)frozenClass;
+ (id)organizerWithName:(id)a0 emailAddress:(id)a1 phoneNumber:(id)a2 address:(id)a3 isCurrentUser:(BOOL)a4;

- (id)owner;
- (id)description;
- (void)setCurrentUser:(BOOL)a0;
- (BOOL)isCurrentUser;
- (long long)participantStatus;
- (long long)participantType;
- (long long)participantRole;
- (id)initWithName:(id)a0 emailAddress:(id)a1 phoneNumber:(id)a2 address:(id)a3 isCurrentUser:(BOOL)a4;

@end
