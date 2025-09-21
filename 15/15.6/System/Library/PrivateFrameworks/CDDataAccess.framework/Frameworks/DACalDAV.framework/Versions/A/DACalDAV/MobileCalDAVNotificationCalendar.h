@class MobileCalDAVAccount;

@interface MobileCalDAVNotificationCalendar : MobileCalDAVCalendar

@property (readonly, nonatomic) MobileCalDAVAccount *daAccount;
@property (nonatomic) int mostRecentNotificationChangeIndex;

- (id)allItemURLs;
- (Class)appSpecificCalendarItemClass;
- (id)etagsForItemURLs:(id)a0;
- (char)isNotification;
- (void)prepareMergeSyncActionsWithCompletionBlock:(id /* block */)a0;
- (char)setEtag:(id)a0 forItemAtURL:(id)a1;
- (char)setScheduleTag:(id)a0 forItemAtURL:(id)a1;
- (char)setURL:(id)a0 forResourceWithUUID:(id)a1;
- (char)updateResourcesFromServer:(id)a0;
- (id)_accountLoggingDescription;
- (id)_changedAttributesFromCalendarChanges:(id)a0;
- (id)_copyNotificationWithExternalID:(id)a0;
- (id)_copyNotificationWithUniqueIdentifier:(id)a0;
- (char)_handleInviteNotification:(id)a0 withResource:(id)a1 uid:(id)a2;
- (char)_handleInviteReply:(id)a0 withResource:(id)a1 owningNotification:(id)a2 uid:(id)a3;
- (char)_handleResourceChanged:(id)a0 withResource:(id)a1 uid:(id)a2;
- (id)_notifications;
- (char)_removeCalendarItemWithURL:(id)a0;
- (void)clearEventChanges;
- (id)daPrincipal;
- (id)initWithCalendarURL:(id)a0 list:(id)a1 principal:(id)a2 title:(id)a3;
- (void)prepareSyncActionsWithCompletionBlock:(id /* block */)a0;
- (void)recordDiagnosticsForAccountSync:(id)a0;

@end
