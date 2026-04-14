@class CHSInlineTextParameters;

@interface ChronoKit.WidgetPreviewHostingViewController : ChronoKit.PreviewHostingViewController {
    void /* unknown type, empty encoding */ timeline;
    void /* unknown type, empty encoding */ delegateProxy;
    void /* unknown type, empty encoding */ autoupdatingPreviewView;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ tintParameters;
@property (nonatomic, retain) CHSInlineTextParameters *inlineTextParameters;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)viewWillLayout;
- (void)viewWillAppear;
- (void)viewDidDisappear;

@end
