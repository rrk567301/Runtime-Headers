@class NSWindow;

@interface AKPromptWindowController : NSWindowController

@property (nonatomic) BOOL _currentlyActive;
@property (weak) NSWindow *hostWindow;
@property BOOL makeSheetCritical;

- (void).cxx_destruct;
- (void)dismiss;
- (void)present;
- (void)_presentAsSheet;
- (void)_presentAsModal;
- (void)_dismissOnMainThread;
- (void)_dimissPrompt;

@end
