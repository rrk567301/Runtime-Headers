@class NSWindow;

@interface AKPromptWindowController : NSWindowController

@property (nonatomic) BOOL _currentlyActive;
@property (weak, nonatomic) NSWindow *hostWindow;
@property (nonatomic) BOOL makeSheetCritical;

- (void).cxx_destruct;
- (void)dismiss;
- (void)present;
- (void)presentWithCompletion:(id /* block */)a0;
- (void)_presentAsSheet;
- (void)_presentAsModalWithCompletion:(id /* block */)a0;
- (void)_dismissOnMainThread;
- (void)_dimissPrompt;

@end
