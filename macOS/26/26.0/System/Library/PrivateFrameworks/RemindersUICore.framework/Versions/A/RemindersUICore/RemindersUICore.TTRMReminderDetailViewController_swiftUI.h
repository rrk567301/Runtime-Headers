@interface RemindersUICore.TTRMReminderDetailViewController_swiftUI : NSViewController <NSPopoverDelegate> {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ modelObject;
    void /* unknown type, empty encoding */ rootView;
    void /* unknown type, empty encoding */ firstResponderToRestoreOnDismiss;
    void /* unknown type, empty encoding */ firstViewDidAppearCalled;
    void /* unknown type, empty encoding */ selectedKeyboardInputSourceObserver;
    void /* unknown type, empty encoding */ sheetIsPresented;
    void /* unknown type, empty encoding */ sheetPresentationCancellables;
    void /* unknown type, empty encoding */ $__lazy_storage_$_suggestionWindowController;
}

- (void)viewWillDisappear;
- (void)viewDidLoad;
- (void)loadView;
- (void)cancelOperation:(id)a0;
- (void)keyDown:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidAppear;
- (id)initWithCoder:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)popoverWillClose:(id)a0;

@end
