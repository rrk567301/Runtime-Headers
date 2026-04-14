@interface EKPersistentParticipant : EKPersistentObject

+ (id)propertyKeyForUniqueIdentifier;
+ (id)defaultPropertiesToLoad;

- (void)setEmailAddress:(id)a0;
- (void)setPhoneNumber:(id)a0;
- (id)phoneNumber;
- (id)lastName;
- (id)displayName;
- (id)firstName;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)owner;
- (void)setLastName:(id)a0;
- (id)semanticIdentifier;
- (void)setOwner:(id)a0;
- (void)setFirstName:(id)a0;
- (id)emailAddress;
- (void)setProposedStartDate:(id)a0;
- (id)comment;
- (void)setUUID:(id)a0;
- (id)URLString;
- (id)proposedStartDate;
- (id)url;
- (id)UUID;
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
