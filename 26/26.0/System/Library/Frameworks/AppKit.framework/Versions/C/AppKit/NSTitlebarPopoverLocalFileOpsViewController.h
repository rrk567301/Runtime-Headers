@class NSViewBridge;
@protocol NSTitlebarPopoverLocalFileOpsViewControllerDelegate;

@interface NSTitlebarPopoverLocalFileOpsViewController : NSTitlebarPopoverViewController {
    NSViewBridge *_bridgeForUnregisteringKVO;
}

@property (weak, nonatomic) id<NSTitlebarPopoverLocalFileOpsViewControllerDelegate> oopDelegate;
@property (nonatomic) BOOL waitingToCleanUp;

+ (void)warmup;

- (void)loadView;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0 oopDelegate:(id)a1;
- (id)_makeLocalizedLabelsDictionary;
- (BOOL)_setupBridge;
- (void)_unregisterLocalFileOpsObserversFromBridge;
- (void)finishUp;
- (void)viewDidInvalidate:(id)a0;

@end
