@class VisualTabPickerShadowTileView, VisualTabPickerGridView, NSString, NSTextField;
@protocol VisualTabPickerTileContainerDataSource, VisualTabPickerTileContainerDelegate;

@interface VisualTabPickerTileContainerView : NSView <VisualTabPickerNewTabViewDelegate, VisualTabPickerThumbnailDataSource, VisualTabPickerThumbnailDelegate> {
    VisualTabPickerShadowTileView *_thumbnailView;
    NSTextField *_title;
    BOOL _didSetTileConstraints;
}

@property (weak, nonatomic) id<VisualTabPickerTileContainerDataSource> dataSource;
@property (weak, nonatomic) id<VisualTabPickerTileContainerDelegate> delegate;
@property (weak, nonatomic) VisualTabPickerGridView *visualTabPickerGridView;
@property (nonatomic) long long tileContainerType;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } thumbnailContainerFrame;
@property (nonatomic) BOOL visibleToUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (void)layout;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reloadData;
- (id)makeBackingLayer;
- (void)didSelectVisualTabPickerThumbnailView:(id)a0;
- (void)didCloseVisualTabPickerThumbnailView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 visualTabPickerGridView:(id)a1 containerType:(long long)a2;
- (id)_createTitleTextField;
- (void)_createNewTabContainerView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_containerTileFrame;
- (void)updateIcon;
- (void)didRequestNewTabForVisualTabPickerNewTabView:(id)a0;
- (void)cleanUpAnimations;
- (void)resetScaleFactor;
- (id)titleForVisualTabPickerThumbnailView:(id)a0;
- (id)viewForVisualTabPickerTileThumbnailView:(id)a0 lowResolution:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleBoundsForVisualTabPickerTileThumbnailView:(id)a0;
- (BOOL)shouldShowMuteButtonForVisualTabPickerTileThumbnailView:(id)a0;
- (long long)muteButtonStateForVisualTabPickerTileThumbnailView:(id)a0;
- (id)siteIconForVisualTabPickerThumbnailView:(id)a0;
- (BOOL)canCloseTabInVisualTabPickerThumbnailView:(id)a0;
- (void)didToggleMuteButtonInVisualTabPickerThumbnailView:(id)a0;
- (void)hideCloseButton;
- (void)animateSidebarWithImage:(id)a0 width:(double)a1 gridAnimation:(long long)a2;
- (void)animateToolbarWithImage:(id)a0 height:(double)a1 gridAnimation:(long long)a2;
- (void)updateMuteButton;
- (void)_setUpThumbnail;
- (void)_updateThumbnailLayout;

@end
