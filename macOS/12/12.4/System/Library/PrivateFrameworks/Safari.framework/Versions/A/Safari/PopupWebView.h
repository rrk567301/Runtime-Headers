@class WebExtensionToolbarItem, NSViewController;

@interface PopupWebView : WKWebView {
    NSViewController *_parentViewController;
    WebExtensionToolbarItem *_parentWebExtensionToolbarItem;
}

- (void).cxx_destruct;
- (void)invalidateIntrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1 parentViewController:(id)a2 parentWebExtensionToolbarItem:(id)a3;

@end
