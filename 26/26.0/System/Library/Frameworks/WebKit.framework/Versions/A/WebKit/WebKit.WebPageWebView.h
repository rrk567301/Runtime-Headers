@class NSString;

@interface WebKit.WebPageWebView : WKWebView {
    void /* unknown type, empty encoding */ delegate;
}

@property (nonatomic, readonly) NSString *_nameForVisualIdentificationOverlay;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1;

@end
