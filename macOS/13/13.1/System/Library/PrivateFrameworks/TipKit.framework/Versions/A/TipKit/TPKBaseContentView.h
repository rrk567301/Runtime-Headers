@class NSColor, _TtC6TipKit17UITraitCollection;

@interface TPKBaseContentView : NSView {
    void /* unknown type, empty encoding */ directionalEdgeInsets;
    void /* unknown type, empty encoding */ contentViewBackgroundColor;
    void /* unknown type, empty encoding */ viewModel;
}

@property (nonatomic) void /* unknown type, empty encoding */ directionalLayoutMargins;
@property (nonatomic, retain) _TtC6TipKit17UITraitCollection *traitCollection;
@property (nonatomic, retain) void /* unknown type, empty encoding */ hostingView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ viewDelegate;
@property (nonatomic, retain) void /* unknown type, empty encoding */ content;
@property (nonatomic, retain) NSColor *contentBackgroundColor;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } defaultDirectionalEdgeInsets;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewWillMoveToWindow:(id)a0;
- (void)contentSizeCategoryDidChange:(id)a0;
- (void)deviceOrientationDidChange:(id)a0;
- (id)initWithController:(id)a0 content:(id)a1;
- (void)resetHostingView;
- (void)updateContentBackgroundColor:(id)a0;
- (id)initWithReusableTipView:(id)a0;
- (void)setupHostingViewWithController:(id)a0 content:(id)a1;
- (id)createHostingView;
- (void)monitorContentSizeCategoryChanges;
- (void)updatePreferredDirectionEdgeInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a0;

@end
