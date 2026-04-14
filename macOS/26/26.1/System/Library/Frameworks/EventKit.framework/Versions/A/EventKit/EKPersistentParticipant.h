@interface EKPersistentParticipant : EKPersistentObject

+ (id)propertyKeyForUniqueIdentifier;
+ (id)defaultPropertiesToLoad;

- (id)URLString;
- (void)setEmailAddress:(id)a0;
- (id)displayName;
- (void)setUUID:(id)a0;
- (id)emailAddress;
- (void)setPhoneNumber:(id)a0;
- (void)setOwner:(id)a0;
- (id)firstName;
- (id)phoneNumber;
- (id)owner;
- (id)lastName;
- (void)setLastName:(id)a0;
- (id)comment;
- (void)setFirstName:(id)a0;
- (id)proposedStartDate;
- (void)setProposedStartDate:(id)a0;
- (id)semanticIdentifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)UUID;
- (id)url;
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
