@class NSCocoaMenuImpl, NSHorizontalMenuImpl, NSView, NSMenuItem;

@interface NSInlineMenuItemView : NSMenuItemView {
    NSHorizontalMenuImpl *_impl;
    NSView *_stackView;
    NSMenuItem *_menuItem;
}

@property (readonly) NSCocoaMenuImpl *hostedImpl;

+ (struct CGSize { double x0; double x1; })_imageSizeForItem:(id)a0;
+ (struct CGSize { double x0; double x1; })preferredSizeForMenu:(id)a0 horizontalOffset:(double)a1 height:(double)a2;

- (void).cxx_destruct;
- (id)menu;
- (id)_hostContextImpl;
- (id)_hostImpl;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_titleFieldFrameRect;
- (struct CGSize { double x0; double x1; })_titleIntrinsicSize;
- (BOOL)canBeHighlighted;
- (id)initWithItem:(id)a0 filterQuery:(id)a1;
- (void)layoutTitleIfNeeded;
- (id)menuItem;
- (void)mouseExited:(id)a0;
- (void)trackMouseEvent:(id)a0;
- (void)viewWillMoveToWindow:(id)a0;

@end
