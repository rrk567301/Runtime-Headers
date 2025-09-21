@class NSAppearance;

@interface NSCustomMenuItemView : NSContextMenuItemView {
    NSAppearance *_normalAppearance;
    id _rememberedFirstResponder;
}

@property char isDrawingOnly;
@property char isInitialized;
@property char isBecomingFirstResponder;
@property char isFilterView;

+ (char)clipsToBounds;
+ (id)keyEquivalentStringForItem:(id)a0 withFontPtr:(id *)a1;
+ (id)modifierStringForItem:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)layout;
- (void)setHighlighted:(char)a0;
- (char)_allowsContextMenus;
- (id)_applicableImage;
- (void)_commonInit;
- (void)_didChangeTitleFrom:(id)a0 to:(id)a1;
- (id)_enclosingMenuItem;
- (char)_isContainedInMenu;
- (char)_rememberAndResignFirstResponder;
- (char)_restoreOrBecomeFirstResponder;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_titleFieldFrameRect;
- (void)_updateKeyEquivalentIncludingAppearance:(char)a0;
- (void)_updateStateImage;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSeparatorIfNeeded;
- (void)layoutTitleIfNeeded;
- (id)opaqueAncestor;
- (void)viewDidMoveToWindow;

@end
