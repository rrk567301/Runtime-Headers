@class FI_TNotificationCenterObserverGlue, NSArray, NSObject, FI_TTaggingTokenField;
@protocol FITagEditorDelegate;

@interface FITagEditorView : NSControl {
    id _reserved;
    id _reserved2;
    id _reserved3;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _tagEditorDidFinishEditingObserver;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _suggestionsWillShowObserver;
}

@property (retain, nonatomic) id controller;
@property (readonly, nonatomic) FI_TTaggingTokenField *taggingTokenField;
@property (weak) NSObject<FITagEditorDelegate> *delegate;
@property (copy) NSArray *tags;

+ (BOOL)accessibilityIsSingleCelled;

- (BOOL)isEditable;
- (BOOL)isEnabled;
- (long long)tag;
- (void)setTag:(long long)a0;
- (SEL)action;
- (void)sizeToFit;
- (void)setAction:(SEL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)lastBaselineOffsetFromBottom;
- (void)setEnabled:(BOOL)a0;
- (BOOL)canBecomeKeyView;
- (void)setEditable:(BOOL)a0;
- (void).cxx_destruct;
- (void)setTarget:(id)a0;
- (void)dealloc;
- (id)target;
- (void)setOptions:(id)a0;
- (double)firstBaselineOffsetFromTop;
- (id).cxx_construct;
- (BOOL)accessibilityIsIgnored;
- (BOOL)isSelectable;
- (void)selectText:(id)a0;
- (void)setSelectable:(BOOL)a0;
- (void)setUserInterfaceLayoutDirection:(long long)a0;
- (long long)userInterfaceLayoutDirection;
- (void)didFinishEditing;
- (void)suggestionsWindowWillShow;

@end
