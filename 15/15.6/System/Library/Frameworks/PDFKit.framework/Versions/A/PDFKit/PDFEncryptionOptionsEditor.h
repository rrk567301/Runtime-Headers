@class NSTextField, PDFDocument, NSString, NSSecureTextField, NSButton;

@interface PDFEncryptionOptionsEditor : NSViewController {
    NSString *_userPassword;
    NSString *_ownerPassword;
    char _viewHasAppeared;
    char _savedRequiresPasswordToOpen;
    NSString *_savedUserPassword;
    NSString *_savedOwnerPassword;
    unsigned long long _savedAccessPermissions;
}

@property (nonatomic) char requiresPasswordToOpen;
@property (getter=isUserPasswordValid) char userPasswordValid;
@property (getter=isOwnerPasswordValid) char ownerPasswordValid;
@property char allowsPrinting;
@property char allowsCopying;
@property char allowsDocumentChanges;
@property char allowsDocumentAssembly;
@property char allowsContentAccessibility;
@property char allowsCommenting;
@property char allowsFormFieldEntry;
@property (retain) NSSecureTextField *userPasswordField1;
@property (retain) NSSecureTextField *userPasswordField2;
@property (retain) NSTextField *userPasswordErrorMsg;
@property (retain) NSSecureTextField *ownerPasswordField1;
@property (retain) NSSecureTextField *ownerPasswordField2;
@property (retain) NSTextField *ownerPasswordErrorMsg;
@property (retain) NSButton *resetButton;
@property char showsOKCancelButtons;
@property (retain, nonatomic) PDFDocument *document;
@property (copy, nonatomic) NSString *userPassword;
@property (copy, nonatomic) NSString *ownerPassword;
@property (nonatomic) unsigned long long accessPermissions;

- (id)init;
- (void).cxx_destruct;
- (void)controlTextDidChange:(id)a0;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)_ownerPasswordChanged:(id)a0;
- (void)_userPasswordChanged:(id)a0;
- (void)applyButtonClicked:(id)a0;
- (void)cancelButtonClicked:(id)a0;
- (void)requirePasswordToOpenChecked:(id)a0;
- (void)resetButtonClicked:(id)a0;

@end
