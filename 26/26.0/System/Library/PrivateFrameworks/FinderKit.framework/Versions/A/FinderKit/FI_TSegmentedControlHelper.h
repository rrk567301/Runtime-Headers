@interface FI_TSegmentedControlHelper : NSObject {
    struct function<void ()> { struct __value_func<void ()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _clickHandler;
    struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } _keyEquivalent;
    unsigned long long _modifierFlags;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)callClickHandler;
- (id)initWithClickHandler:(const void *)a0;
- (struct pair<TString, unsigned long> { struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; } x0; unsigned long long x1; })keyEquivalentWithModifierFlags;
- (void)setKeyEquivalent:(const void *)a0 withModifierFlags:(unsigned long long)a1;

@end
