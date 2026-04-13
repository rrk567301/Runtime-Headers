@class NSString, CoreEvent, CALEntity;

@interface CalDAVScheduleEventQueueableOperation : CalDAVEntityQueueableOperation {
    NSString *_meAddress;
    NSString *_recipients;
    NSString *_scheduleData;
    NSString *_localUID;
    CoreEvent *_event;
    CALEntity *_parentEvent;
    long long _attachmentsSent;
    NSString *_outboxPath;
    int _method;
    NSString *_etag;
    BOOL _scheduleIsAnUpdate;
}

- (void).cxx_destruct;
- (void)performOperation;
- (void)task:(id)a0 didFinishWithError:(id)a1;
- (id)readableDescription;
- (id)initWithChangeRequest:(id)a0 entity:(id)a1 meAddress:(id)a2 recipients:(id)a3 scheduleData:(id)a4 outboxPath:(id)a5 fromSource:(id)a6 session:(id)a7 etag:(id)a8 serverFilename:(id)a9;
- (void)configureOperationDependencies;
- (void)performSchedule;
- (void)_setErrorWithFakeStatus:(id)a0;
- (void)_checkHeadETag:(id)a0;
- (void)_sendMessageForInvalidAttendees:(id)a0;

@end
