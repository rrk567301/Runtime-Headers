@class FI_TNotificationCenterObserverGlue, NSObject, FI_TColumnViewController;

@interface FI_TBrowserTableColumnViewController : _NSBrowserTableColumnViewController {
    FI_TColumnViewController *_columnViewController;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _btvWillMoveToSuperviewObserver;
}

- (void)loadView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)selectionShouldChangeInTableView:(id)a0;
- (BOOL)tableView:(id)a0 isGroupRow:(long long)a1;
- (id)tableView:(id)a0 selectionIndexesForProposedSelection:(id)a1;
- (void)aboutToTearDown;
- (id)browserTableView;
- (id)columnViewController;

@end
