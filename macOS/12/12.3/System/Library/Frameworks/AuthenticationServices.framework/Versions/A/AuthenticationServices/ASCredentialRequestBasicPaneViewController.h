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
- (void)_setUpSubtitleLabel;
- (void)_setUpIconView;
- (void)updateSubtitle:(id)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 icon:(id)a2;
- (void)_setUpTitleLabel;
- (void)_addBottomFillerView;
- (void)_addTopFillerViewWithMargin:(double)a0;

@end
