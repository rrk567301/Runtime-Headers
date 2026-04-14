@class NSProgressIndicator, NSWindow, NSTextField;

@interface SMCapturingSysdiagnose : NSWindowController

@property (weak) NSWindow *baseWindow;
@property (weak) NSTextField *title;
@property (weak) NSProgressIndicator *progressBar;

- (id)init;
- (void).cxx_destruct;
- (void)windowDidLoad;
- (void)dismissSheet;
- (void)showSheetForBaseWindow:(id)a0;
- (void)updateProgressPercent:(double)a0;

@end
