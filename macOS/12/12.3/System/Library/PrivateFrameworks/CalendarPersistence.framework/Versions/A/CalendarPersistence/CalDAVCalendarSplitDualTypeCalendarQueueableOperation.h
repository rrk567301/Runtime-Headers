@class NSSet, CalManagedCalDAVCalendar, NSURL, CalManagedObjectContext;

@interface CalDAVCalendarSplitDualTypeCalendarQueueableOperation : CalDAVRemoveCalendarQueueableOperation {
    BOOL _waitingForCompletionBlock;
}

@property (retain) CalManagedObjectContext *opManagedObjectContext;
@property int state;
@property (retain) CalManagedCalDAVCalendar *sourceCalendar;
@property (retain) CalManagedCalDAVCalendar *destinationCalendar;
@property (retain) NSURL *destinationCalendarURI;
@property (retain) NSSet *sourceCalendarRemoteEventHrefs;
@property (retain) NSSet *sourceCalendarRemoteTodoHrefs;
@property unsigned long long queryAndMoveIteration;

+ (id)queryTaskProperties;

- (void).cxx_destruct;
- (void)performOperation;
- (void)_finishWithError:(id)a0 state:(int)a1;
- (void)taskGroup:(id)a0 didFinishWithError:(id)a1;
- (id)initWithChangeRequest:(id)a0 session:(id)a1 URI:(id)a2 inboxURI:(id)a3;
- (void)deleteTask:(id)a0 completedWithError:(id)a1;
- (id)managedPrincipal;
- (void)prepareOperation;
- (void)fetchEventsOrTodosFromRemoteSourceCollection;
- (void)_saveManagedObjectContext;
- (void)queryEventTaskComplete:(id)a0;
- (void)postFetchStateSwitch;
- (void)queryTodoTaskComplete:(id)a0;
- (void)addNewDestinationCollectionFromSource;
- (void)moveTargetedItemsToDestinationCollection;
- (void)mkCalendarComplete:(id)a0;
- (id)coreDAVQueryResponseItemsForTargetItems;
- (void)performMultiMoveOperation:(id)a0 withPUTFallBack:(BOOL)a1;
- (void)removeOriginalCollection;
- (id)calendarItemServerURLsFromCoreDAVResponses:(id)a0;
- (id)calendarItemsWithServerURLs:(id)a0;
- (void)multiMoveTaskCompletedWithTaskGroup:(id)a0 didUseFallback:(BOOL)a1;
- (void)saveDestinationCollectionURIOnChangeRequest;
- (id)calendarItemWithServerURL:(id)a0;

@end
