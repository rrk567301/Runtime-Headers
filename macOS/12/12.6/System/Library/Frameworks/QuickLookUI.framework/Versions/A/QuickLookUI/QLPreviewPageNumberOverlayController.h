@class NSTimer, NSObject;
@protocol QLPreviewPageNavigationDataSource;

@interface QLPreviewPageNumberOverlayController : QLPreviewTextOverlayController

@property (retain) NSTimer *displayTimer;
@property (nonatomic) NSObject<QLPreviewPageNavigationDataSource> *dataSource;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)hasRoundedCorners;
- (void)updateOverlayFrame;
- (void)_deactivatePageChangeObservation;
- (void)_stopShowingPageNumberOverlay:(id)a0;
- (void)_activatePageChangeObservation;
- (void)_startShowingPageNumberOverlay;

@end
