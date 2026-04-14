@class NSString, CalManagedMoveEntityChangeRequest, NSData, NSManagedObjectID;

@interface CalDAVMoveEntityQueueableOperation : CalDAVEntityQueueableOperation <CoreDAVPropFindTaskDelegate, CalDAVEntityTaggableOperation> {
    NSString *_etag;
    NSString *_scheduleTag;
    NSManagedObjectID *_objectID;
    NSData *_icsData;
}

@property (retain) NSString *filename;
@property (retain) NSString *sourceCalendarUID;
@property (retain) NSString *destinationCalendarUID;
@property (readonly) CalManagedMoveEntityChangeRequest *changeRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSString *eTag;
@property (retain) NSString *scheduleTag;
@property (retain) NSManagedObjectID *objectID;
@property (readonly) BOOL shouldHaveTagsUpdated;

- (void).cxx_destruct;
- (void)performOperation;
- (void)propFindTask:(id)a0 parsedResponses:(id)a1 error:(id)a2;
- (void)finishOperation;
- (id)readableDescription;
- (id)initWithChangeRequest:(id)a0 forSession:(id)a1 source:(id)a2 eTag:(id)a3 scheduleTag:(id)a4 icsData:(id)a5 objectID:(id)a6;
- (void)forceEntityFromServerAndClearEventFromQueue:(BOOL)a0;
- (void)configureOperationDependencies;
- (void)forceEntityToServer;
- (id)calendarItemForLocalUID:(id)a0 inContext:(id)a1;
- (void)moveTaskCompletedWithTaskGroup:(id)a0;
- (void)finishMoveWithEtag:(id)a0 scheduleTag:(id)a1;
- (id)etagByRemovingWeakPrefix;
- (void)updateDependentOperationsWithEtag:(id)a0 scheduleTag:(id)a1;

@end
