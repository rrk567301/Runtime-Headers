@interface CalDAVAccountRefreshQueueableOperation : CalDAVQueueableOperation {
    BOOL _refreshHadChanges;
}

@property (nonatomic) BOOL shouldTakePowerAssertion;
@property unsigned int powerAssertionID;
@property (nonatomic) unsigned long long numberOfInboxEntriesAffected;
@property (nonatomic) unsigned long long numberOfEventsAffected;
@property (nonatomic) unsigned long long numberOfNotificationsAffected;
@property (nonatomic) BOOL fromFullRefresh;
@property (nonatomic) BOOL notifyOnChanges;
@property (nonatomic) BOOL fromUserInitiatedRefresh;

+ (void)reportRefreshExceptionToABC:(id)a0;
+ (BOOL)updateLastABCReportTimeAndAllowReport;

- (void)finalize;
- (void)dealloc;
- (void)tearDown;
- (void)refresh;
- (void)performOperation;
- (int)_sharingStatusForContainer:(id)a0;
- (void)finishOperation;
- (id)initWithSession:(id)a0 takePowerAssertion:(BOOL)a1;
- (id)readableDescription;
- (BOOL)_shouldCoalesceWithOperations:(id)a0;
- (id)extraUserInfoForRebuiltError;
- (BOOL)suppressErrorDialog;
- (void)dropPowerAssertion;
- (void)resetStatisticsGatheringCounters;
- (void)refreshWithExceptionHandling;
- (void)takePowerAssertion;
- (BOOL)refreshHadChanges;
- (BOOL)holdingPowerAssertion;
- (void)sendStatistics;
- (BOOL)refreshPropertiesForPrincipalCoreDAV:(id)a0 error:(id *)a1;
- (BOOL)refreshCalendarsForPrincipalCoreDAV:(id)a0 error:(id *)a1;
- (BOOL)_refreshPropertiesAndCalendarsForPrincipal:(id)a0 error:(id *)a1;
- (BOOL)rectifyPrincipalPathForPrincipal:(id)a0 inManagedObjectContext:(id)a1 error:(id *)a2;
- (void)_markLastAttachmentForPrincipal:(id)a0 account:(id)a1 inManagedObjectContext:(id)a2 error:(id *)a3;
- (void)updatePrincipal:(id)a0 newPrincipalPath:(id)a1;
- (BOOL)_accountExistsWithHost:(id)a0 principalPath:(id)a1 inManagedObjectContext:(id)a2;
- (void)updateCurrentAddresses:(id)a0 newAddresses:(id)a1 principal:(id)a2 calendar:(id)a3 context:(id)a4;
- (BOOL)_refreshCalendarsForPrincipalCoreDAV:(id)a0 error:(id *)a1;
- (BOOL)_syncReportForPrincipalCoreDAV:(id)a0 error:(id *)a1;
- (BOOL)_shouldFallBackToRegularRefreshForPrincipalCoreDAV:(id)a0 forError:(id)a1;
- (BOOL)_regularRefreshCalendarsForPrincipalCoreDAV:(id)a0 isDeepRefresh:(BOOL)a1 error:(id *)a2;
- (BOOL)updatePrincipal:(id)a0 forCalendarHome:(id)a1 error:(id *)a2;
- (BOOL)updateInboxForPrincipal:(id)a0 forInboxContainer:(id)a1 error:(id *)a2;
- (BOOL)updateAndRefreshCalendarsForPrincipal:(id)a0 forCalendarContainers:(id)a1 inboxURL:(id)a2 inboxContainer:(id)a3 isDeepRefresh:(BOOL)a4 deleteMissingCalendars:(BOOL)a5 error:(id *)a6;
- (BOOL)deleteRemovedCalendarsForPrincipal:(id)a0 withURLs:(id)a1 error:(id *)a2;
- (BOOL)updateNotificationsForPrincipal:(id)a0 forNotificationContainer:(id)a1 error:(id *)a2;
- (BOOL)updateOutboxForPrincipal:(id)a0 forOutboxContainer:(id)a1 error:(id *)a2;
- (id)_propPatchWithNoErrorHandlingStringValue:(id)a0 nameSpace:(id)a1 name:(id)a2 accountInfoProvider:(id)a3 url:(id)a4;
- (BOOL)_shouldDisableDefaultAlarmSupportForError:(id)a0;
- (void)updateSharees:(id)a0 forCalendar:(id)a1 context:(id)a2;
- (BOOL)_isSameTypeOfRefreshAs:(id)a0;

@end
