@class CBPeripheralManager, NSObject;
@protocol OS_dispatch_queue;

@interface BluetoothAddressMonitor : NSObject {
    struct OpaqueFigCFWeakReferenceHolder { } *_systemInfoWeak;
    NSObject<OS_dispatch_queue> *_queue;
    CBPeripheralManager *_cbManager;
}

- (void)dealloc;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithSystemInfo:(struct OpaqueAPReceiverSystemInfo { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; struct OpaqueAPAdvertiserInfo *x9; unsigned char x10; struct __CFDictionary *x11; unsigned char x12; struct __CFBoolean *x13; unsigned char x14[6]; unsigned char x15[16]; struct __CFString *x16; unsigned char x17; unsigned char x18; unsigned char x19; struct __CFString *x20; struct __CFString *x21; unsigned char x22; unsigned char x23; struct __CFString *x24; unsigned char x25; unsigned char x26; unsigned char x27; struct __CFString *x28; unsigned char x29; struct __CFString *x30; struct __CFString *x31; struct __CFString *x32; struct __CFString *x33; unsigned char x34; unsigned char x35; unsigned char x36; struct __CFDictionary *x37; long long x38; int x39; struct __CFString *x40; struct __CFString *x41; unsigned char x42; struct __CFString *x43; struct __CFString *x44; struct __CFString *x45; unsigned char x46; unsigned char x47; unsigned char x48; unsigned char x49; unsigned char x50; unsigned char x51; unsigned char x52; unsigned char x53; unsigned char x54; unsigned char x55; unsigned char x56; unsigned char x57; int x58; int x59; id x60; char x61[64]; char *x62; unsigned char x63; unsigned char x64; unsigned char x65; struct __CFString *x66; int x67; unsigned char x68; unsigned char x69; char x70[8]; unsigned long long x71; struct __CFString *x72; struct __CFString *x73; char x74[8]; unsigned char x75; char x76[64]; id x77; unsigned char x78; int x79; int x80; id x81; struct __CFString *x82; struct CGSize { double x0; double x1; } x83; struct CGSize { double x0; double x1; } x84; struct CGSize { double x0; double x1; } x85; struct __CFString *x86; struct __CFString *x87; struct __CFString *x88; struct __CFString *x89; int x90; int x91; unsigned char x92; unsigned char x93; unsigned char x94; unsigned char x95; unsigned char x96; unsigned int x97; float x98; struct __CFNumber *x99; struct __CFNumber *x100; unsigned char x101; unsigned char x102; struct __CFData *x103; id x104; struct OpaqueAPSPowerAssertion *x105; unsigned char x106; struct __CFDictionary *x107; struct __CFData *x108; } *)a0 queue:(id)a1;

@end
