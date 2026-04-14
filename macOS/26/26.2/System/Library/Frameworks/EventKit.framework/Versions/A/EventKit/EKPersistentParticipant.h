@interface EKPersistentParticipant : EKPersistentObject

+ (id)defaultPropertiesToLoad;
+ (id)propertyKeyForUniqueIdentifier;

- (id)lastName;
- (id)URLString;
- (void)setEmailAddress:(id)a0;
- (id)emailAddress;
- (id)owner;
- (void)setLastName:(id)a0;
- (void)setFirstName:(id)a0;
- (id)firstName;
- (void)setOwner:(id)a0;
- (void)setProposedStartDate:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)comment;
- (id)semanticIdentifier;
- (id)proposedStartDate;
- (void)setPhoneNumber:(id)a0;
- (id)phoneNumber;
- (id)UUID;
- (id)displayName;
- (id)url;
- (void)setUUID:(id)a0;
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
