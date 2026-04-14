@class VUIJSApplication, VUIJSFoundation, JSContext, VUIAppReloadContext, NSMutableArray, NSObject;
@protocol VUIAppStackProtocolObjC, VUIApplication, VUIAppContextDelegate, OS_dispatch_source;

@interface VUIAppContext : NSObject {
    BOOL _respondsToTraitCollection;
    struct __CFRunLoop { } *_jsThreadRunLoop;
    struct __CFRunLoopSource { } *_jsThreadRunLoopSource;
    NSObject<OS_dispatch_source> *_lowMemoryWarningSource;
}

@property (readonly, nonatomic) NSMutableArray *onStartQueue;
@property (nonatomic) BOOL canAccessPendingQueue;
@property (retain, nonatomic) VUIAppReloadContext *reloadContext;
@property (getter=isRunning) BOOL running;
@property (retain, nonatomic) NSMutableArray *pendingQueue;
@property (retain, nonatomic) NSMutableArray *postEvaluationBlocks;
@property (retain, nonatomic) JSContext *jsContext;
@property BOOL isValid;
@property (readonly, nonatomic) id<VUIAppStackProtocolObjC> appStack;
@property (readonly, weak, nonatomic) id<VUIApplication> app;
@property (readonly, nonatomic) unsigned long long mode;
@property (retain, nonatomic) VUIJSApplication *jsApp;
@property (retain, nonatomic) VUIJSFoundation *jsFoundation;
@property (readonly, weak, nonatomic) id<VUIAppContextDelegate> delegate;
@property (nonatomic) BOOL remoteInspectionEnabled;

+ (id)currentAppContext;

- (void)stop;
- (void)reload;
- (void).cxx_destruct;
- (void)evaluate:(id /* block */)a0;
- (void)start;
- (void)dealloc;
- (void)_stopAndReload:(BOOL)a0;
- (void)_dispatchError:(id)a0;
- (void)_addPrivateInterfaces;
- (void)_addStopRecordToPendingQueueWithReload:(BOOL)a0;
- (id)_appTraitCollection;
- (void)_doEvaluate:(id /* block */)a0;
- (void)_drainOnStartQueue;
- (void)_enqueueOnStartOrExecute:(id /* block */)a0;
- (id)_errorWithMessage:(id)a0;
- (void)_evaluate:(id /* block */)a0;
- (void)_invalidateJSThread;
- (void)_jsThreadMain;
- (BOOL)_prepareStartWithURL:(id)a0;
- (void)_sourceCanceledOnRunLoop:(struct __CFRunLoop { } *)a0;
- (void)_sourcePerform;
- (void)_sourceScheduledOnRunLoop:(struct __CFRunLoop { } *)a0;
- (void)_startWithScript:(id)a0 scriptUrl:(id)a1;
- (void)_startWithURL:(id)a0;
- (void)contextDidFailWithError:(id)a0;
- (void)contextDidStartWithJS:(id)a0 options:(id)a1;
- (void)contextDidStopWithOptions:(id)a0;
- (void)evaluate:(id /* block */)a0 completionBlock:(id /* block */)a1 completionQueue:(id)a2;
- (void)evaluateDelegateBlockSync:(id /* block */)a0;
- (void)evaluateFoundationJS;
- (void)handleReloadWithUrgencyType:(unsigned long long)a0 minInterval:(double)a1 data:(id)a2;
- (id)initWithApplication:(id)a0 mode:(unsigned long long)a1 delegate:(id)a2;
- (id)initWithDelegate:(id)a0 appStack:(id)a1;
- (void)launchAppWithOptions:(id)a0;
- (void)resumeWithOptions:(id)a0;
- (void)setException:(id)a0 withErrorMessage:(id)a1;
- (void)suspendWithOptions:(id)a0;

@end
