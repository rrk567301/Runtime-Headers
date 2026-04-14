@class NSString;

@interface CalDAVExpandGroupQueueableOperation : CalDAVPersistentQueueableOperation

@property (retain) NSString *groupIdentifier;

- (void).cxx_destruct;
- (void)performOperation;
- (id)initWithChangeRequest:(id)a0 forSession:(id)a1;
- (id)readableDescription;

@end
