@interface _NSBrowserTitlesContainerView : NSView

- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityHelpStringForChild:(id)a0;
- (BOOL)accessibilityIsChildFocusable:(id)a0;
- (id)accessibilityPositionOfChild:(id)a0;
- (id)accessibilitySizeOfChild:(id)a0;
- (id)accessibilityChildrenAttribute;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_enclosingBrowserView;
- (id)_accessibilityTitleForColumn:(long long)a0;

@end
