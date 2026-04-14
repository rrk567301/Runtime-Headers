@class NSString;

@interface CalDAVDeleteDropBoxQueueableOperation : CalDAVEntityQueueableOperation {
    NSString *_dropBoxUri;
}

- (void).cxx_destruct;
- (void)performOperation;
- (id)initWithChangeRequest:(id)a0 dropBoxUri:(id)a1 fromSource:(id)a2;
- (BOOL)_isLowPriority;

@end
