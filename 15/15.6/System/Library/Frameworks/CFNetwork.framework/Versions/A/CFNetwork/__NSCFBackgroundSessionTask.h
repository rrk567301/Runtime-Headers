@class NSString, NSMutableSet, NSError;

@interface __NSCFBackgroundSessionTask : NSURLSessionTask <NSURLSessionTaskSubclass> {
    NSMutableSet *_secKeyProxies;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _proxyLock;
    char _sentCancel;
    char _sentDidFinish;
    NSError *_immediateError;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)setDelegate:(id)a0;
- (void)_onqueue_cancel;
- (void)addSecKeyProxy:(id)a0;
- (void)_onqueue_resume;
- (void)_applyBackgroundTaskOverrides:(id)a0;
- (void)_onSessionQueue_disavow;
- (void)_onqueue_adjustBytesPerSecondLimit:(long long)a0;
- (void)_onqueue_adjustLoadingPoolPriority;
- (void)_onqueue_adjustPoolPriority;
- (void)_onqueue_adjustPriorityHint:(float)a0 incremental:(char)a1;
- (void)_onqueue_didFinishWithError:(id)a0;
- (void)_onqueue_didReceiveInformationalResponse:(id)a0;
- (void)_onqueue_didReceiveResponse:(id)a0;
- (void)_onqueue_suspend;
- (void)_onqueue_willSendRequestForEstablishedConnection:(id)a0 withCompletion:(id /* block */)a1;
- (id)_timingData;
- (id)cookiesForCurrentRequest;
- (id)initWithBackgroundTask:(id)a0;
- (id)initWithOriginalRequest:(id)a0 ident:(unsigned long long)a1 taskGroup:(id)a2;
- (id)initWithTaskInfo:(id)a0 taskGroup:(id)a1 ident:(unsigned long long)a2;
- (void)removeSecKeyProxy:(id)a0;
- (id)requestWithCookiesApplied:(id)a0;
- (void)setTaskDescription:(id)a0;
- (void)set_TLSMaximumSupportedProtocolVersion:(unsigned short)a0;
- (void)set_TLSMinimumSupportedProtocolVersion:(unsigned short)a0;
- (void)set_discretionaryOverride:(long long)a0;

@end
