@class NSView, NSMenuItem;

@interface NSMenuItemViewer : NSView {
    NSMenuItem *_menuItem;
    NSView *_menuItemView;
    struct { unsigned char settingSize : 1; unsigned char drawnFromCarbon : 1; unsigned char installedWidthConstraints : 1; unsigned int reserved : 29; } _menuItemViewerFlags;
    void *_hiView;
    struct CGSize { double width; double height; } _minimumViewSize;
    id _rememberedFirstResponder;
}

+ (Class)_classToCheckForRequiresConstraintBasedLayout;
+ (struct __CFString { } *)_getMenuItemViewerHIViewClassRegisteringIfNecessary;

- (void)dealloc;
- (id)accessibilityAttributeNames;
- (id)accessibilityParentAttribute;
- (id)accessibilityWindowAttribute;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateConstraints;
- (id)_menuItemView;
- (struct CGSize { double x0; double x1; })_minimumViewSize;
- (void *)_hiView;
- (id)opaqueAncestor;
- (BOOL)clipsToBounds;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forMenuItem:(id)a1;
- (void)_setMenuItemView:(id)a0;
- (void)_clearMenuItem;
- (id)_enclosingMenuItem;
- (BOOL)_isContainedInMenu;
- (id)_menuItem;
- (BOOL)wantsDefaultClipping;
- (void)_menuItemViewFrameChanged:(id)a0;
- (void)_setHIView:(void *)a0;
- (BOOL)_rememberAndResignFirstResponder;
- (BOOL)_restoreOrBecomeFirstResponder;

@end
