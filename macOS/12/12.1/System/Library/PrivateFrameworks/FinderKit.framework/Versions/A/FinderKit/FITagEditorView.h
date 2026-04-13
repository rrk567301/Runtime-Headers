@class FI_TNotificationCenterObserverGlue, NSArray, NSObject, FI_TTaggingTokenField;
@protocol FITagEditorDelegate;

@interface FITagEditorView : NSControl {
    id _reserved;
    id _reserved2;
    id _reserved3;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _tagEditorDidFinishEditingObserver;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _suggestionsWillShowObserver;
}

@property (retain, nonatomic) id controller;
@property (readonly, nonatomic) FI_TTaggingTokenField *taggingTokenField;
@property (weak) NSObject<FITagEditorDelegate> *delegate;
@property (copy) NSArray *tags;

+ (BOOL)accessibilityIsSingleCelled;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (void)setTarget:(id)a0;
- (id)target;
- (id).cxx_construct;
- (BOOL)isEnabled;
- (SEL)action;
- (void)setTag:(long long)a0;
- (void)setAction:(SEL)a0;
- (void)setOptions:(id)a0;
- (id)tags;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)userInterfaceLayoutDirection;
- (void)setUserInterfaceLayoutDirection:(long long)a0;
- (long long)tag;
- (BOOL)accessibilityIsIgnored;
- (void)sizeToFit;
- (BOOL)isEditable;
- (void)setEditable:(BOOL)a0;
- (void)setSelectable:(BOOL)a0;
- (double)firstBaselineOffsetFromTop;
- (double)lastBaselineOffsetFromBottom;
- (BOOL)isSelectable;
- (void)selectText:(id)a0;
- (void)setTags:(id)a0;
- (void)didFinishEditing;
- (void)suggestionsWindowWillShow;

@end
