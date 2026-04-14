@class _CFPasteboardEntry;

@interface _CFPasteboardPendingPromise : NSObject {
    _CFPasteboardEntry *_entry;
}

@property (readonly) struct __CFPasteboard { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFString *x1; id x2; struct __CFArray *x3; struct os_unfair_lock_s { unsigned int x0; } x4; struct __CFUUID *x5; struct __CFArray *x6; unsigned char x7; id x8; id x9; _Atomic unsigned long long x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; struct __CFData *x16; struct __CFDictionary *x17; id /* block */ x18; id /* block */ x19; id /* block */ x20; id /* block */ x21; double x22; struct { unsigned int x0[8]; } x23; } *pasteboard;

- (void)dealloc;
- (id)initWithEntry:(id)a0 pasteboard:(struct __CFPasteboard { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFString *x1; id x2; struct __CFArray *x3; struct os_unfair_lock_s { unsigned int x0; } x4; struct __CFUUID *x5; struct __CFArray *x6; unsigned char x7; id x8; id x9; _Atomic unsigned long long x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; struct __CFData *x16; struct __CFDictionary *x17; id /* block */ x18; id /* block */ x19; id /* block */ x20; id /* block */ x21; double x22; struct { unsigned int x0[8]; } x23; } *)a1;

@end
