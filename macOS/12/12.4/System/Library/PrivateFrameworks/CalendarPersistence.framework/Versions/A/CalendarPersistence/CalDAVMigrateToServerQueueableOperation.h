@class CalManagedGroup, NSString, CalManagedCalDAVCalendar, NSArray, LocalCalendarDetails, NSMutableArray, CalManagedObjectContext;

@interface CalDAVMigrateToServerQueueableOperation : CalDAVQueueableOperation {
    BOOL _inProgress;
    long long _previousDelay;
    BOOL _gotEtagsForAllItemsInCurrentRemoteCalendar;
    unsigned long long _indexNotFaultedOut;
    CalManagedGroup *_failGroup;
    long long _bulkSimpleMaxResources;
    long long _bulkSimpleMaxSize;
    long long _bulkCrudMaxResources;
    long long _bulkCrudMaxSize;
}

@property int state;
@property (retain) CalManagedObjectContext *context;
@property (retain) NSMutableArray *unprocessedCalendars;
@property (retain) NSMutableArray *calendarsToCreate;
@property (retain) LocalCalendarDetails *currentCalendarDetails;
@property (retain) CalManagedCalDAVCalendar *currentRemoteCalendar;
@property (retain) NSString *currentStagedRemoteCTag;
@property (retain) NSMutableArray *unprocessedNewPlans;
@property (retain) NSMutableArray *unprocessedUpdatePlans;
@property (retain) NSMutableArray *unprocessedUpdateDeleteUIDPlans;
@property (retain) NSArray *inProgressPlans;
@property (retain) NSMutableArray *plansToPostProcess;
@property (retain) NSMutableArray *plansToMoveLocal;

+ (id)plansForEventsOrTasksInCalendar:(id)a0 toCalendar:(id)a1 tasksOnly:(BOOL)a2;
+ (id)plansForTasksInCalendar:(id)a0 toCalendar:(id)a1;
+ (id)plansForEventsInCalendar:(id)a0 toCalendar:(id)a1;

- (void).cxx_destruct;
- (void)_finalize;
- (id)accountID;
- (void)performOperation;
- (void)migrate;
- (void)_finishWithError:(id)a0 state:(int)a1;
- (id)initWithSession:(id)a0 previousMigrateDelay:(long long)a1;
- (BOOL)_shouldKillAgentIfThisTakesTooLong;
- (void)retryTimerFired:(id)a0;
- (BOOL)suppressErrorDialog;
- (void)_resetBulkMax;
- (void)_setupBackgroundThread;
- (id)managedPrincipal;
- (id)_determineRemoteCalendarsForLocalCalendars:(id)a0 includeSubscribed:(BOOL)a1 tasks:(BOOL)a2;
- (void)_makeRemoteCalendars;
- (void)bumpPreviousDelay;
- (long long)_preconditionErrorBackoffTime:(id)a0;
- (void)migrateOperationDone:(id)a0;
- (BOOL)_localSubscribedCalendar:(id)a0 matchesRemoteCalendar:(id)a1;
- (void)_markPlanAsFailed:(id)a0;
- (void)_faultOutPostProcessedToIndex:(unsigned long long)a0;
- (id)_getFailGroupWithError:(id *)a0;
- (id)_expandedItemsFromItems:(id)a0;
- (void)mkcalendarComplete:(id)a0;
- (void)calendarPropertiesComplete:(id)a0;
- (void)putComplete:(id)a0;
- (void)postComplete:(id)a0;
- (id)_documentFromPlans:(id)a0;
- (BOOL)_bulkCrudSupported;
- (void)_updateStagedCtag:(id)a0;
- (void)_storeAndUpdateFailedPlansWithUIDs:(id)a0;
- (void)_storeAndUpdateFailedPlansWithFilenames:(id)a0;
- (void)_storeAndUpdatePlansWithETags:(id)a0 filenames:(id)a1;
- (void)_postProcessDeletionAndContinue;
- (void)_handleLocalCalendar;
- (id)_makeCommonHeaders;
- (BOOL)_bulkSimpleSupported;
- (void)_postData:(id)a0 extraHeaders:(id)a1;
- (void)_postCRUD;
- (void)_putOneItem:(id)a0 path:(id)a1 extraHeaders:(id)a2;
- (void)deleteComplete:(id)a0;
- (BOOL)_populateEtags:(id)a0 filenames:(id)a1;
- (BOOL)_isBulkStateUnknown;
- (void)_fetchCalendarProperties;
- (void)_deleteObsoleteItems;
- (void)_modifyExistingItems;
- (void)_uploadNewItems;
- (void)_processNewCalendar;
- (void)_determineAndSetCurrentRemoteCalendar;
- (void)_createNewRemoteSubscribedCalendar;
- (void)_createNewRemoteCalendar;
- (void)_checkThread;
- (BOOL)_cleanupMarkedCalendarsAfterSuccessfulMigrationWithError:(id *)a0;
- (BOOL)_populatePlansForLocalCalendar;
- (void)_setBulkUnknownToUnsupported;

@end
