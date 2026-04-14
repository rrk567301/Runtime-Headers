@interface WiFiDelegate : NSObject {
    struct OpaqueAPConnectivityHelper { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; id x2; int x3; id x4; struct _Apple80211 *x5; id x6; id x7; id x8; struct __CFString *x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; unsigned char x16; unsigned char x17; unsigned char x18; unsigned char x19; struct __SCDynamicStore *x20; struct __CFDictionary *x21; unsigned char x22; struct __CFDictionary *x23; unsigned char x24; unsigned char x25; unsigned char x26; unsigned char x27; void /* function */ *x28; void *x29; unsigned char x30; } *helper;
}

- (void)dealloc;
- (id)initWithHelper:(struct OpaqueAPConnectivityHelper { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; id x2; int x3; id x4; struct _Apple80211 *x5; id x6; id x7; id x8; struct __CFString *x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; unsigned char x16; unsigned char x17; unsigned char x18; unsigned char x19; struct __SCDynamicStore *x20; struct __CFDictionary *x21; unsigned char x22; struct __CFDictionary *x23; unsigned char x24; unsigned char x25; unsigned char x26; unsigned char x27; void /* function */ *x28; void *x29; unsigned char x30; } *)a0;
- (void)interfaceAddedWithName:(id)a0;

@end
