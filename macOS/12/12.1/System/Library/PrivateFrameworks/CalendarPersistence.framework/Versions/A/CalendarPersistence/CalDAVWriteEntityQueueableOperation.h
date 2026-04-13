@class NSString, CoreDAVGetTask, NSData, NSDate, NSURL, NSManagedObjectID;

@interface CalDAVWriteEntityQueueableOperation : CalDAVEntityQueueableOperation <CalDAVPutCalendarItemTaskDelegate, CoreDAVGetTaskDelegate, CalDAVEntityTaggableOperation> {
    NSURL *_calendarURL;
    BOOL _overwrite;
}

@property (retain) CoreDAVGetTask *currentlyRunningGetEntityTask;
@property (nonatomic) BOOL clearedSyncMalfunctionProperties;
@property BOOL forceSerializeTimezones;
@property BOOL forceToServer;
@property (retain) NSString *sliceChildLocalUID;
@property (retain) NSDate *sliceDate;
@property (retain) NSData *icsData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSString *eTag;
@property (retain) NSString *scheduleTag;
@property (retain) NSManagedObjectID *objectID;
@property (readonly) BOOL shouldHaveTagsUpdated;

+ (id)_addRecurrenceSet:(id)a0 toICSData:(id)a1;

- (void).cxx_destruct;
- (void)enqueue;
- (id)calendarURL;
- (void)finishOperation;
- (id)readableDescription;
- (id)initWithChangeRequest:(id)a0 eTag:(id)a1 scheduleTag:(id)a2 icsData:(id)a3 overwrite:(BOOL)a4 objectID:(id)a5 calendarURL:(id)a6 fromSource:(id)a7;
- (void)removeAssociatedEntities;
- (void)performOperation:(BOOL)a0;
- (void)configureOperationDependencies;
- (void)getTask:(id)a0 data:(id)a1 error:(id)a2;
- (id)_sliceMasterInContext:(id)a0;
- (void)_runPostSliceTaskAtURL:(id)a0 sliceChildSharedUID:(id)a1 floating:(BOOL)a2 allDay:(BOOL)a3;
- (void)_runPutTaskAtURL:(id)a0;
- (void)_postTask:(id)a0 didFinishWithError:(id)a1;
- (void)_putTask:(id)a0 didFinishWithError:(id)a1;
- (id)_recurrenceRuleSetFromICSDocument:(id)a0;
- (id)_otherWriteOperationsToSameSharedUID;
- (void)_clearTagsForItem:(id)a0 delete:(BOOL)a1;
- (BOOL)_canFilterOutTimezonesWithCalendar:(id)a0;
- (void)clearSyncMalfunctionPropertiesWithContext:(id)a0;
- (BOOL)_permanentErrorForStatus:(int)a0;

@end
