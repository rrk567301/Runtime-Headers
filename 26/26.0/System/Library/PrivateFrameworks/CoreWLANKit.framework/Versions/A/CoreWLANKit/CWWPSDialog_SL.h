@class NSTextField, NSString, NSImageView, NSProgressIndicator, CWDisplayedScanResult, NSButton;

@interface CWWPSDialog_SL : NSWindowController {
    BOOL _joinInProgress;
    NSTextField *windowTitleLabel;
    NSTextField *windowDescriptionLabel;
    NSButton *cancelButton;
    NSTextField *pinLabel;
    NSTextField *statusMessageLabel;
    NSButton *warningButton;
    NSProgressIndicator *progressIndicator;
    NSButton *helpButton;
    NSImageView *imageView;
}

@property (copy) CWDisplayedScanResult *scanResult;
@property id delegate;
@property (copy) NSString *pin;

+ (id)wpsDialogWithScanResult:(id)a0 pin:(id)a1;

- (void)windowDidLoad;
- (void)dealloc;
- (id)localizedStringForKey:(id)a0;
- (void)close;
- (void)awakeFromNib;
- (void)clearPIN;
- (void)onCancelButton:(id)a0;
- (id)initWithScanResult:(id)a0 pin:(id)a1;
- (void)onHelpButton:(id)a0;
- (void)updatePin;

@end
