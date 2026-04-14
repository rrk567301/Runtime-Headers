@interface EKPersistentInviteReplyNotification : EKPersistentNotification

+ (id)relations;
+ (Class)meltedClass;
+ (id)defaultPropertiesToLoad;

- (id)creationDate;
- (void)setCreationDate:(id)a0;
- (void)setSummary:(id)a0;
- (id)summary;
- (int)entityType;
- (void)setInReplyTo:(id)a0;
- (id)inReplyTo;
- (id)inviteReplyCalendar;
- (id)shareeDisplayName;
- (void)setShareeDisplayName:(id)a0;
- (id)shareeFirstName;
- (void)setShareeFirstName:(id)a0;
- (id)shareeLastName;
- (void)setShareeLastName:(id)a0;
- (id)shareeURLString;
- (void)setShareeURLString:(id)a0;
- (unsigned long long)shareeStatus;
- (void)setShareeStatus:(unsigned long long)a0;
- (BOOL)alerted;
- (void)setInviteReplyCalendar:(id)a0;

@end
