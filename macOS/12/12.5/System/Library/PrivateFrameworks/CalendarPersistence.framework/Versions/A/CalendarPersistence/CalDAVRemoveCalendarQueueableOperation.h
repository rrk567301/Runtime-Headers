@class NSString;

@interface CalDAVRemoveCalendarQueueableOperation : CalDAVCalendarQueueableOperation <CoreDAVDeleteTaskDelegate, CoreDAVTaskGroupDelegate>

@property (retain) NSString *inboxURI;
@property (retain) NSString *uri;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setError:(id)a0;
- (void)performOperation;
- (void)taskGroup:(id)a0 didFinishWithError:(id)a1;
- (void)finishOperation;
- (id)initWithChangeRequest:(id)a0 session:(id)a1 URI:(id)a2 inboxURI:(id)a3;
- (void)useCoreDAV;
- (void)deleteTask:(id)a0 completedWithError:(id)a1;
- (void)configureOperationDependencies;
- (void)updateFreeBusySet;

@end
