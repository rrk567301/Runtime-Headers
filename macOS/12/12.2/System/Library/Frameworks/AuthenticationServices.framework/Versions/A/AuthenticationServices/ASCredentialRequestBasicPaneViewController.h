@class NSString, NSImage, ASCredentialRequestInfoLabelSubPane;

@interface ASCredentialRequestBasicPaneViewController : ASCredentialRequestPaneViewController {
    NSString *_title;
    NSString *_subtitle;
    NSImage *_icon;
    ASCredentialRequestInfoLabelSubPane *_subtitleSubPane;
}

- (void).cxx_destruct;
- (void)loadView;
- (void)_setUpView;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 icon:(id)a2;
- (void)_setUpIconView;
- (void)_setUpTitleLabel;
- (void)_setUpSubtitleLabel;
- (void)_addBottomFillerView;
- (void)_addTopFillerViewWithMargin:(double)a0;
- (void)updateSubtitle:(id)a0;

@end
