@interface EKPersistentParticipant : EKPersistentObject

+ (id)defaultPropertiesToLoad;
+ (id)propertyKeyForUniqueIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)UUID;
- (id)displayName;
- (id)url;
- (id)phoneNumber;
- (id)owner;
- (void)setUUID:(id)a0;
- (id)firstName;
- (id)emailAddress;
- (id)comment;
- (void)setComment:(id)a0;
- (id)lastName;
- (void)setEmailAddress:(id)a0;
- (void)setPhoneNumber:(id)a0;
- (void)setFirstName:(id)a0;
- (void)setLastName:(id)a0;
- (id)URLString;
- (void)setURLString:(id)a0;
- (id)displayNameRaw;
- (void)setDisplayNameRaw:(id)a0;
- (BOOL)scheduleForceSend;
- (void)setScheduleForceSend:(BOOL)a0;
- (id)inviterNameString;
- (void)setInviterNameString:(id)a0;
- (int)scheduleStatus;
- (id)proposedStartDate;
- (void)setProposedStartDate:(id)a0;
- (int)proposedStartDateStatus;
- (void)setProposedStartDateStatus:(int)a0;
- (void)setScheduleStatus:(int)a0;

@end
