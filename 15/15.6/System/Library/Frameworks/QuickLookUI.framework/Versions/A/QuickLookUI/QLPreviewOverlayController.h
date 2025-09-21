@class NSTimer, NSString, NSArray, NSTrackingArea, CALayer, QLOverlayProgressButtonLayer, QLOverlayButtonLayer, QLOverlayView, NSObject, QLOverlayLoadingButtonLayer;
@protocol QLPreviewOverlayDataSource;

@interface QLPreviewOverlayController : NSObject <QLAccessibilityUIElementDelegate> {
    char _active;
    char _mouseOver;
    short _firstClick;
    unsigned long long _visibilityOptions;
    QLOverlayView *_overlayView;
    CALayer *_overlayLayer;
    NSTrackingArea *_overlayTrackingArea;
    QLOverlayProgressButtonLayer *_playButtonLayer;
    QLOverlayButtonLayer *_leftPageButtonLayer;
    QLOverlayLoadingButtonLayer *_rightPageButtonLayer;
    NSTimer *_progressTimer;
    char _canExpand;
}

@property (readonly) NSArray *accessibilityChildren;
@property (readonly) char useLayers;
@property (weak, nonatomic) NSObject<QLPreviewOverlayDataSource> *dataSource;
@property (readonly) char isActive;
@property unsigned long long visibilityOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)_defaultRolloverActivationDelay;
+ (id)keyPathsForValuesAffectingCanGoToNextPage;
+ (id)keyPathsForValuesAffectingCanGoToPreviousPage;
+ (id)keyPathsForValuesAffectingIsLoadingNextPage;
+ (double)overlayMinimumSupportedSize;
+ (unsigned long long)overlayTrackingAreaOptions;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)activate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_removeObservers;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)deactivate;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)windowWillClose:(id)a0;
- (char)worksWhenModal;
- (void)_addObservers;
- (void)goToNextPage:(id)a0;
- (void)goToPreviousPage:(id)a0;
- (void)mouseEntered;
- (char)mouseDownAtPoint:(struct CGPoint { double x0; double x1; })a0 clickCount:(long long)a1 dequeue:(char)a2;
- (void)mouseExited;
- (char)canGoToNextPage;
- (char)canGoToPreviousPage;
- (void)_removeOverlay;
- (char)isLoadingNextPage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForUIElementInParentSpace:(id)a0;
- (void)_cleanupAccessibilityForButtonLayer:(id)a0;
- (void)_createOverlay;
- (struct CGPoint { double x0; double x1; })_localPointFromDataSourceParent:(struct CGPoint { double x0; double x1; })a0;
- (char)_mouseDownAtLocalPoint:(struct CGPoint { double x0; double x1; })a0 clickCount:(long long)a1 dequeue:(char)a2;
- (void)_mouseEntered;
- (double)_rolloverActivationDelay;
- (void)_setShowOverlay:(char)a0 dimmed:(char)a1;
- (void)_setShowPlayButton:(char)a0 canExpand:(char)a1 showPageButtons:(char)a2;
- (void)_setupAccessibilityForButtonLayer:(id)a0 withLabel:(id)a1 andIdentifier:(id)a2;
- (char)_shouldDimOverlay;
- (char)_shouldShowOverlay;
- (void)_updateMouseOver;
- (void)_updateOverlay;
- (void)_updateOverlayVisibility;
- (void)_updatePlayButton;
- (char)accessibilityPerformPress:(id)a0;
- (id)accessibilityValueFor:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForUIElement:(id)a0;
- (char)hasControlAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)previewWindowDidResizeFrame:(id)a0;
- (void)togglePlay:(id)a0;
- (void)updateOverlayFrame;

@end
