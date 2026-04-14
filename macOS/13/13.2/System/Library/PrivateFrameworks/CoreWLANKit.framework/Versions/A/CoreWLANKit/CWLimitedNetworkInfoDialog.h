@class NSTextField, NSImageView, CWDisplayedScanResult;

@interface CWLimitedNetworkInfoDialog : NSWindowController {
    NSTextField *_titleTextField;
    NSTextField *_descriptionTextField;
    NSImageView *_imageView;
}

@property (weak) id delegate;
@property (readonly, copy) CWDisplayedScanResult *scanResult;

- (void)dealloc;
- (void)awakeFromNib;
- (void)windowDidLoad;
- (id)localizedStringForKey:(id)a0;
- (id)initWithScanResult:(id)a0;
- (void)onOKButton:(id)a0;
- (void)onLearnMoreButton:(id)a0;

@end
