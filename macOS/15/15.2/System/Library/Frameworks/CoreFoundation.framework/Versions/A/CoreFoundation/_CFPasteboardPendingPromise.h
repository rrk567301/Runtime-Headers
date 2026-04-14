@class _CFPasteboardEntry;

@interface _CFPasteboardPendingPromise : NSObject {
    _CFPasteboardEntry *_entry;
}

@property (readonly) struct __CFPasteboard { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFString *x1; id x2; struct __CFUUID *x3; struct __CFArray *x4; unsigned char x5; id x6; id x7; _Atomic unsigned long long x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; struct __CFData *x13; struct __CFDictionary *x14; id /* block */ x15; id /* block */ x16; double x17; } *pasteboard;

- (void)dealloc;
- (id)initWithEntry:(id)a0 pasteboard:(struct __CFPasteboard { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFString *x1; id x2; struct __CFUUID *x3; struct __CFArray *x4; unsigned char x5; id x6; id x7; _Atomic unsigned long long x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; struct __CFData *x13; struct __CFDictionary *x14; id /* block */ x15; id /* block */ x16; double x17; } *)a1;

@end
