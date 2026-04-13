@class NSString;

@interface CalDAVDeleteNotificationCollectionFileQueueableOperation : CalDAVPersistentQueueableOperation

@property (retain) NSString *filename;
@property (retain) NSString *notificationCollectionPath;

- (void).cxx_destruct;
- (void)performOperation;
- (id)initWithChangeRequest:(id)a0 notificationCollectionPath:(id)a1 filename:(id)a2 forSession:(id)a3;
- (void)handleRemovalCleanup;

@end
