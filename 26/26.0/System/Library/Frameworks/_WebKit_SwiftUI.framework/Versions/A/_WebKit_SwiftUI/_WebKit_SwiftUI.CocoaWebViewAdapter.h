@class NSView;

@interface _WebKit_SwiftUI.CocoaWebViewAdapter : NSView <NSTextFinderBarContainer> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_findInteraction;
    void /* unknown type, empty encoding */ findContext;
    void /* unknown type, empty encoding */ scrollPosition;
    void /* unknown type, empty encoding */ onScrollGeometryChange;
    void /* unknown type, empty encoding */ currentScrollGeometry;
    void /* unknown type, empty encoding */ webViewConstraints;
    void /* unknown type, empty encoding */ findBarConstraints;
    void /* unknown type, empty encoding */ webViewHeightConstraint;
    void /* unknown type, empty encoding */ webView;
}

@property (nonatomic) BOOL findBarVisible;
@property (nonatomic, retain) NSView *findBarView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)contentView;
- (void).cxx_destruct;
- (void)findBarViewDidChangeHeight;
- (BOOL)isFindBarVisible;
- (void)performFindPanelAction:(id)a0;

@end
