@class NSTextField, FI_TPathTextField, NSString, FI_TGoToAutoCompletionControllerFinderDelegate, NSValue, NSVisualEffectView, FI_TGoToFinderItem, FI_TGoToAutoCompletionController, NSWindow, FI_TGoToItemsViewController, NSButton, NSObject;
@protocol TGoToWindowDelegate;

@interface FI_TGoToWindowController : FI_TScriptableWindowController <NSTouchBarDelegate, TTouchBarGoToViewDelegate, NSWindowDelegate, NSTextFieldDelegate, NSMenuDelegate> {
    FI_TPathTextField *_pathTextField;
    NSTextField *_pathCompletionTextField;
    NSButton *_closeButton;
    FI_TGoToItemsViewController *_itemsViewController;
    NSVisualEffectView *_spinnerView;
    struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } _initialPath;
    BOOL _isLastTwoTabCompletionSame;
    BOOL _isInSuggestionUpdate;
    BOOL _isInUserDidTypeTab;
    BOOL _isInUserDidTypeMarkedText;
    BOOL _isInUserSingleClick;
    BOOL _shouldGoToSelection;
    BOOL _shouldTabToSelection;
    FI_TGoToFinderItem *_relativeToItem;
    struct TGoToPathToAutoCompleteHelper { struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fUIPathPrefix; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fAutoCompletePathPrefix; } _autoCompleteHelper;
    FI_TGoToAutoCompletionController *_autoCompletionController;
    FI_TGoToAutoCompletionControllerFinderDelegate *_autoCompletionControllerDelegate;
    struct function<void (FI_TGoToWindowController *)> { struct __value_func<void (FI_TGoToWindowController *)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _initialItemsDidLoadHandler;
    struct function<void (FI_TGoToWindowController *, const TFENode &, const TFENode &, const TString &)> { struct __value_func<void (FI_TGoToWindowController *, const TFENode &, const TFENode &, const TString &)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _completionHandler;
    struct TNSWeakPtr<FI_TRunAfterHelper> { NSValue *fWeakObject; } _initialItemsTimeoutToken;
    struct TNSWeakPtr<FI_TRunAfterHelper> { NSValue *fWeakObject; } _autoCompleteNowToken;
    struct TNSWeakPtr<FI_TRunAfterHelper> { NSValue *fWeakObject; } _autoCompleteSpinnerToken;
    struct TNSWeakPtr<FI_TRunAfterHelper> { NSValue *fWeakObject; } _singleClickDelayToken;
    struct vector<TNotificationCenterObserver, std::allocator<TNotificationCenterObserver>> { struct TNotificationCenterObserver *__begin_; struct TNotificationCenterObserver *__end_; struct __compressed_pair<TNotificationCenterObserver *, std::allocator<TNotificationCenterObserver>> { struct TNotificationCenterObserver *__value_; } __end_cap_; } _notificationCenterObservers;
    struct vector<TKeyValueObserver, std::allocator<TKeyValueObserver>> { struct TKeyValueObserver *__begin_; struct TKeyValueObserver *__end_; struct __compressed_pair<TKeyValueObserver *, std::allocator<TKeyValueObserver>> { struct TKeyValueObserver *__value_; } __end_cap_; } _keyValueObservers;
    struct TEventMonitor { NSObject *fEventMonitorToken; } _keyDownEventMonitor;
    struct TNSWeakPtr<FI_TTouchBar> { NSValue *fWeakObject; } _goAndCancelButtonsTouchBar;
    struct TNSWeakPtr<FI_TCustomTouchBarItem> { NSValue *fWeakObject; } _goAndCancelButtonsTouchBarItem;
}

@property (weak, nonatomic) NSWindow *parentWindow;
@property (readonly, nonatomic) BOOL enablePathComboBox;
@property (readonly, nonatomic) BOOL showProgress;
@property (weak, nonatomic) id<TGoToWindowDelegate> delegate;
@property (nonatomic) BOOL allowLeftoverLastPathComponent;
@property (nonatomic) BOOL isLoading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showGoToWindowRelativeToNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 parentWindow:(id)a1 initialPath:(const void *)a2 allowLeftoverLastPathComponent:(BOOL)a3 completionHandler:(const void *)a4;
+ (struct TGoToPathToAutoCompleteHelper { struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; } x0; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; } x1; })calcPathToAutoComplete:(void *)a0 relativeToNode:(struct TFENode { struct OpaqueNodeRef *x0; } *)a1 delegate:(id)a2;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)menuNeedsUpdate:(id)a0;
- (void)windowWillClose:(id)a0;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)cancel:(id)a0;
- (id)makeTouchBar;
- (id)handleEvent:(id)a0;
- (void)windowDidLoad;
- (id)touchBar:(id)a0 makeItemForIdentifier:(id)a1;
- (id)nextResponder;
- (void)effectiveAppearanceDidChange;
- (void)aboutToTearDown;
- (void)handleTableViewSingleClick:(id)a0;
- (void)handleTableViewDoubleClick:(id)a0;
- (void)handleCloseButtonAction:(id)a0;
- (void)go:(id)a0;
- (id)_initWithRelativeToNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 parentWindow:(id)a1 initialPath:(const void *)a2 allowLeftoverLastPathComponent:(BOOL)a3 initialItemsDidLoadHandler:(const void *)a4 completionHandler:(const void *)a5;
- (void)updatePathTextFieldMask;
- (BOOL)areUIPathAndProcessedPathInSync;
- (void)userDidTypeTab;
- (BOOL)canOpenSelectedItemInTerminal;
- (void)openSelectedItemInTerminal;
- (BOOL)canOpenSelectedItemInNewTabOrWindow;
- (void)openSelectedItemInNewTabOrWindow:(BOOL)a0;
- (void)copySelectedItemAsPath;
- (BOOL)pathViewInsertionCaretAtEnd;
- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })uiPath;
- (struct TFENode { struct OpaqueNodeRef *x0; })relativeToNode;
- (void)autoCompleteSoon;
- (void)autoCompleteNow;
- (void)updatePathHandler;
- (BOOL)updateOrigAutoCompletePath:(const void *)a0 withAdjustedAutoCompletePath:(const void *)a1 adjustedPathIsValid:(BOOL)a2;
- (void)updateSuggestedItems:(id)a0;
- (void)updatePlaceholderWithSelectedItem;
- (void)goToSelectedNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 leftoverPathComponent:(const void *)a1;

@end
