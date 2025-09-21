@class LPCaptionButtonPresentationProperties, LPButtonStyle, NSButton, NSSegmentedControl;

@interface LPCaptionBarButtonView : LPComponentView {
    LPCaptionButtonPresentationProperties *_properties;
    LPButtonStyle *_style;
    NSButton *_button;
    NSButton *_collapsedButton;
    NSSegmentedControl *_segmentedControl;
}

@property (nonatomic, getter=isCollapsed) BOOL collapsed;

- (id)initWithHost:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)removeTarget:(id)a0 action:(SEL)a1;
- (void).cxx_destruct;
- (void)performAction:(id)a0;
- (void)addTarget:(id)a0 action:(SEL)a1;
- (id)createButton;
- (void)_didPressSingleActionMenuButton:(id)a0;
- (void)_menuButtonChanged:(id)a0;
- (BOOL)_menuButtonShowsChevron;
- (BOOL)_menuButtonShowsImages;
- (BOOL)_menuButtonShowsIndicator;
- (BOOL)_menuButtonShowsSingleImage;
- (struct CGSize { double x0; double x1; })collapsedSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)configureButton:(id)a0 withAction:(id)a1;
- (void)configureMenuButton:(id)a0;
- (void)configurePillButton:(id)a0;
- (void)configureSegmentedControl:(id)a0;
- (id)createCollapsedButton;
- (id)createSegmentedControl;
- (BOOL)hasAnyText;
- (id)initWithHost:(id)a0 properties:(id)a1 style:(id)a2;
- (void)layoutComponentView;
- (void)selectAction:(id)a0;
- (BOOL)shouldShowDownloadingIndicator;
- (void)updateProgressIndicator;

@end
