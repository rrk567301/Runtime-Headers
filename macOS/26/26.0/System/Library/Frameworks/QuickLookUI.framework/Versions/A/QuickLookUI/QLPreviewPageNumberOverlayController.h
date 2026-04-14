@class NSTimer, NSObject;
@protocol QLPreviewPageNavigationDataSource;

@interface QLPreviewPageNumberOverlayController : QLPreviewTextOverlayController

@property (retain) NSTimer *displayTimer;
@property (weak, nonatomic) NSObject<QLPreviewPageNavigationDataSource> *dataSource;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (BOOL)hasRoundedCorners;
- (void)_activatePageChangeObservation;
- (void)_deactivatePageChangeObservation;
- (void)_startShowingPageNumberOverlay;
- (void)_stopShowingPageNumberOverlay:(id)a0;
- (void)updateOverlayFrame;

@end
