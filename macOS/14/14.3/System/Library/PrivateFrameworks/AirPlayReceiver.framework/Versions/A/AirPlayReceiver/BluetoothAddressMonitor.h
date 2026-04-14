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
- (id)initWithSystemInfo:(struct OpaqueAPReceiverSystemInfo { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; struct OpaqueAPAdvertiserInfo *x9; unsigned char x10; unsigned char x11; struct __CFBoolean *x12; unsigned char x13[6]; unsigned char x14[16]; struct __CFString *x15; unsigned char x16; unsigned char x17; unsigned char x18; struct __CFString *x19; struct __CFString *x20; unsigned char x21; unsigned char x22; struct __CFString *x23; unsigned char x24; unsigned char x25; struct __CFString *x26; unsigned char x27; struct __CFString *x28; unsigned char x29; struct __CFString *x30; struct __CFString *x31; struct __CFString *x32; unsigned char x33; unsigned char x34; unsigned char x35; struct __CFDictionary *x36; long long x37; int x38; struct __CFString *x39; struct __CFString *x40; unsigned char x41; struct __CFString *x42; struct __CFString *x43; struct __CFString *x44; unsigned char x45; unsigned char x46; unsigned char x47; unsigned char x48; unsigned char x49; unsigned char x50; unsigned char x51; unsigned char x52; int x53; int x54; id x55; char x56[64]; char *x57; unsigned char x58; unsigned char x59; unsigned char x60; struct __CFString *x61; int x62; unsigned char x63; unsigned char x64; char x65[8]; unsigned long long x66; struct __CFString *x67; struct __CFString *x68; char x69[8]; unsigned char x70; char x71[64]; id x72; unsigned char x73; int x74; int x75; id x76; struct __CFString *x77; struct CGSize { double x0; double x1; } x78; struct CGSize { double x0; double x1; } x79; struct CGSize { double x0; double x1; } x80; struct __CFString *x81; struct __CFString *x82; struct __CFString *x83; struct __CFString *x84; int x85; int x86; unsigned char x87; unsigned char x88; unsigned char x89; unsigned char x90; unsigned int x91; float x92; struct __CFNumber *x93; struct __CFNumber *x94; unsigned char x95; unsigned char x96; struct __CFData *x97; id x98; struct OpaqueAPSPowerAssertion *x99; unsigned char x100; struct __CFData *x101; } *)a0 queue:(id)a1;

@end
