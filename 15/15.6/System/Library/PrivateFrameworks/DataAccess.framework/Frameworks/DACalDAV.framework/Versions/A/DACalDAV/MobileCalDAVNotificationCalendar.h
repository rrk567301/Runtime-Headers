@class CalDiagNotificationCollectionSync;

@interface MobileCalDAVNotificationCalendar : MobileCalDAVCalendar

@property (retain, nonatomic) CalDiagNotificationCollectionSync *notificationCollectionSyncDiagnostics;

- (void).cxx_destruct;
- (id)allItemURLs;
- (Class)appSpecificCalendarItemClass;
- (id)etagsForItemURLs:(id)a0;
- (char)isNotification;
- (void)prepareMergeSyncActionsWithCompletionBlock:(id /* block */)a0;
- (char)setEtag:(id)a0 forItemAtURL:(id)a1;
- (char)setScheduleTag:(id)a0 forItemAtURL:(id)a1;
- (char)setURL:(id)a0 forResourceWithUUID:(id)a1;
- (char)updateResourcesFromServer:(id)a0;
- (void *)_copyNotificationWithExternalID:(id)a0;
- (char)_removeCalendarItemWithURL:(id)a0;
- (void)clearEventChanges;
- (void)prepareSyncActionsWithCompletionBlock:(id /* block */)a0;
- (void)recordDiagnosticsForAccountSync:(id)a0;
- (void *)_copyNotificationWithUniqueIdentifier:(id)a0 inCalendar:(void *)a1 orStore:(void *)a2;
- (id)initWithCalendarURL:(id)a0 calendar:(void *)a1 principal:(id)a2 title:(id)a3;
- (char)shouldCalendarBeHidden;

@end
