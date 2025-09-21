@class NSTextField, NSImageView, NSButton, CWDisplayedScanResult;

@interface CWErrorDialog : NSWindowController {
    NSTextField *_title;
    NSTextField *_description;
    NSButton *_runDiagnosticsButton;
    NSButton *_okButton;
    NSButton *_cancelButton;
    NSImageView *_imageView;
    BOOL _installerContext;
}

@property (weak) id delegate;
@property (readonly, copy) CWDisplayedScanResult *scanResult;

- (void)windowDidLoad;
- (void)dealloc;
- (id)localizedStringForKey:(id)a0;
- (void)awakeFromNib;
- (id)initWithScanResult:(id)a0;
- (void)onCancelButton:(id)a0;
- (void)onOKButton:(id)a0;
- (void)onRunDiagnosticsButton:(id)a0;

@end
