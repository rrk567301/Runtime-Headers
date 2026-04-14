@class NSTextField, NSString, NSImageView, NSData, CWDisplayedScanResult, NSButton;

@interface CWLockdownModeDialog : NSWindowController {
    NSTextField *_title;
    NSTextField *_description;
    NSButton *_okButton;
    NSButton *_cancelButton;
    NSImageView *_imageView;
}

@property (weak) id delegate;
@property (readonly, copy) CWDisplayedScanResult *scanResult;
@property (copy) NSString *username;
@property (copy) NSString *password;
@property (copy) NSData *identityData;
@property BOOL remember;

- (void)windowDidLoad;
- (void)dealloc;
- (id)localizedStringForKey:(id)a0;
- (id)descriptionString;
- (void)awakeFromNib;
- (id)titleString;
- (id)initWithScanResult:(id)a0;
- (void)onCancelButton:(id)a0;
- (void)onOKButton:(id)a0;

@end
