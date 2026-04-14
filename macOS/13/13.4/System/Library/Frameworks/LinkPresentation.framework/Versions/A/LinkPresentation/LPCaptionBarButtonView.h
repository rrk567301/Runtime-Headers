@class LPCaptionButtonPresentationProperties, LPButtonStyle, NSButton;

@interface LPCaptionBarButtonView : LPComponentView {
    LPCaptionButtonPresentationProperties *_properties;
    LPButtonStyle *_style;
    NSButton *_button;
    NSButton *_collapsedButton;
}

@property (nonatomic, getter=isCollapsed) BOOL collapsed;
@property (nonatomic) double progress;

- (void).cxx_destruct;
- (BOOL)isFinished;
- (void)addTarget:(id)a0 action:(SEL)a1;
- (void)removeTarget:(id)a0 action:(SEL)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isUpdating;
- (id)_createButton;
- (id)initWithHost:(id)a0;
- (void)_configureMenuButton:(id)a0;
- (void)_configurePillButton:(id)a0;
- (id)_createCollapsedButton;
- (void)_menuButtonChanged:(id)a0;
- (BOOL)_menuButtonShowsChevron;
- (BOOL)_menuButtonShowsImages;
- (BOOL)_menuButtonShowsIndicator;
- (BOOL)_menuButtonShowsSingleImage;
- (struct CGSize { double x0; double x1; })collapsedSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithHost:(id)a0 properties:(id)a1 style:(id)a2;
- (void)layoutComponentView;
- (void)updateProgressIndicator;

@end
