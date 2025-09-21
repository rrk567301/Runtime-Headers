@class NSWindow, NSTextField;

@interface DKConfirmationWindowController : NSWindowController

@property (weak) NSTextField *messageTextField;
@property (weak) NSTextField *infoTextField;
@property (retain) NSWindow *parentWindow;

- (void)windowDidLoad;
- (void).cxx_destruct;
- (void)cancelClicked:(id)a0;
- (void)setupView;
- (void)eraseClicked:(id)a0;

@end
