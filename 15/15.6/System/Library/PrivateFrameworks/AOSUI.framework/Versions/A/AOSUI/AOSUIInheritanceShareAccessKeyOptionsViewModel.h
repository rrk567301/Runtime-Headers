@class AOSUIBeneficiaryRadioListView, NSImage, NSView;

@interface AOSUIInheritanceShareAccessKeyOptionsViewModel : AOSUIAccountContactBaseViewModel {
    char _shouldEnableFirstButtonOnLoad;
    char _shouldShowHelpLinkAsTemplateButton;
    NSImage *_image;
    NSView *_contentView;
    long long _templateContentViewLayout;
}

@property (retain, nonatomic) AOSUIBeneficiaryRadioListView *radioView;

- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (id)image;
- (void)setContentView:(id)a0;
- (id)contentView;
- (id)initWithModel:(id)a0;
- (void)setTemplateContentViewLayout:(long long)a0;
- (char)shouldEnableFirstButtonOnLoad;
- (char)shouldShowHelpLinkAsTemplateButton;
- (long long)templateContentViewLayout;

@end
