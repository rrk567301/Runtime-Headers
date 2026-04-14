@class br_pacer, NSString, BRCThrottle, NSObject, CKContainer;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface BRCAccountWaitOperation : _BRCOperation <BRCOperationSubclass> {
    NSObject<OS_dispatch_source> *_source;
    CKContainer *_ckContainer;
    BRCThrottle *_throttle;
    long long _lastAccountStatus;
    BOOL _resumed;
    BOOL _cancelled;
    NSObject<OS_dispatch_queue> *_refetchPacerQueue;
    br_pacer *_refetchPacer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)cancel;
- (id)subclassableDescriptionWithContext:(id)a0;
- (BOOL)shouldRetryForError:(id)a0;
- (void)_accountDidChange;
- (void)main;
- (void).cxx_destruct;
- (void)start;
- (id)descriptionForCKAccountStatus:(long long)a0 dumpContext:(id)a1;
- (id)createActivity;
- (void)_accountChangeHandler;
- (void)resumeIfNecessary;
- (id)initWithCKContainer:(id)a0;
- (void)dealloc;

@end
