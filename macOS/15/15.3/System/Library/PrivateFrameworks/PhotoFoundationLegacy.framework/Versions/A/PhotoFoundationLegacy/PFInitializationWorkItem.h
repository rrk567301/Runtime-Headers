@class NSMutableArray, NSObject;
@protocol OS_dispatch_group;

@interface PFInitializationWorkItem : NSObject {
    BOOL _mainThreadOnly;
    NSMutableArray *_dependencies;
    NSMutableArray *_completionBlocks;
    BOOL _initializationStarted;
    BOOL _initializationCompleted;
    NSObject<OS_dispatch_group> *_initializationCompleteGroup;
    id /* block */ _initializationBlock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)addDependency:(id)a0;
- (id)dependencies;
- (id)_targetQueue;
- (void)_synchronize:(id /* block */)a0;
- (void)_initializationComplete;
- (void)waitForInitialization;
- (void)_invokeCompletionBlocks_no_lock;
- (void)addInitializationCompletionCallbackBlock:(id /* block */)a0;
- (void)addInitializationCompletionCallbackBlock_no_lock:(id /* block */)a0;
- (void)beginInitializationActivity;
- (void)endInitializationActivity;
- (id)initWithInitializationBlock:(id /* block */)a0;
- (id)initWithMainThread;
- (id)initWithMainThreadInitializationBlock:(id /* block */)a0;
- (void)invokeInitialization;
- (void)performInitialization;
- (void)requestInitialization:(id /* block */)a0;

@end
