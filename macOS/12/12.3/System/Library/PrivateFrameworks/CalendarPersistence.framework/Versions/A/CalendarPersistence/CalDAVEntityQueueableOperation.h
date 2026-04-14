@class CalDAVCalendarSource, NSString;

@interface CalDAVEntityQueueableOperation : CalDAVPersistentQueueableOperation <CoreDAVGetTaskDelegate> {
    BOOL _clearEventFromQueueAfterForce;
}

@property (retain) CalDAVCalendarSource *source;
@property (retain) NSString *entitySharedUID;
@property (retain) NSString *entityLocalUID;
@property (retain) NSString *calendarTitle;
@property (retain) NSString *principalTitle;
@property (retain) NSString *serverFilename;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setError:(id)a0;
- (void)performOperation;
- (id)initWithChangeRequest:(id)a0 andSession:(id)a1;
- (id)initWithChangeRequest:(id)a0 andSource:(id)a1;
- (void)forceEntityFromServer;
- (void)performOperation:(BOOL)a0;
- (void)configureWithSource:(id)a0 inObjectContext:(id)a1;
- (void)forceEntityFromServerAndClearEventFromQueue:(BOOL)a0;
- (void)forceEntityFromServerAndClearEventFromQueue:(BOOL)a0 withContext:(id)a1;
- (void)_cleanUpOperationAfterForceWithContext:(id)a0;
- (id)extraUserInfoForRebuiltError;
- (void)updateAttachmentUrlIfDirectory:(id)a0 context:(id)a1 event:(id)a2;
- (void)configureOperationDependencies;
- (void)getTask:(id)a0 data:(id)a1 error:(id)a2;
- (void)forceEntityToServer;
- (void)setError:(id)a0 withResponseStatus:(id)a1 forItem:(id)a2;
- (void)queueAttachmentOperations:(id)a0 event:(id)a1;
- (void)updateInFlightTagsInContext:(id)a0;
- (BOOL)shouldHaveTagsUpdated;

@end
