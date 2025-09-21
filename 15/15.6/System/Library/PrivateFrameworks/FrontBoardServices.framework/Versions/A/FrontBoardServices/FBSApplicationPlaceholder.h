@class FBSApplicationLibrary, FBSApplicationPlaceholderProgress, NSMutableSet, LSApplicationIdentity, LSApplicationProxy, NSObject;
@protocol FBSApplicationPlaceholderProgress, OS_dispatch_queue;

@interface FBSApplicationPlaceholder : FBSBundleInfo {
    LSApplicationProxy *_proxy;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    FBSApplicationPlaceholderProgress *_queue_progress;
    NSMutableSet *_queue_observers;
    unsigned long long _installType;
}

@property (retain, nonatomic, getter=_proxy, setter=_setProxy:) LSApplicationProxy *proxy;
@property (weak, nonatomic) FBSApplicationLibrary *appLibrary;
@property (readonly, copy, nonatomic) LSApplicationIdentity *applicationIdentity;
@property (readonly, nonatomic) id<FBSApplicationPlaceholderProgress> progress;
@property (readonly, nonatomic, getter=isPrioritizable) char prioritizable;
@property (readonly, nonatomic, getter=isPausable) char pausable;
@property (readonly, nonatomic, getter=isResumable) char resumable;
@property (readonly, nonatomic, getter=isCancellable) char cancellable;

+ (id)_callOutQueue;
+ (id)_sharedQueue;

- (void)dealloc;
- (void).cxx_destruct;
- (char)resume;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (unsigned long long)installPhase;
- (unsigned long long)installState;
- (unsigned long long)installType;
- (char)isRestricted;
- (char)pause;
- (void)remove:(id)a0;
- (char)cancel;
- (char)prioritize;
- (void)add:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)_reloadProgress;
- (double)percentComplete;
- (char)_canPerformAction:(unsigned long long)a0;
- (void)_cancelWithResult:(id /* block */)a0;
- (void)_dispatchToObserversWithBlock:(id /* block */)a0;
- (id)_initWithApplicationProxy:(id)a0 identity:(id)a1;
- (id)_initWithBundleIdentifier:(id)a0 url:(id)a1;
- (id)_initWithBundleProxy:(id)a0 url:(id)a1;
- (void)_noteChangedSignificantly;
- (void)_pauseWithResult:(id /* block */)a0;
- (char)_performAction:(unsigned long long)a0 withResult:(id /* block */)a1;
- (void)_prioritizeWithResult:(id /* block */)a0;
- (char)_queue_canPerformAction:(unsigned long long)a0;
- (char)_queue_isCloudDemoted;
- (void)_queue_noteChangedSignificantly:(id)a0;
- (void)_queue_setProxy:(id)a0 force:(char)a1;
- (unsigned long long)_queue_supportedActions;
- (void)_reloadFromProxy:(id)a0;
- (void)_reloadFromRecord:(id)a0;
- (void)_resumeWithResult:(id /* block */)a0;
- (void)_sendToObserversPlaceholderDidChangeSignificantly;
- (void)_sendToObserversPlaceholderProgressDidUpdate;
- (void)_setProxy:(id)a0 force:(char)a1;
- (char)cancelWithResult:(id /* block */)a0;
- (unsigned long long)expectedFinalInstallPhase;
- (char)pauseWithResult:(id /* block */)a0;
- (char)prioritizeWithResult:(id /* block */)a0;
- (char)resumeWithResult:(id /* block */)a0;

@end
