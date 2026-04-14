@class ASCAuthorizationPresentationContext;

@interface ASCredentialRequestEnableBluetoothViewController : ASCredentialRequestPaneViewController

@property (readonly, nonatomic) ASCAuthorizationPresentationContext *presentationContext;
@property (copy, nonatomic) id /* block */ enableBluetoothHandler;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)_message;
- (id)initWithPresentationContext:(id)a0;
- (void)_setUpTitlePane;
- (void)_setUpMessagePane;
- (void)_setUpButtonPane;
- (void)_enableBluetooth;

@end
