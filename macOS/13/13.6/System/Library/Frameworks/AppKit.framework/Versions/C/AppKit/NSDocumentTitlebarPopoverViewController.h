@class NSDocument, NSError, NSOperationQueue;

@interface NSDocumentTitlebarPopoverViewController : NSViewController <NSRemoteViewDelegate> {
    NSDocument *document;
    NSError *nonModalError;
    NSOperationQueue *queue;
    BOOL isPerformingOperation;
    id /* block */ advanceToRunPhaseWaiter;
    id /* block */ cleanupKVOBlock;
}

@property (copy) id /* block */ operationWaiter;
@property (copy) id /* block */ invalidationHandler;
@property (readonly) BOOL shouldRetainExportedObject;

+ (Class)_remoteViewClass;
+ (Class)_sharedXPCListenerClass;
+ (void)warmup;

- (void)dealloc;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_didFinishOperation;
- (void)_enqueueOperationWithBlock:(id /* block */)a0;
- (BOOL)_setupBridge;
- (void)_whenDocumentOperationCompletesPerformBlock:(id /* block */)a0;
- (void)_willStartOperation;
- (id)initWithDocument:(id)a0;
- (void)loadView;
- (void)prepareViewThenContinue:(id /* block */)a0;
- (void)viewDidAdvanceToRunPhase:(id)a0;
- (void)viewDidInvalidate:(id)a0;

@end
