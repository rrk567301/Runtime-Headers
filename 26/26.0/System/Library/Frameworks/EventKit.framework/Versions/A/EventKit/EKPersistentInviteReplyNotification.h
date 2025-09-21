@interface EKPersistentInviteReplyNotification : EKPersistentNotification

+ (id)relations;
+ (Class)meltedClass;
+ (id)defaultPropertiesToLoad;

- (id)summary;
- (void)setSummary:(id)a0;
- (void)setCreationDate:(id)a0;
- (int)entityType;
- (id)creationDate;
- (id)inReplyTo;
- (void)setInReplyTo:(id)a0;
- (id)shareeFirstName;
- (id)shareeURLString;
- (BOOL)alerted;
- (id)inviteReplyCalendar;
- (void)setInviteReplyCalendar:(id)a0;
- (void)setShareeDisplayName:(id)a0;
- (void)setShareeFirstName:(id)a0;
- (void)setShareeLastName:(id)a0;
- (void)setShareeStatus:(unsigned long long)a0;
- (void)setShareeURLString:(id)a0;
- (id)shareeDisplayName;
- (id)shareeLastName;
- (unsigned long long)shareeStatus;

@end
