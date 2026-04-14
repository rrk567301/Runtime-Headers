@interface NSAccessibilityReparentingProxy : NSAccessibilityProxy {
    id _realElement;
    id _fauxParent;
}

+ (id)proxyFor:(id)a0 fauxParent:(id)a1;

- (id)description;
- (void)dealloc;
- (id)accessibilityParentAttribute;
- (id)initWithElement:(id)a0 fauxParent:(id)a1;
- (id)realElement;

@end
