@class NSString;

@interface CalDAVCalendarQueueableOperation : CalDAVPersistentQueueableOperation

@property (readonly, copy) NSString *sourceUID;

- (void).cxx_destruct;
- (id)initWithChangeRequest:(id)a0 andSession:(id)a1;
- (void)configureOperationDependencies;
- (id)initWithChangeRequest:(id)a0 sourceUID:(id)a1 andSession:(id)a2;

@end
