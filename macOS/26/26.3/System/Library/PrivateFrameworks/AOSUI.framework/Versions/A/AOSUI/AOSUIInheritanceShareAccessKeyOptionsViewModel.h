@class AOSUIBeneficiaryRadioListView, NSImage, NSView;

@interface AOSUIInheritanceShareAccessKeyOptionsViewModel : AOSUIAccountContactBaseViewModel {
    BOOL _shouldEnableFirstButtonOnLoad;
    BOOL _shouldShowHelpLinkAsTemplateButton;
    NSImage *_image;
    NSView *_contentView;
    long long _templateContentViewLayout;
}

@property (retain, nonatomic) AOSUIBeneficiaryRadioListView *radioView;

- (id)contentView;
- (void)setContentView:(id)a0;
- (void)setImage:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)image;
- (void)setTemplateContentViewLayout:(long long)a0;
- (BOOL)shouldEnableFirstButtonOnLoad;
- (BOOL)shouldShowHelpLinkAsTemplateButton;
- (long long)templateContentViewLayout;

@end
