@interface SCRDrawer : SCRMapElement {
    long long _windowEdge;
}

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (char)isContainerElement;
- (char)performDefaultActionWithRequest:(id)a0 allowClick:(char)a1;

@end
