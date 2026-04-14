@class NSString, NSView, NSTextField;

@interface AOSUICustodianHelpNowViewModel : AOSUIAccountContactBaseViewModel {
    NSString *_title;
    NSString *_primaryButton;
    NSString *_secondaryButton;
    NSString *_detailText;
    long long _templateContentViewLayout;
    NSView *_contentView;
}

@property (retain, nonatomic) NSTextField *codeView;

- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (id)title;
- (id)contentView;
- (void)setContentView:(id)a0;
- (id)detailText;
- (id)initWithModel:(id)a0;
- (void)setDetailText:(id)a0;
- (id)primaryButton;
- (void)setPrimaryButton:(id)a0;
- (id)secondaryButton;
- (void)setSecondaryButton:(id)a0;
- (long long)templateContentViewLayout;
- (void)setTemplateContentViewLayout:(long long)a0;
- (void)_configureCodeView;

@end
