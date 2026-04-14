@class PKPaymentPreferenceContact, PKContactFormatValidator, NSString, NSPopUpButton, PKPaymentOptionsDefaults, NSWindow;

@interface PKContactAndShippingViewController : NSViewController <PKPostalAddressEditorViewControllerDelegate, PKContactEditorViewControllerDelegate>

@property (retain) NSPopUpButton *addressPopup;
@property (retain) NSPopUpButton *emailPopup;
@property (retain) NSPopUpButton *telephonePopup;
@property (retain) PKPaymentOptionsDefaults *paymentOptionsDefaults;
@property (retain) NSWindow *sheet;
@property (retain) NSWindow *sheetParent;
@property (retain) PKPaymentPreferenceContact *addressPreference;
@property (retain) PKPaymentPreferenceContact *phonePreference;
@property (retain) PKPaymentPreferenceContact *emailPreference;
@property (retain, nonatomic) PKContactFormatValidator *contactFormatValidator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)nibBundle;
- (void)viewWillAppear;
- (void)didUpdateEmail:(id)a0;
- (id)_attributedString:(id)a0 withColor:(id)a1;
- (void)_cleanUpEditedContact:(id)a0;
- (void)_configureAttributedTitleForMenuItem:(id)a0 hasError:(BOOL)a1;
- (void)_configureEmailOptions;
- (void)_configurePhoneOptions;
- (void)_configureShippingAddressOptions;
- (void)_updateForStoreDemoIfNecessary;
- (void)contactEditorViewController:(id)a0 didFinishEditingContact:(id)a1;
- (void)contactEditorViewControllerDidCancel:(id)a0;
- (void)didUpdateAddress:(id)a0;
- (void)didUpdateTelephone:(id)a0;
- (void)postalAddressEditorViewController:(id)a0 didFinishEditingContact:(id)a1;
- (void)postalAddressEditorViewControllerDidCancel:(id)a0;

@end
