@interface _CFPasteboardWeakRef : NSObject {
    id pboardWeakRef;
}

- (id)initWithPasteboard:(struct __CFPasteboard { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFString *x1; id x2; struct __CFUUID *x3; struct __CFArray *x4; unsigned char x5; id x6; id x7; _Atomic unsigned long long x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; } *)a0;
- (struct __CFPasteboard { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFString *x1; id x2; struct __CFUUID *x3; struct __CFArray *x4; unsigned char x5; id x6; id x7; _Atomic unsigned long long x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; } *)tryRetainPasteboard;
- (void).cxx_destruct;

@end
