@interface EKPersistentParticipant : EKPersistentObject

+ (id)propertyKeyForUniqueIdentifier;
+ (id)defaultPropertiesToLoad;

- (id)phoneNumber;
- (void)setFirstName:(id)a0;
- (id)URLString;
- (void)setPhoneNumber:(id)a0;
- (void)setOwner:(id)a0;
- (id)emailAddress;
- (id)displayName;
- (id)UUID;
- (void)setEmailAddress:(id)a0;
- (id)firstName;
- (void)setLastName:(id)a0;
- (void)setUUID:(id)a0;
- (id)lastName;
- (id)owner;
- (id)semanticIdentifier;
- (id)proposedStartDate;
- (void)setProposedStartDate:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)comment;
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
