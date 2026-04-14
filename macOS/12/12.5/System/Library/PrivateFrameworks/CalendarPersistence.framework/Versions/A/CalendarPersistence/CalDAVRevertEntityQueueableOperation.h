@class NSString, CalDAVCalendarSource;

@interface CalDAVRevertEntityQueueableOperation : CalDAVQueueableOperation <CoreDAVGetTaskDelegate> {
    int _revertOperationType;
    CalDAVCalendarSource *_source;
    NSString *_entityLocalUID;
    NSString *_entitySharedUID;
    NSString *_serverFilename;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)enqueue;
- (void)performOperation;
- (id)serverFilename;
- (id)readableDescription;
- (id)entitySharedUID;
- (id)initWithPreviousOperation:(id)a0;
- (id)entityLocalUID;
- (void)getTask:(id)a0 data:(id)a1 error:(id)a2;

@end
