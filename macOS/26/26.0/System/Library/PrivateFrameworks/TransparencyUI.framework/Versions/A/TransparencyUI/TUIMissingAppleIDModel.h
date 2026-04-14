@class NSString;

@interface TUIMissingAppleIDModel : TUIWelcomeControllerModel {
    NSString *_symbolName;
    NSString *_title;
    NSString *_detailText;
    NSString *_primaryButton;
    NSString *_secondaryButton;
    NSString *_helpLinkTitle;
    NSString *_helpLinkURL;
}

- (id)symbolName;
- (void)setSecondaryButton:(id)a0;
- (id)init;
- (id)title;
- (void)setTitle:(id)a0;
- (id)secondaryButton;
- (void)setSymbolName:(id)a0;
- (void).cxx_destruct;
- (id)detailText;
- (void)setDetailText:(id)a0;
- (id)primaryButton;
- (void)setHelpLinkURL:(id)a0;
- (id)helpLinkTitle;
- (id)helpLinkURL;
- (void)setHelpLinkTitle:(id)a0;
- (void)setPrimaryButton:(id)a0;
- (id)initWithFlow:(unsigned long long)a0;

@end
