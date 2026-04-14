@class IKImageBrowserView, IKImageBrowserCell;

@interface IKImageBrowserAccessibilityCell : NSObject {
    IKImageBrowserView *_browser;
    unsigned long long _index;
    IKImageBrowserCell *_cell;
}

- (void)dealloc;
- (unsigned long long)index;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (id)accessibilityActionNames;
- (id)cell;
- (id)browser;
- (id)initWithCell:(id)a0 atIndex:(unsigned long long)a1 inBrowser:(id)a2;

@end
