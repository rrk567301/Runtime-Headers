@class NSString, NSMutableArray;

@interface TUIUpdateDevicesModel : TUIWelcomeControllerModel {
    NSString *_symbolName;
    NSString *_title;
    NSString *_detailText;
    NSString *_primaryButton;
    NSString *_secondaryButton;
    NSString *_helpLinkTitle;
    NSString *_helpLinkURL;
}

@property (retain, nonatomic) NSMutableArray *devicesWithIssuesIdentifiers;

- (id)symbolName;
- (void)setTitle:(id)a0;
- (id)title;
- (void).cxx_destruct;
- (void)setSecondaryButton:(id)a0;
- (id)secondaryButton;
- (id)init;
- (void)setSymbolName:(id)a0;
- (id)detailText;
- (void)setDetailText:(id)a0;
- (id)primaryButton;
- (void)setHelpLinkURL:(id)a0;
- (id)helpLinkTitle;
- (id)helpLinkURL;
- (void)setHelpLinkTitle:(id)a0;
- (void)setPrimaryButton:(id)a0;

@end
