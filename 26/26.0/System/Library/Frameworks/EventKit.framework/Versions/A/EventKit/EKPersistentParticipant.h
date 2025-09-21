@interface EKPersistentParticipant : EKPersistentObject

+ (id)propertyKeyForUniqueIdentifier;
+ (id)defaultPropertiesToLoad;

- (id)phoneNumber;
- (id)emailAddress;
- (void)setPhoneNumber:(id)a0;
- (void)setLastName:(id)a0;
- (void)setOwner:(id)a0;
- (id)UUID;
- (void)setFirstName:(id)a0;
- (id)firstName;
- (id)lastName;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setUUID:(id)a0;
- (id)comment;
- (id)displayName;
- (id)url;
- (void)setEmailAddress:(id)a0;
- (id)owner;
- (id)proposedStartDate;
- (id)URLString;
- (id)semanticIdentifier;
- (void)setProposedStartDate:(id)a0;
- (void)setComment:(id)a0;
- (id)commentLastModifiedDate;
- (id)displayNameRaw;
- (id)inviterNameString;
- (int)proposedStartDateStatus;
- (BOOL)scheduleForceSend;
- (int)scheduleStatus;
- (void)setCommentLastModifiedDate:(id)a0;
- (void)setDisplayNameRaw:(id)a0;
- (void)setInviterNameString:(id)a0;
- (void)setProposedStartDateStatus:(int)a0;
- (void)setScheduleForceSend:(BOOL)a0;
- (void)setScheduleStatus:(int)a0;
- (void)setURLString:(id)a0;

@end
