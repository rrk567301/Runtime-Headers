@class NSError, NSViewBridge;
@protocol NSTitlebarPopoverViewControllerDataSource, NSDocumentTitlebarPopoverViewControllerDelegate;

@interface NSTitlebarPopoverViewController : NSViewController <NSRemoteViewDelegate> {
    id<NSTitlebarPopoverViewControllerDataSource> _dataSource;
    id<NSDocumentTitlebarPopoverViewControllerDelegate> _delegate;
    BOOL _lockStatusObserverAttemptedRegistration;
    NSError *_nonModalError;
    BOOL _isPerformingOperation;
    id /* block */ _operationWaiter;
    id /* block */ _advanceToRunPhaseWaiter;
    NSViewBridge *_bridgeForUnregisteringKVO;
}

@property (copy) id /* block */ invalidationHandler;
@property (readonly) BOOL shouldRetainExportedObject;

+ (void)warmup;
+ (Class)_remoteViewClass;
+ (Class)_sharedXPCListenerClass;

- (void)loadView;
- (void)dealloc;
- (id)initWithDataSource:(id)a0;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_didFinishOperation;
- (BOOL)_setupBridge;
- (void)_unregisterObservers;
- (void)_whenDocumentOperationCompletesPerformBlock:(id /* block */)a0;
- (void)_willStartOperation;
- (id)initWithDelegate:(id)a0 dataSource:(id)a1;
- (void)prepareViewThenContinue:(id /* block */)a0;
- (BOOL)view:(id)a0 shouldResize:(struct CGSize { double x0; double x1; })a1;
- (void)viewDidAdvanceToRunPhase:(id)a0;
- (void)viewDidInvalidate:(id)a0;

@end
