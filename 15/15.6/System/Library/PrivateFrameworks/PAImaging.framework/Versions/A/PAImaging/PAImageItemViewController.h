@class PAImageItemViewMode, NSString, PATimer, NSObject, PFTimeIntervalCoalescer;
@protocol OS_dispatch_queue;

@interface PAImageItemViewController : PAItemViewController <PAImageAssetClientDelegate> {
    NSObject<OS_dispatch_queue> *_loadStatusQueue;
    PATimer *_loadTimer;
    PATimer *_startTimer;
    int _loadState;
    PATimer *_renderTimer;
    PATimer *_shutdownTimer;
    PFTimeIntervalCoalescer *_viewportUpdateCoalescer;
    char _viewportUpdatesEnabled;
    char _isOutOfDate;
    unsigned long long _pendingUpdates;
    NSObject<OS_dispatch_queue> *_modeQueue;
    PAImageItemViewMode *_currentMode;
    char _isSwitchingMode;
    char _isLoadingMode;
}

@property (readonly) char isLoadingMasterImage;
@property (readonly) char isRenderingImage;
@property (retain, nonatomic) NSString *name;
@property (retain) PAImageItemViewMode *mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithAsset:(id)a0;
- (id)_mode;
- (void)_setMode:(id)a0;
- (void)_updateViewport;
- (void)_imageItemViewDidChangeDisplay:(id)a0;
- (void)_updateDisplay:(id)a0;
- (char)willLoadPreview;
- (char)_canLoadModeWithConfiguration:(id)a0 display:(id)a1;
- (void)_cancelLoadNextModeIfNeeded;
- (id)_currentMode;
- (void)_didLoadModeWithSuccess:(char)a0;
- (void)_imageItemViewDidChangeFrameSize:(id)a0;
- (char)_isImageLoadedForQuality:(unsigned long long)a0;
- (char)_loadModeIfNeeded;
- (void)_loadModeWithConfiguration:(id)a0 display:(id)a1;
- (void)_loadingDidSwitchMode;
- (void)_notifyLoading;
- (void)_resetLoadingState;
- (char)_shouldLoadModeWithConfiguration:(id)a0 display:(id)a1;
- (void)_updateAnimationStatus:(char)a0;
- (void)_updateViewportAfterDelay;
- (void)_viewModeDidLoad:(unsigned long long)a0 finalQuality:(unsigned long long)a1;
- (void)_viewModeDidUpdateRegion:(id)a0 quality:(unsigned long long)a1 finalQuality:(unsigned long long)a2;
- (void)_viewModeWillLoad:(unsigned long long)a0;
- (void)_viewModeWillUpdateImage:(unsigned long long)a0;
- (char)_willLoadPreview:(id)a0;
- (void)attachToCanvasView;
- (void)detachFromCanvasView;
- (id)imageItem;
- (id)imageItemController;
- (id)imageItemView;
- (id)initWithItemController:(id)a0;
- (char)isImageLoadedForQuality:(unsigned long long)a0;
- (void)loadItem;
- (char)loadMode:(id)a0 completionHandler:(id /* block */)a1;
- (char)loadModeIfNeeded;
- (id)newImageItemView;
- (void)recordImageLoad:(unsigned long long)a0 finalQuality:(unsigned long long)a1;
- (void)setupAssetClient:(id)a0 forMode:(id)a1 key:(id)a2;
- (void)updateOrientation;
- (void)viewMode:(id)a0 didLoad:(unsigned long long)a1 finalQuality:(unsigned long long)a2;
- (void)viewMode:(id)a0 didUpdateRegion:(id)a1 quality:(unsigned long long)a2 finalQuality:(unsigned long long)a3;
- (void)viewMode:(id)a0 failedToLoadInputImage:(id)a1;
- (void)viewMode:(id)a0 willLoad:(unsigned long long)a1;
- (void)viewMode:(id)a0 willUpdateImage:(unsigned long long)a1;

@end
