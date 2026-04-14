@class NSTextField, NSView, NSString, NSStackView, PKPaymentWebService, PKPaymentSetupViewController, PKPaymentSetupFieldsModel, PKVerificationRequestRecord, PKPaymentPass, NSTableView;
@protocol PKPaymentVerificationMethodsDelegate;

@interface PKPaymentCardVerificationViewController : NSViewController <NSTableViewDelegate, NSTableViewDataSource, PKPaymentSetupFieldViewDelegate>

@property (retain) NSView *verificationFieldsView;
@property (retain) NSView *verificationMethodView;
@property (retain) NSView *verificationCodeView;
@property (retain) NSView *verificationInfoView;
@property (retain) NSTextField *enterCodeTitleLabel;
@property (retain) NSTextField *chooseMethodTitleLabel;
@property (retain) NSTextField *setupFieldsTitleLabel;
@property (retain) PKPaymentPass *pass;
@property (retain) NSString *deviceNumber;
@property (retain) PKPaymentWebService *paymentWebService;
@property long long context;
@property unsigned long long selectedIndex;
@property (retain) NSTableView *tableView;
@property (retain) NSTextField *verificationInfoViewTitle;
@property (retain) NSTextField *verificationInfoViewSubtitle;
@property (retain) NSTextField *verificationCodeTypeLabel;
@property (retain) NSTextField *verificationCodeDestinationLabel;
@property (retain) NSTextField *verificationCodeField;
@property (retain) NSStackView *verificationFieldsStackView;
@property (retain, nonatomic) PKPaymentSetupFieldsModel *fieldsModel;
@property BOOL nextButtonEnabled;
@property (weak, nonatomic) PKPaymentSetupViewController *setupVC;
@property (weak) id<PKPaymentVerificationMethodsDelegate> delegate;
@property (retain) PKVerificationRequestRecord *verificationRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)controlTextDidChange:(id)a0;
- (id)nibBundle;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)viewDidLoad;
- (id)_currentWindow;
- (void)_downloadAndAddPassWithCompletion:(id /* block */)a0;
- (void)_loadVerificationOptionsAtStep:(id)a0 completion:(id /* block */)a1;
- (id)_radioButtonTitleForChannel:(id)a0;
- (void)_showActivationError:(id)a0;
- (void)_showError:(id)a0 title:(id)a1 message:(id)a2;
- (void)_showRequestError:(id)a0;
- (void)_showSendCodeError:(id)a0;
- (BOOL)_showSetupAssistantVerificationAlertForRecord:(id)a0 pass:(id)a1;
- (void)_showVerificationCompletion;
- (void)_showVerificationFields;
- (void)_showVerificationMethods;
- (void)_showVerificationUI;
- (void)configureWithCompletion:(id /* block */)a0;
- (void)didNotReceiveCodeAction:(id)a0;
- (void)fetchVerificationOptionsAtStep:(id)a0 completion:(id /* block */)a1;
- (id)initWithPaymentWebService:(id)a0 pass:(id)a1 context:(long long)a2;
- (void)nextButton:(id)a0;
- (void)performVerificationUpdateRequestWithCompletion:(id /* block */)a0;
- (void)radioButtonAction:(id)a0;
- (void)selectDifferentVerificationOptionAction:(id)a0;
- (void)setupFieldViewValueDidChange:(id)a0;
- (void)submitCodeAction:(id)a0;
- (void)submitVerificationCode:(id)a0 completion:(id /* block */)a1;
- (id)verificationBodyAttributedStringWithFont:(id)a0;
- (id)verificationTitleString;

@end
