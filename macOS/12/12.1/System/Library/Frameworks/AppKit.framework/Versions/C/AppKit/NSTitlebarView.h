@class NSString, NSView, NSTrackingArea, NSThemeFrame, NSMutableArray;

@interface NSTitlebarView : NSView <WindowSectionDelegate> {
    BOOL _transparent;
    NSTrackingArea *_buttonGroupTrackingArea;
    NSMutableArray *_sectionBackgroundViews;
    NSMutableArray *_sectionBackgroundViewGroupNames;
    NSView *_captureBackdropHostingView;
}

@property (weak) NSThemeFrame *associatedThemeFrame;
@property (getter=isTransparent) BOOL transparent;
@property (nonatomic) BOOL hasSidebar;
@property (nonatomic) BOOL hasTrailingSidebar;
@property (nonatomic) long long blendingMode;
@property (copy, nonatomic) NSString *titleGroupName;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setState:(long long)a0;
- (void)layout;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)_preferredAppearance;
- (void)mouseDown:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (id)accessibilityChildrenAttribute;
- (void)rightMouseDown:(id)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setMaterial:(long long)a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)menuForEvent:(id)a0;
- (unsigned long long)_vibrantBlendingStyleForSubtree;
- (void)updateTrackingAreas;
- (void)viewWillMoveToWindow:(id)a0;
- (BOOL)_isHUDWindow;
- (void)resizeWithOldSuperviewSize:(struct CGSize { double x0; double x1; })a0;
- (long long)_material;
- (void)_updateSectionTransparency;
- (BOOL)_shouldBeTreatedAsInkEventInInactiveWindow:(id)a0;
- (void)_installBackdropLayer;
- (void)_updateSectionBackgroundViews:(id)a0;
- (void)_updateSectionBackroundViewHeights:(double)a0;
- (void)_updateSectionGroupNames;
- (void)_removeTrackingAreaIfNeeded;
- (void)updateMaterialForSection:(id)a0 atIndex:(unsigned long long)a1;
- (void)sectionAtIndex:(unsigned long long)a0 didChangeDividerExtentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)updateSections:(id)a0;
- (id)_titleTextFieldView;

@end
