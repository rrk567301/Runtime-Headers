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
- (id)initWithSystemInfo:(struct OpaqueAPReceiverSystemInfo { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; int x2; int x3; int x4; int x5; int x6; int x7; struct OpaqueAPAdvertiserInfo *x8; unsigned char x9; unsigned char x10; struct __CFBoolean *x11; unsigned char x12[6]; unsigned char x13[16]; unsigned char x14; unsigned char x15; unsigned char x16; struct __CFString *x17; struct __CFString *x18; unsigned char x19; unsigned char x20; struct __CFString *x21; unsigned char x22; unsigned char x23; struct __CFString *x24; unsigned char x25; struct __CFString *x26; unsigned char x27; struct __CFString *x28; struct __CFString *x29; unsigned char x30; unsigned char x31; struct __CFDictionary *x32; long long x33; int x34; struct __CFString *x35; struct __CFString *x36; unsigned char x37; struct __CFString *x38; struct __CFString *x39; struct __CFString *x40; unsigned char x41; unsigned char x42; unsigned char x43; unsigned char x44; unsigned char x45; unsigned char x46; unsigned char x47; unsigned char x48; int x49; int x50; char x51[64]; char *x52; unsigned char x53; unsigned char x54; unsigned char x55; struct __CFString *x56; int x57; unsigned char x58; unsigned char x59; char x60[8]; unsigned long long x61; struct __CFString *x62; struct __CFString *x63; char x64[8]; unsigned char x65; char x66[64]; id x67; unsigned char x68; int x69; int x70; id x71; struct __CFString *x72; struct CGSize { double x0; double x1; } x73; struct CGSize { double x0; double x1; } x74; struct CGSize { double x0; double x1; } x75; struct __CFString *x76; struct __CFString *x77; struct __CFString *x78; struct __CFString *x79; int x80; int x81; unsigned char x82; unsigned char x83; unsigned char x84; unsigned int x85; float x86; struct __CFNumber *x87; struct __CFNumber *x88; unsigned char x89; struct __CFData *x90; id x91; struct OpaqueAPSPowerAssertion *x92; unsigned char x93; struct __CFData *x94; } *)a0 queue:(id)a1;

@end
