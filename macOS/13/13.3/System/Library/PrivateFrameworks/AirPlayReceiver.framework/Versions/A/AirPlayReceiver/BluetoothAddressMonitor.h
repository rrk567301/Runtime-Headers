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
- (id)initWithSystemInfo:(struct OpaqueAPReceiverSystemInfo { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; struct OpaqueAPAdvertiserInfo *x9; unsigned char x10; unsigned char x11; struct __CFBoolean *x12; unsigned char x13[6]; unsigned char x14[16]; unsigned char x15; unsigned char x16; unsigned char x17; struct __CFString *x18; struct __CFString *x19; unsigned char x20; unsigned char x21; struct __CFString *x22; unsigned char x23; unsigned char x24; struct __CFString *x25; unsigned char x26; struct __CFString *x27; unsigned char x28; struct __CFString *x29; struct __CFString *x30; struct __CFString *x31; unsigned char x32; unsigned char x33; struct __CFDictionary *x34; long long x35; int x36; struct __CFString *x37; struct __CFString *x38; unsigned char x39; struct __CFString *x40; struct __CFString *x41; struct __CFString *x42; unsigned char x43; unsigned char x44; unsigned char x45; unsigned char x46; unsigned char x47; unsigned char x48; unsigned char x49; unsigned char x50; int x51; int x52; char x53[64]; char *x54; unsigned char x55; unsigned char x56; unsigned char x57; struct __CFString *x58; int x59; unsigned char x60; unsigned char x61; char x62[8]; unsigned long long x63; struct __CFString *x64; struct __CFString *x65; char x66[8]; unsigned char x67; char x68[64]; id x69; unsigned char x70; int x71; int x72; id x73; struct __CFString *x74; struct CGSize { double x0; double x1; } x75; struct CGSize { double x0; double x1; } x76; struct CGSize { double x0; double x1; } x77; struct __CFString *x78; struct __CFString *x79; struct __CFString *x80; struct __CFString *x81; int x82; int x83; unsigned char x84; unsigned char x85; unsigned char x86; unsigned int x87; float x88; struct __CFNumber *x89; struct __CFNumber *x90; unsigned char x91; struct __CFData *x92; id x93; struct OpaqueAPSPowerAssertion *x94; unsigned char x95; struct __CFData *x96; } *)a0 queue:(id)a1;

@end
