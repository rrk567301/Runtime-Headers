@class NSString, NSImage, ASCredentialRequestInfoLabelSubPane;

@interface ASCredentialRequestBasicPaneViewController : ASCredentialRequestPaneViewController {
    NSString *_title;
    long long _titleStyle;
    NSString *_subtitle;
    long long _subtitleStyle;
    NSImage *_icon;
    long long _iconStyle;
    ASCredentialRequestInfoLabelSubPane *_subtitleSubPane;
}

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)_setUpSubtitleLabel;
- (void)_setUpIconView;
- (id)initWithTitle:(id)a0 titleStyle:(long long)a1 subtitle:(id)a2 subtitleStyle:(long long)a3 icon:(id)a4 iconStyle:(long long)a5;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 icon:(id)a2;
- (void)updateSubtitle:(id)a0;
- (void)_setUpTitleLabel;
- (BOOL)_useBoldTitleLayout;
- (double)_stackViewTopSpacing;
- (double)_boldTitle_stackViewTopSpacing;
- (double)_customSpacingAfterIcon;
- (double)_customSpacingAfterTitle;
- (double)_boldTitle_customSpacingAfterTitle;
- (double)_customSpacingAfterSubtitle;

@end
