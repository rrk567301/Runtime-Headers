@class NSString, NSView, VisualTabPickerShadowTileView;
@protocol VisualTabPickerTileContainerViewTransitionCoordinatorDataSource;

@interface VisualTabPickerTileContainerViewTransitionCoordinator : NSObject <VisualTabPickerTransitioning> {
    NSView *_lowResolutionThumbnailOverlayView;
    VisualTabPickerShadowTileView *_thumbnailView;
}

@property (readonly, weak, nonatomic) id<VisualTabPickerTileContainerViewTransitionCoordinatorDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataSource:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setTransitionProgress:(float)a0;
- (void)_updateToolbarTransition;
- (void)transitionDidEnd;
- (void)transitionWillBegin;

@end
