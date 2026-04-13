@class NSString, NSOperationQueue;
@protocol EKServerChangeObserver;

@interface CalDAVChangeRequestsConsumer : NSObject <NSPortDelegate> {
    NSOperationQueue *_queue;
    id<EKServerChangeObserver> _observer;
}

@property long long lastSequenceNumberProcessed;
@property int lastChangeRequestTypeProcessed;
@property (retain) NSString *lastLocalUIDProcessed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)initWithObserver:(id)a0;
- (void)managedObjectContextDidSave:(id)a0;
- (void)registerObserver:(id)a0;
- (void)processChangeRequests;
- (id)makeEntityAddOperation:(id)a0 forSource:(id)a1;
- (id)makeEntityChangeOperation:(id)a0 forSource:(id)a1;
- (id)makeEntityRemoveOperation:(id)a0 forSource:(id)a1;
- (id)makeEventScheduleOperation:(id)a0 forSource:(id)a1 forSession:(id)a2;
- (id)makeDeleteDropBoxOperation:(id)a0 forSource:(id)a1;
- (id)makeMoveEntityOperation:(id)a0 forSession:(id)a1 source:(id)a2;
- (id)makeUploadDropBoxFile:(id)a0 forSource:(id)a1;
- (id)makeDownloadDropBoxFile:(id)a0 forSource:(id)a1;
- (id)makeDeleteDropBoxFile:(id)a0 forSource:(id)a1;
- (id)makeAddCalendarOperation:(id)a0 forSession:(id)a1;
- (id)makeRemoveCalendarOperation:(id)a0 forSession:(id)a1;
- (id)makeReportJunkCalendarOperation:(id)a0 principal:(id)a1 forSession:(id)a2;
- (id)makeSplitCalendarItemTypesOperation:(id)a0 forSession:(id)a1 forSource:(id)a2;
- (id)makeRemovePropertyCalendarOperation:(id)a0 forSession:(id)a1;
- (id)makeChangeAffectingAvailabilityCalendarOperation:(id)a0 forSession:(id)a1;
- (id)makeChangePublishStatusOperation:(id)a0 forSession:(id)a1;
- (id)makeSetPropertyCalendarOperation:(id)a0 forSession:(id)a1;
- (id)makeDeleteInboxFileOperation:(id)a0 forSession:(id)a1;
- (id)makeExpandGroupOperation:(id)a0 forSession:(id)a1;
- (id)makeSharedCalendarInvitationResponseOperation:(id)a0 forSession:(id)a1;
- (id)makeDeleteNotificationCollectionFileOperation:(id)a0 forSession:(id)a1;
- (id)makeSetPropertyCalendarHomeOperation:(id)a0 forSession:(id)a1;
- (id)createOrUpdateShareeOperation:(id)a0 forSession:(id)a1;
- (id)_processChangeRequest:(id)a0 deleteCRIfNoOperation:(BOOL *)a1 inManagedObjectContext:(id)a2;
- (id)_expandProcessChangeRequest:(id)a0 forOperation:(id)a1 inManagedObjectContext:(id)a2;
- (void)_processChangeRequests;
- (void)runOperationOnConsumerQueue:(id)a0;
- (void)processChangeRequestsSynchronously;

@end
