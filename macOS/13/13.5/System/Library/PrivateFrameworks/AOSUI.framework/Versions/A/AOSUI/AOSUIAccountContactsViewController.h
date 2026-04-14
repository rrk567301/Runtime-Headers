@class NSButton, NSWindow, NSStackView;

@interface AOSUIAccountContactsViewController : AOSUISpyglassBaseViewController

@property (weak) NSButton *doneButton;
@property (retain) NSWindow *modalWindow;
@property (retain) NSWindow *hostWindow;
@property (weak) NSStackView *stackViewContainer;

- (void).cxx_destruct;
- (id)nibName;
- (void)cancelOperation:(id)a0;
- (id)nibBundle;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)doneButtonPressed:(id)a0;
- (void)_dismiss;
- (id)_setupWindowWithContentViewController:(id)a0;
- (void)presentViewControllerFromHostWindow:(id)a0;
- (void)presentViewControllerFromHostWindow:(id)a0 completionHandler:(id /* block */)a1;

@end
