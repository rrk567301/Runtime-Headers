@class CHSInlineTextParameters;

@interface ChronoKit.WidgetPreviewHostingViewController : ChronoKit.PreviewHostingViewController {
    void /* unknown type, empty encoding */ timeline;
    void /* unknown type, empty encoding */ delegateProxy;
    void /* unknown type, empty encoding */ autoupdatingPreviewView;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ tintParameters;
@property (nonatomic, retain) CHSInlineTextParameters *inlineTextParameters;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)viewWillLayout;

@end
