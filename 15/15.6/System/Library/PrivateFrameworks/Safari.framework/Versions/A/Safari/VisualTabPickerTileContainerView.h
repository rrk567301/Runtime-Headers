@class VisualTabPickerShadowTileView, VisualTabPickerGridView, NSImage, NSString, NSTextField;
@protocol VisualTabPickerTileContainerDataSource, VisualTabPickerTileContainerDelegate;

@interface VisualTabPickerTileContainerView : NSView <VisualTabPickerNewTabViewDelegate, VisualTabPickerThumbnailDataSource, VisualTabPickerThumbnailDelegate, VisualTabPickerTileContainerViewTransitionCoordinatorDataSource> {
    VisualTabPickerShadowTileView *_thumbnailView;
    NSTextField *_title;
    char _didSetTileConstraints;
}

@property (weak, nonatomic) id<VisualTabPickerTileContainerDataSource> dataSource;
@property (weak, nonatomic) id<VisualTabPickerTileContainerDelegate> delegate;
@property (weak, nonatomic) VisualTabPickerGridView *visualTabPickerGridView;
@property (nonatomic) long long tileContainerType;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } thumbnailContainerFrame;
@property (nonatomic) char visibleToUser;
@property (retain, nonatomic) NSImage *toolbarSnapshot;
@property (nonatomic, getter=isFocused) char focused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setHidden:(char)a0;
- (void)layout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_containerTileFrame;
- (void)_createNewTabContainerView;
- (id)_createTitleTextField;
- (void)didCloseVisualTabPickerThumbnailView:(id)a0;
- (void)didSelectVisualTabPickerThumbnailView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 visualTabPickerGridView:(id)a1 containerType:(long long)a2;
- (id)makeBackingLayer;
- (void)reloadData;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateIcon;
- (void)_setUpThumbnail;
- (void)hideCloseButton;
- (void)_updateThumbnailLayout;
- (void)animateSidebarWithImage:(id)a0 width:(double)a1 gridAnimation:(long long)a2;
- (void)animateToolbarWithImage:(id)a0 height:(double)a1 gridAnimation:(long long)a2;
- (char)canCloseTabInVisualTabPickerThumbnailView:(id)a0;
- (void)cleanUpAnimations;
- (void)didRequestNewTabForVisualTabPickerNewTabView:(id)a0;
- (void)didToggleMuteButtonInVisualTabPickerThumbnailView:(id)a0;
- (id)lowResolutionThumbnailOverlayViewForTransitionWithCoordinator:(id)a0;
- (id)makeTransitionCoordinator;
- (long long)muteButtonStateForVisualTabPickerTileThumbnailView:(id)a0;
- (void)resetScaleFactor;
- (char)shouldScaleDownVisualTabPickerThumbnailView:(id)a0;
- (char)shouldShowMuteButtonForVisualTabPickerTileThumbnailView:(id)a0;
- (id)siteIconForVisualTabPickerThumbnailView:(id)a0;
- (void)tearDownCloseButton;
- (id)thumbnailViewForTransitionWithCoordinator:(id)a0;
- (char)tileShouldFadeDuringTransitionWithCoordinator:(id)a0;
- (id)titleForVisualTabPickerThumbnailView:(id)a0;
- (void)updateMuteButton;
- (id)viewForVisualTabPickerTileThumbnailView:(id)a0 lowResolution:(char)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleBoundsForVisualTabPickerTileThumbnailView:(id)a0;

@end
