@class NSString, QLIndexSheetView, QLControlsController;
@protocol QLIndexSheetDelegate;

@interface QLIndexSheetController : NSObject <QLIndexSheetViewDelegate, QLControlsDelegate> {
    QLIndexSheetView *_indexSheetView;
}

@property id<QLIndexSheetDelegate> delegate;
@property QLControlsController *controlsController;
@property (readonly) int status;
@property (readonly) QLIndexSheetView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingStatus;

- (void)dealloc;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)_setup;
- (void)goToNextPage:(id)a0;
- (void)goToPreviousPage:(id)a0;
- (void)_forwardToDelegate:(SEL)a0;
- (void)setPreviewItems:(id)a0 withVisibleIndex:(long long)a1;
- (void)activateIndexSheetWithAnimation:(BOOL)a0 forItemAtIndex:(unsigned long long)a1;
- (void)deactivateIndexSheetWithAnimation:(BOOL)a0 forItemAtIndex:(unsigned long long)a1;
- (void)invalidateContentsOfThumbnailLayerForIndex:(unsigned long long)a0;
- (void)indexSheetWillActivate:(id)a0;
- (void)indexSheetDidActivate:(id)a0;
- (void)indexSheetWillDeactivate:(id)a0;
- (void)indexSheetDidDeactivate:(id)a0;
- (void)_updateControls;
- (id)_indexSheetTransitionLayerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (void)_activateControls;
- (void)_deactivateControls;
- (BOOL)_controlsActivated;

@end
