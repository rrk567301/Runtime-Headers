@class LPCaptionButtonPresentationProperties, LPButtonStyle, NSButton, NSSegmentedControl;

@interface LPCaptionBarButtonView : LPComponentView {
    LPCaptionButtonPresentationProperties *_properties;
    LPButtonStyle *_style;
    NSButton *_button;
    NSButton *_collapsedButton;
    NSSegmentedControl *_segmentedControl;
}

@property (nonatomic, getter=isCollapsed) char collapsed;

- (void).cxx_destruct;
- (void)performAction:(id)a0;
- (void)addTarget:(id)a0 action:(SEL)a1;
- (void)removeTarget:(id)a0 action:(SEL)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)createButton;
- (id)initWithHost:(id)a0;
- (void)_menuButtonChanged:(id)a0;
- (char)_menuButtonShowsChevron;
- (char)_menuButtonShowsImages;
- (char)_menuButtonShowsIndicator;
- (char)_menuButtonShowsSingleImage;
- (struct CGSize { double x0; double x1; })collapsedSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)configureMenuButton:(id)a0;
- (void)configurePillButton:(id)a0;
- (void)configureSegmentedControl:(id)a0;
- (id)createCollapsedButton;
- (id)createSegmentedControl;
- (char)hasAnyText;
- (id)initWithHost:(id)a0 properties:(id)a1 style:(id)a2;
- (void)layoutComponentView;
- (void)selectAction:(id)a0;
- (char)shouldShowDownloadingIndicator;
- (void)updateProgressIndicator;

@end
