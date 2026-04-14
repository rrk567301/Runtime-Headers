@class NSArray, NSString, NSTrackingArea, NSView, NSThemeFrame, NSMutableArray;

@interface NSTitlebarView : NSView <NSWindowScrollPocketElementProviding, WindowSectionDelegate> {
    BOOL _transparent;
    NSTrackingArea *_buttonGroupTrackingArea;
    NSMutableArray *_sectionBackgroundViews;
    NSMutableArray *_sectionBackgroundViewGroupNames;
    NSView *_captureBackdropHostingView;
}

@property (readonly, copy) NSArray *_scrollPocketElements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSThemeFrame *associatedThemeFrame;
@property (getter=isTransparent) BOOL transparent;
@property (nonatomic) BOOL hasSidebar;
@property (nonatomic) BOOL hasTrailingSidebar;
@property (nonatomic) long long blendingMode;
@property (copy, nonatomic) NSString *titleGroupName;

- (void)setState:(long long)a0;
- (void)mouseDown:(id)a0;
- (void)viewWillMoveToWindow:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layout;
- (void)updateTrackingAreas;
- (void)viewDidMoveToWindow;
- (long long)_material;
- (id)menuForEvent:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)_vibrantBlendingStyleForSubtree;
- (void)rightMouseDown:(id)a0;
- (id)_updateSectionGroupNames:(id)a0 views:(id)a1;
- (void)updateSections:(id)a0;
- (id)_hitTestForEvent:(id)a0;
- (void)_installBackdropLayer;
- (BOOL)_isHUDWindow;
- (BOOL)_isTitlebarAssociatedScrollPocketElementContainer;
- (id)_preferredAppearance;
- (void)_removeTrackingAreaIfNeeded;
- (id)_titleTextFieldView;
- (void)_updateSectionBackgroundViewFrames:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateSectionBackgroundViews:(id)a0;
- (void)_updateSectionGroupNames;
- (void)_updateSectionTransparency;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)accessibilityChildrenAttribute;
- (BOOL)accessibilityIsIgnored;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)resizeWithOldSuperviewSize:(struct CGSize { double x0; double x1; })a0;
- (void)sectionAtIndex:(unsigned long long)a0 proposeBackgroundExtentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setMaterial:(long long)a0;
- (void)updateMaterialForSection:(id)a0 atIndex:(unsigned long long)a1;
- (void)updateTransparency;

@end
