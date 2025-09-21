@class NSString;

@interface EKPersistentOrganizer : EKPersistentParticipant

@property (retain, nonatomic) NSString *displayNameRaw;
@property (retain, nonatomic) NSString *emailAddress;
@property (retain, nonatomic) NSString *URLString;
@property (nonatomic) char isCurrentUser;

+ (id)relations;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;
+ (id)organizerWithName:(id)a0 emailAddress:(id)a1 address:(id)a2 isCurrentUser:(char)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)setOwner:(id)a0;
- (id)owner;
- (char)isCurrentUser;
- (void)setIsCurrentUser:(char)a0;
- (int)entityType;
- (id)initWithName:(id)a0 emailAddress:(id)a1 address:(id)a2 isCurrentUser:(char)a3;
- (long long)scheduleAgent;
- (void)setScheduleAgent:(long long)a0;

@end
