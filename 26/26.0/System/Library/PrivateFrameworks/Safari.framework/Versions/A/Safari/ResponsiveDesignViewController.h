@class NSString, ResponsiveDesignContainerView, WKWebView, NSLayoutConstraint, ResponsiveDesignShelfViewController, WindowBackdropVisualEffectView;

@interface ResponsiveDesignViewController : NSViewController <ResponsiveDesignContainerViewDelegate> {
    ResponsiveDesignShelfViewController *_shelfViewController;
    WindowBackdropVisualEffectView *_visualEffectView;
    ResponsiveDesignContainerView *_responsiveDesignContainerView;
    NSLayoutConstraint *_visualEffectViewTopConstraint;
    BOOL _ignoreDisplayBrowserSizeChange;
}

@property (nonatomic) struct CGSize { double x0; double x1; } browserSize;
@property (nonatomic) unsigned long long pixelRatio;
@property (readonly, nonatomic) WKWebView *webView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithWebView:(id)a0;
- (void).cxx_destruct;
- (void)viewFrameChanged:(id)a0;
- (void)viewWillAppear;
- (void)magnifyToFitResponsiveDesignContainerView;
- (void)responsiveDesignContainerView:(id)a0 didChangeBrowserSize:(struct CGSize { double x0; double x1; })a1;
- (id)snapHeightsForResponsiveDesignContainerView:(id)a0;
- (id)snapWidthsForResponsiveDesignContainerView:(id)a0;

@end
