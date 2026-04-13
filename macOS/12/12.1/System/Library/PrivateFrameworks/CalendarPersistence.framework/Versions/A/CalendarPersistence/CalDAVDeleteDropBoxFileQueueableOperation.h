@class NSString, CALEntity;

@interface CalDAVDeleteDropBoxFileQueueableOperation : CalDAVEntityQueueableOperation {
    NSString *_attachmentName;
    CALEntity *_masterEntity;
}

- (void).cxx_destruct;
- (void)performOperation;
- (id)masterEntity;
- (id)initWithChangeRequest:(id)a0 attachmentName:(id)a1 entity:(id)a2 fromSource:(id)a3;

@end
