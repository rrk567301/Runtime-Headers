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

- (id)contentView;
- (void)setContentView:(id)a0;
- (id)secondaryButton;
- (id)initWithModel:(id)a0;
- (id)title;
- (void).cxx_destruct;
- (void)setSecondaryButton:(id)a0;
- (void)setTitle:(id)a0;
- (id)detailText;
- (void)setDetailText:(id)a0;
- (id)primaryButton;
- (void)setPrimaryButton:(id)a0;
- (void)_configureCodeView;
- (void)setTemplateContentViewLayout:(long long)a0;
- (long long)templateContentViewLayout;

@end
