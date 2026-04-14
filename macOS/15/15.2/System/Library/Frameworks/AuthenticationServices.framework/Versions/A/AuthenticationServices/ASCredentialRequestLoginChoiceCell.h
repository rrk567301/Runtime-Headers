@class ASCAuthorizationPresentationContext, NSString, NSImage, AKASAuthorizationProvider, NSTextField, NSButton;
@protocol ASCLoginChoiceProtocol;

@interface ASCredentialRequestLoginChoiceCell : NSTableCellView {
    id<ASCLoginChoiceProtocol> _loginChoice;
    ASCAuthorizationPresentationContext *_presentationContext;
    AKASAuthorizationProvider *_authorizationProvider;
    NSTextField *_detailLabel;
    NSButton *_radioButton;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *detailText;
@property (retain, nonatomic) NSImage *iconImage;
@property (nonatomic) BOOL isSelectedLoginChoice;

- (void).cxx_destruct;
- (id)_cableIcon;
- (id)_defaultPasskeyIcon;
- (id)_detailTextForExternalPasswordLoginChoice:(id)a0;
- (id)_detailTextForPasswordLoginChoice:(id)a0;
- (id)_detailTextForPasswordLoginChoiceFromKeychain:(id)a0;
- (id)_publicKeyCredentialImageForPresentationContext:(id)a0;
- (void)_setUpContent;
- (void)_setUpSubviewsWithLoginChoice:(id)a0;
- (id)_subtitleForPublicKeyCredentialAssertion;
- (id)_titleForPublicKeyCredentialAssertionWithName:(id)a0 identifier:(id)a1;
- (id)initWithLoginChoice:(id)a0 presentationContext:(id)a1 authorizationProvider:(id)a2;
- (void)setTarget:(id)a0 action:(SEL)a1 tag:(long long)a2;

@end
