@interface EKPersistentInviteReplyNotification : EKPersistentNotification

+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;
+ (id)relations;

- (void)setCreationDate:(id)a0;
- (int)entityType;
- (id)creationDate;
- (id)summary;
- (void)setSummary:(id)a0;
- (BOOL)alerted;
- (id)inReplyTo;
- (void)setInReplyTo:(id)a0;
- (id)shareeFirstName;
- (id)shareeURLString;
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
