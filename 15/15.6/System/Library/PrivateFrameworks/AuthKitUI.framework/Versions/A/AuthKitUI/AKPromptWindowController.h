@class NSWindow;

@interface AKPromptWindowController : NSWindowController

@property (nonatomic) char _currentlyActive;
@property (weak, nonatomic) NSWindow *hostWindow;
@property (nonatomic) char makeSheetCritical;

- (void).cxx_destruct;
- (void)present;
- (void)dismiss;
- (void)_presentAsSheet;
- (void)_dimissPrompt;
- (void)_dismissOnMainThread;
- (void)_presentAsModalWithCompletion:(id /* block */)a0;
- (void)presentWithCompletion:(id /* block */)a0;

@end
