@class PAImageItemViewMode, NSString, PATimer, NSObject, PFTimeIntervalCoalescer;
@protocol OS_dispatch_queue;

@interface PAImageItemViewController : PAItemViewController <PAImageAssetClientDelegate, PAImageActivityController> {
    NSObject<OS_dispatch_queue> *_loadStatusQueue;
    PATimer *_loadTimer;
    PATimer *_startTimer;
    int _loadState;
    PATimer *_renderTimer;
    PATimer *_shutdownTimer;
    PFTimeIntervalCoalescer *_viewportUpdateCoalescer;
    BOOL _viewportUpdatesEnabled;
    BOOL _isOutOfDate;
    unsigned long long _pendingUpdates;
    NSObject<OS_dispatch_queue> *_modeQueue;
    PAImageItemViewMode *_currentMode;
    BOOL _isSwitchingMode;
    BOOL _isLoadingMode;
}

@property (readonly) BOOL isLoadingMasterImage;
@property (readonly) BOOL isRenderingImage;
@property (retain, nonatomic) NSString *name;
@property (retain) PAImageItemViewMode *mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)_currentMode;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)_mode;
- (id)initWithAsset:(id)a0;
- (void)_setMode:(id)a0;
- (void)_updateViewport;
- (void)_updateDisplay:(id)a0;
- (id)initWithItemController:(id)a0;
- (void)attachToCanvasView;
- (void)detachFromCanvasView;
- (id)imageItem;
- (void)loadItem;
- (BOOL)_willLoadPreview:(id)a0;
- (BOOL)_isImageLoadedForQuality:(unsigned long long)a0;
- (id)imageItemController;
- (id)newImageItemView;
- (void)_imageItemViewDidChangeDisplay:(id)a0;
- (void)_imageItemViewDidChangeFrameSize:(id)a0;
- (id)imageItemView;
- (void)_updateViewportAfterDelay;
- (void)_updateAnimationStatus:(BOOL)a0;
- (void)_cancelLoadNextModeIfNeeded;
- (void)_resetLoadingState;
- (void)_notifyLoading;
- (BOOL)_canLoadModeWithConfiguration:(id)a0 display:(id)a1;
- (BOOL)loadModeIfNeeded;
- (BOOL)_loadModeIfNeeded;
- (BOOL)_shouldLoadModeWithConfiguration:(id)a0 display:(id)a1;
- (void)_loadModeWithConfiguration:(id)a0 display:(id)a1;
- (void)_didLoadModeWithSuccess:(BOOL)a0;
- (BOOL)willLoadPreview;
- (BOOL)isImageLoadedForQuality:(unsigned long long)a0;
- (BOOL)loadMode:(id)a0 completionHandler:(id /* block */)a1;
- (void)setupAssetClient:(id)a0 forMode:(id)a1 key:(id)a2;
- (void)updateOrientation;
- (void)_viewModeWillLoad:(unsigned long long)a0;
- (void)_viewModeDidLoad:(unsigned long long)a0 finalQuality:(unsigned long long)a1;
- (void)recordImageLoad:(unsigned long long)a0 finalQuality:(unsigned long long)a1;
- (void)_viewModeWillUpdateImage:(unsigned long long)a0;
- (void)_viewModeDidUpdateRegion:(id)a0 quality:(unsigned long long)a1 finalQuality:(unsigned long long)a2;
- (void)_loadingDidSwitchMode;
- (void)viewMode:(id)a0 willLoad:(unsigned long long)a1;
- (void)viewMode:(id)a0 didLoad:(unsigned long long)a1 finalQuality:(unsigned long long)a2;
- (void)viewMode:(id)a0 failedToLoadInputImage:(id)a1;
- (void)viewMode:(id)a0 willUpdateImage:(unsigned long long)a1;
- (void)viewMode:(id)a0 didUpdateRegion:(id)a1 quality:(unsigned long long)a2 finalQuality:(unsigned long long)a3;

@end
