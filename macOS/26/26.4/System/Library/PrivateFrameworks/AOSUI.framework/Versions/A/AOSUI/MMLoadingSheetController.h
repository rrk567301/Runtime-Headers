@class NSProgressIndicator, NSWindow;

@interface MMLoadingSheetController : NSViewController

@property (retain) NSWindow *modalWindow;
@property (retain) NSWindow *hostWindow;
@property (weak) NSProgressIndicator *spinner;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)init;
- (void)dismiss;
- (id)_setupWindowWithContentViewController:(id)a0;
- (void)presentViewControllerFromHostWindow:(id)a0;

@end
