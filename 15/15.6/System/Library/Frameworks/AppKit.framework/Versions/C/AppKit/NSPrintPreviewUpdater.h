@class NSMapTable, NSPrintOperation;

@interface NSPrintPreviewUpdater : NSObject

@property (retain) NSPrintOperation *printOperation;
@property (retain) NSMapTable *observedKeyPathsPerAccessoryController;
@property char isPreviewing;
@property char isFullyValidated;
@property char isInStartOrStop;
@property char isPrintInfoReady;
@property char realPrintingHasBegun;
@property (readonly) char isPreviewRenderingAllowed;
@property long long ignoreKVOCount;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_stopPreviewing;
- (void)_cancelDeferredPrintPreviewUpdate;
- (void)_forceUpdateThumbnailsNow;
- (void)_printInfoDidChange:(id)a0;
- (void)_startObservingAccessoryControllersIfNecessary;
- (void)_startObservingPrintInfoDidChangeNotifications;
- (void)_startPreviewing;
- (void)_stopObservingAccessoryControllersIfNecessary;
- (void)_stopObservingPrintInfoDidChangeNotifications;
- (void)_updatePrintPreviewDeferred;
- (void)_updatePrintPreviewNow:(id)a0;
- (id)initWithOperation:(id)a0;
- (void)printInfoChurnHasEnded;
- (void)teardownForRealPrinting;

@end
