@class NSTextField, NSArray, NSImageView, CWDisplayedScanResult, NSButton;

@interface CWLimitedNetworkOptionDialog : NSWindowController {
    NSTextField *_title;
    NSTextField *_description;
    NSButton *_joinButton;
    NSButton *_notNowButton;
    NSImageView *_imageView;
}

@property (weak) id delegate;
@property (readonly, copy) CWDisplayedScanResult *scanResult;
@property (readonly, copy) NSArray *candidates;

- (void)windowDidLoad;
- (void)dealloc;
- (id)localizedStringForKey:(id)a0;
- (void)awakeFromNib;
- (void)onNotNowButton:(id)a0;
- (id)initWithScanResult:(id)a0 candidates:(id)a1;
- (void)onJoinButton:(id)a0;

@end
