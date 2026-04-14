@class NSString;

@interface AppKit._NSSuggestionsMenuWindowController : NSWindowController <AppKit._NSConstrainedFrameWindowDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_menuViewController;
    void /* unknown type, empty encoding */ visualEffectView;
}

@property (nonatomic, readonly) NSString *windowNibName;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithWindow:(id)a0;
- (BOOL)_window:(id)a0 shouldCloseForClosingParentPopoverWindowWithTransientContext:(BOOL)a1;
- (void)loadWindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })window:(id)a0 willSetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)windowDidLoad;

@end
