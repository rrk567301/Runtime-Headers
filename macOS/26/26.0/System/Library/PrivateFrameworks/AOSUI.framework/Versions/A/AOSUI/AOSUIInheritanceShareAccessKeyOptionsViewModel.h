@class AOSUIBeneficiaryRadioListView, NSImage, NSView;

@interface AOSUIInheritanceShareAccessKeyOptionsViewModel : AOSUIAccountContactBaseViewModel {
    BOOL _shouldEnableFirstButtonOnLoad;
    BOOL _shouldShowHelpLinkAsTemplateButton;
    NSImage *_image;
    NSView *_contentView;
    long long _templateContentViewLayout;
}

@property (retain, nonatomic) AOSUIBeneficiaryRadioListView *radioView;

- (void)setImage:(id)a0;
- (void)setContentView:(id)a0;
- (id)image;
- (id)initWithModel:(id)a0;
- (id)contentView;
- (void).cxx_destruct;
- (void)setTemplateContentViewLayout:(long long)a0;
- (BOOL)shouldEnableFirstButtonOnLoad;
- (BOOL)shouldShowHelpLinkAsTemplateButton;
- (long long)templateContentViewLayout;

@end
