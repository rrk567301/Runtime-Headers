@class AOSUIBeneficiaryRadioListView, NSImage, NSView;

@interface AOSUIInheritanceShareAccessKeyOptionsViewModel : AOSUIAccountContactBaseViewModel {
    BOOL _shouldEnableFirstButtonOnLoad;
    BOOL _shouldShowHelpLinkAsTemplateButton;
    NSImage *_image;
    NSView *_contentView;
    long long _templateContentViewLayout;
}

@property (retain, nonatomic) AOSUIBeneficiaryRadioListView *radioView;

- (id)image;
- (id)contentView;
- (void)setImage:(id)a0;
- (id)initWithModel:(id)a0;
- (void)setContentView:(id)a0;
- (void).cxx_destruct;
- (void)setTemplateContentViewLayout:(long long)a0;
- (BOOL)shouldEnableFirstButtonOnLoad;
- (BOOL)shouldShowHelpLinkAsTemplateButton;
- (long long)templateContentViewLayout;

@end
