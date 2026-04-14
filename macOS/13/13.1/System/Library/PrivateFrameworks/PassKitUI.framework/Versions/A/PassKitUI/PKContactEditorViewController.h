@class NSTextField, PKContactFormatValidator, NSArray, NSString, NSSet, NSStackView, CNContact, PKContactTextField, NSImageView, NSResponder, NSButton;
@protocol PKContactEditorViewControllerDelegate;

@interface PKContactEditorViewController : PKPaymentAuthorizationChildViewController <NSTextFieldDelegate>

@property (retain) NSImageView *paymentLogoImageView;
@property (retain) NSStackView *fieldsStackView;
@property (retain) NSTextField *titleLabel;
@property (retain, nonatomic) NSStackView *namesStackView;
@property (retain, nonatomic) PKContactTextField *givenNameTextField;
@property (retain, nonatomic) PKContactTextField *familyNameTextField;
@property (retain, nonatomic) NSStackView *phoneticNamesStackView;
@property (retain, nonatomic) PKContactTextField *phoneticGivenNameTextField;
@property (retain, nonatomic) PKContactTextField *phoneticFamilyNameTextField;
@property (retain, nonatomic) PKContactTextField *emailTextField;
@property (retain, nonatomic) PKContactTextField *phoneTextField;
@property (retain, nonatomic) NSButton *cancelButton;
@property (retain, nonatomic) NSButton *saveButton;
@property (retain, nonatomic) NSResponder *initialFirstResponder;
@property (readonly, nonatomic) CNContact *editedContact;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (retain, nonatomic) PKContactFormatValidator *contactFormatValidator;
@property (weak, nonatomic) id<PKContactEditorViewControllerDelegate> delegate;
@property unsigned long long mode;
@property (retain, nonatomic) CNContact *contact;
@property (copy, nonatomic) NSArray *errors;
@property (retain, nonatomic) NSSet *requiredFields;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)awakeFromNib;
- (void)controlTextDidEndEditing:(id)a0;
- (void)controlTextDidChange:(id)a0;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)cancelButtonClicked:(id)a0;
- (id)formatEmailAddress:(id)a0;
- (void)saveButtonClicked:(id)a0;
- (id)initWithContactFormatValidator:(id)a0;
- (void)resetSubviewsOfView:(id)a0;
- (id)_controlsForError:(id)a0;
- (void)_applyContact:(id)a0;
- (void)_applyErrors:(id)a0;
- (BOOL)_shouldShowPhoneticName;
- (void)_validateContactFormatAndSetErrorForField:(id)a0;

@end
