@class NSToolbarItemViewer, NSString;

@interface _NSToolbarItemViewerLabelCellPopUpCell : NSPopUpButtonCell {
    NSString *_realTitle;
    NSToolbarItemViewer *_itemViewer;
    struct CGSize { double width; double height; } _cachedOutputCellSize;
    long long _state;
}

@property (weak) NSToolbarItemViewer *itemViewer;
@property BOOL showingRollover;

- (void).cxx_destruct;
- (long long)state;
- (void)setTitle:(id)a0;
- (long long)indexOfSelectedItem;
- (void)setState:(long long)a0;
- (long long)alignment;
- (void)setStringValue:(id)a0;
- (id)title;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityRoleAttribute;
- (id)accessibilityHelpAttribute;
- (id)accessibilityActionNames;
- (void)accessibilityPerformAction:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_needRedrawOnWindowChangedKeyState;
- (void)setFont:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initTextCell:(id)a0;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (int)_vibrancyBlendModeForControlView:(id)a0;
- (void)drawTitleWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)synchronizeTitleAndSelectedItem;
- (BOOL)_positionsMenuAsPullDown;
- (struct CGPoint { double x0; double x1; })_menuLocationForEvent:(id)a0 inCellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2;
- (BOOL)_accessibilityMenuFormRepresentationHasSubmenu;
- (BOOL)_accessibilityMenuFormRepresentationHasOwnTargetAction;
- (BOOL)_accessibilityMenuFormRepresentationHasSubmenuAndOwnTargetAction;
- (void)_setRealTitle:(id)a0;
- (void)beginUsingMenuFormRepresentation:(id)a0;
- (void)finishUsingMenuRepresentation;
- (void)_withConfiguredSharedCellInView:(id)a0 performBlock:(id /* block */)a1;
- (void)_drawRealTitleWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;

@end
