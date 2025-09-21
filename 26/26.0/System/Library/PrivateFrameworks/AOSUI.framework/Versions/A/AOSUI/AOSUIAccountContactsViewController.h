@class NSButton, NSWindow, NSStackView;
@protocol AOSUIAccountContactsViewControllerDelegate;

@interface AOSUIAccountContactsViewController : AOSUISpyglassBaseViewController

@property (weak) NSButton *doneButton;
@property (retain) NSWindow *modalWindow;
@property (retain) NSWindow *hostWindow;
@property (weak) id<AOSUIAccountContactsViewControllerDelegate> delegate;
@property (weak) NSStackView *stackViewContainer;

- (void)viewDidLoad;
- (void)cancelOperation:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)nibName;
- (id)nibBundle;
- (void)doneButtonPressed:(id)a0;
- (void)_dismiss;
- (id)_setupWindowWithContentViewController:(id)a0;
- (void)presentViewControllerAsCriticalSheetFromHostWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)presentViewControllerFromHostWindow:(id)a0;
- (void)presentViewControllerFromHostWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)presentViewControllerFromHostWindow:(id)a0 viewController:(id)a1 completionHandler:(id /* block */)a2;

@end
