@class NSTextField, NSImageView, NSButton, CWDisplayedScanResult;

@interface CWLimitedNetworkOptionDialog : NSWindowController {
    NSTextField *_title;
    NSTextField *_description;
    NSButton *_joinButton;
    NSButton *_notNowButton;
    NSImageView *_imageView;
}

@property (weak) id delegate;
@property (readonly, copy) CWDisplayedScanResult *scanResult;
@property (readonly, copy) CWDisplayedScanResult *topCandidate;

- (void)dealloc;
- (void)awakeFromNib;
- (void)windowDidLoad;
- (id)localizedStringForKey:(id)a0;
- (id)initWithScanResult:(id)a0 topCandidate:(id)a1;
- (void)onJoinButton:(id)a0;
- (void)onNotNowButton:(id)a0;

@end
