@class NSView, NSString, NSTrackingArea, CNAvatarViewModel, NSMutableArray, CNContactIconViewModel, NSMapTable, CNAvatarViewController;

@interface CNAvatarView : NSView <NSDraggingDestination, CNAvatarUpdating>

@property (retain) CNAvatarViewModel *viewModel;
@property (retain) CNContactIconViewModel *templateIconViewModel;
@property (retain) NSMapTable *iconViewModels;
@property (retain) NSMutableArray *iconViews;
@property (retain) NSView *editOverlayView;
@property (retain) NSTrackingArea *editOverlayTrackingArea;
@property (weak) CNAvatarViewController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (unsigned long long)draggingEntered:(id)a0;
- (BOOL)performDragOperation:(id)a0;
- (void)setBackgroundStyle:(long long)a0;
- (void)_commonInit;
- (void)updateTrackingAreas;
- (BOOL)prepareForDragOperation:(id)a0;
- (void)setSelected:(BOOL)a0;
- (void)resizeSubviewsWithOldSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)enableGroupPhoto;
- (void)setupIconViewsWithCount:(unsigned long long)a0;
- (void)updateViewModelForIconView:(id)a0 contact:(id)a1 likeness:(id)a2 style:(unsigned long long)a3 monogramOnly:(BOOL)a4;
- (BOOL)shouldShowEditOverlayOnHover;
- (void)displayEditOverlayView;
- (void)removeEditOverlayView;
- (BOOL)isValidDropTarget;
- (void)viewModelDidUpdate:(id)a0;
- (void)updateIconPlacement;
- (void)updateIconViewsHierarchy;
- (void)updateIconFramesWithContainerSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateIconMasksWithContainerSize:(struct CGSize { double x0; double x1; })a0;
- (id)firstIconView;
- (BOOL)canAcceptPasteboard:(id)a0;
- (id)initWithViewModel:(id)a0;
- (void)setDefaultBackgroundStyle:(long long)a0;
- (void)setEditOverlayShown:(BOOL)a0;

@end
