@class NSString;

@interface CalDAVDeleteInboxFileQueueableOperation : CalDAVPersistentQueueableOperation <CoreDAVDeleteTaskDelegate> {
    NSString *_filename;
    NSString *_inboxPath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)performOperation;
- (void)task:(id)a0 didFinishWithError:(id)a1;
- (id)initWithChangeRequest:(id)a0 inboxPath:(id)a1 filename:(id)a2 forSession:(id)a3;
- (void)handleRemovalCleanup;
- (void)useCoreDAV;

@end
