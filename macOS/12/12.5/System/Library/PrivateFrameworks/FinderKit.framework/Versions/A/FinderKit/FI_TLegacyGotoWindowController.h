@class NSString, FI_TProgressIndicator, FI_TGoToFieldEditor, NSValue, FI_TGoToAutoCompletionController, NSObject, NSWindow, FI_TNotificationCenterObserverGlue, NSComboBox;
@protocol TGoToWindowDelegate;

@interface FI_TLegacyGotoWindowController : FI_TScriptableWindowController <NSTouchBarDelegate, TTouchBarLegacyGoToViewDelegate, NSComboBoxDelegate, NSComboBoxDataSource, NSWindowDelegate> {
    NSComboBox *_pathComboBox;
    FI_TProgressIndicator *_progress;
    BOOL _changingStringOrSelection;
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _relativeToNode;
    struct TGoToPathToAutoCompleteHelper { struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fUIPathPrefix; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fAutoCompletePathPrefix; } _autoCompleteHelper;
    struct optional<bool> { union { char __null_state_; BOOL __val_; } ; BOOL __engaged_; } _isTabAutoCompleting;
    FI_TGoToAutoCompletionController *_autoCompletionController;
    FI_TGoToFieldEditor *_fieldEditor;
    struct TNSWeakPtr<NSObject<TGoToWindowDelegate>, void> { NSValue *fWeakObject; } _weakDelegate;
    struct TNSWeakPtr<NSWindow, void> { NSValue *fWeakObject; } _weakParentWindow;
    BOOL _selectionChangedDuringAutoCompletion;
    struct function<void (FI_TLegacyGotoWindowController *, const TFENode &, const TFENode &, const TString &)> { struct __value_func<void (FI_TLegacyGotoWindowController *, const TFENode &, const TFENode &, const TString &)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _completionHandler;
    struct TNSWeakPtr<FI_TRunAfterHelper, void> { NSValue *fWeakObject; } _autoCompleteNowToken;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _textDidChangeObserver;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _didChangeSelectionObserver;
    struct TNSWeakPtr<FI_TTouchBar, void> { NSValue *fWeakObject; } _goAndCancelButtonsTouchBar;
    struct TNSWeakPtr<FI_TCustomTouchBarItem, void> { NSValue *fWeakObject; } _goAndCancelButtonsTouchBarItem;
}

@property (retain, nonatomic) NSString *errorMsgText;
@property (nonatomic) BOOL isGoingToFolder;
@property (nonatomic) BOOL isAutoCompleting;
@property (nonatomic) BOOL isAutoCompleteUIVisible;
@property (readonly, nonatomic) BOOL enablePathComboBox;
@property (readonly, nonatomic) BOOL showProgress;
@property (readonly, weak, nonatomic) NSWindow *parentWindow;
@property (weak, nonatomic) NSObject<TGoToWindowDelegate> *delegate;
@property (nonatomic) BOOL allowLeftoverLastPathComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL enableGoBtn;

+ (struct TGoToPathToAutoCompleteHelper { struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; } x0; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; } x1; })calcPathToAutoComplete:(void *)a0 relativeToNode:(struct TFENode { struct OpaqueNodeRef *x0; } *)a1 delegate:(id)a2;
+ (id)showGoToWindowRelativeToNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 parentWindow:(id)a1 initialPath:(const void *)a2 allowLeftoverLastPathComponent:(BOOL)a3 completionHandler:(const void *)a4;
+ (id)keyPathsForValuesAffectingEnableGoBtn;
+ (id)keyPathsForValuesAffectingEnablePathComboBox;
+ (id)keyPathsForValuesAffectingShowProgress;

- (id)delegate;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)parentWindow;
- (void)setCompletionHandler:(const void *)a0;
- (id)windowWillReturnFieldEditor:(id)a0 toObject:(id)a1;
- (void)windowWillClose:(id)a0;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (id)control:(id)a0 textView:(id)a1 completions:(id)a2 forPartialWordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 indexOfSelectedItem:(long long *)a4;
- (void)cancel:(id)a0;
- (id)makeTouchBar;
- (long long)numberOfItemsInComboBox:(id)a0;
- (id)comboBox:(id)a0 objectValueForItemAtIndex:(long long)a1;
- (void)setParentWindow:(id)a0;
- (void)windowDidLoad;
- (id)touchBar:(id)a0 makeItemForIdentifier:(id)a1;
- (void)aboutToTearDown;
- (BOOL)showProgress;
- (void)moveSelectionToEnd;
- (void)moveSelectionTo:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)autoCompleteNow;
- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })uiPath;
- (void)go:(id)a0;
- (BOOL)updateOrigAutoCompletePath:(const void *)a0 withAdjustedAutoCompletePath:(const void *)a1 adjustedPathIsValid:(BOOL)a2;
- (void)autoCompleteSoon;
- (void)updatePathHandler;
- (BOOL)enablePathComboBox;
- (id)_initWithRelativeToNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 parentWindow:(id)a1 initialPath:(const void *)a2 allowLeftoverLastPathComponent:(BOOL)a3 completionHandler:(const void *)a4;
- (void)autoCompleteNowAndValidate:(BOOL)a0;
- (void)updateEnableGoBtn;
- (void)autoCompleteWithSingleCompletionName:(const void *)a0;
- (BOOL)enableGoBtn;
- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })autoCompleteHandler:(const void *)a0;
- (void)completionHandler:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 leftoverLastPathComponent:(const void *)a1;

@end
