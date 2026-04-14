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
- (id)initWithTitle:(id)a0 titleStyle:(long long)a1 subtitle:(id)a2 subtitleStyle:(long long)a3 icon:(id)a4 iconStyle:(long long)a5;
- (void)updateSubtitle:(id)a0;
- (double)_boldTitle_customSpacingAfterTitle;
- (double)_boldTitle_stackViewTopSpacing;
- (double)_customSpacingAfterIcon;
- (double)_customSpacingAfterSubtitle;
- (double)_customSpacingAfterTitle;
- (void)_setUpIconView;
- (void)_setUpSubtitleLabel;
- (void)_setUpTitleLabel;
- (double)_stackViewTopSpacing;
- (BOOL)_useBoldTitleLayout;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 icon:(id)a2;

@end
