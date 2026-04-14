@class AOSUIBeneficiaryRadioListView, NSImage, NSView;

@interface AOSUIInheritanceShareAccessKeyOptionsViewModel : AOSUIAccountContactBaseViewModel {
    BOOL _shouldEnableFirstButtonOnLoad;
    BOOL _shouldShowHelpLinkAsTemplateButton;
    NSImage *_image;
    NSView *_contentView;
    long long _templateContentViewLayout;
}

@property (retain, nonatomic) AOSUIBeneficiaryRadioListView *radioView;

- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (id)image;
- (id)contentView;
- (void)setContentView:(id)a0;
- (id)initWithModel:(id)a0;
- (long long)templateContentViewLayout;
- (void)setTemplateContentViewLayout:(long long)a0;
- (BOOL)shouldEnableFirstButtonOnLoad;
- (BOOL)shouldShowHelpLinkAsTemplateButton;

@end
