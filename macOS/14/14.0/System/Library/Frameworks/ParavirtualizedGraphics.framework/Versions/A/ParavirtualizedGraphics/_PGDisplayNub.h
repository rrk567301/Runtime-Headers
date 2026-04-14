@class NSObject, NSArray, PGMapping, _PGDevice, _PGDisplay;
@protocol OS_dispatch_semaphore;

@interface _PGDisplayNub : NSObject {
    _PGDevice *_device;
    unsigned long long _port;
    unsigned int _sharedStatePage;
    PGMapping *_sharedStateMapping;
    struct { unsigned int x0; char x1[14]; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned int x7; unsigned int x8; float x9; float x10; struct AppleParavirtGPUDisplayColorPoint_t { float x0; float x1; } x11; struct AppleParavirtGPUDisplayColorPoint_t { float x0; float x1; } x12; struct AppleParavirtGPUDisplayColorPoint_t { float x0; float x1; } x13; struct AppleParavirtGPUDisplayColorPoint_t { float x0; float x1; } x14; struct { union { struct { unsigned short x0; unsigned short x1; } x0; _Atomic unsigned int x1; } x0; } x15; unsigned char x16; unsigned char x17; unsigned char x18[6]; unsigned long long x19; unsigned int x20[40]; _Atomic unsigned int x21; _Atomic unsigned int x22; unsigned int x23[62]; unsigned int x24; struct { unsigned short x0; struct { unsigned short x0; unsigned short x1; unsigned int x2; union { unsigned long long x0; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x1; } x3; } x1[128]; } x25; struct APVColorMatrixState { float x0[2][3][4]; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; } x26; unsigned int x27[227]; struct { union { struct { unsigned short x0; unsigned short x1; } x0; _Atomic unsigned int x1; } x0; } x28; BOOL x29; unsigned int x30[62]; unsigned long long x31; unsigned long long x32; unsigned long long x33; unsigned int x34; unsigned int x35; BOOL x36; unsigned short x37; unsigned short x38; unsigned short x39; unsigned short x40; unsigned int x41; unsigned long long x42[10]; unsigned long long x43; unsigned long long x44; unsigned int x45; unsigned int x46; unsigned long long x47; unsigned int x48; unsigned int x49; BOOL x50; BOOL x51; unsigned long long x52; BOOL x53; unsigned int x54; unsigned int x55; } *_sharedState;
    NSObject<OS_dispatch_semaphore> *_frameDelaySema;
    unsigned int _frameDelayCount;
    BOOL _asleep;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _nubMutex;
    BOOL _paused;
    BOOL _willRestore;
    BOOL _didRestore;
}

@property (nonatomic) _PGDisplay *client;
@property (copy, nonatomic) NSArray *modeList;
@property (readonly, nonatomic) struct { unsigned short x0; unsigned short x1; } cursorPosition;
@property (readonly, nonatomic) BOOL compositorSupportsLiveResize;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)pause;
- (struct { unsigned int x0; char x1[14]; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned int x7; unsigned int x8; float x9; float x10; struct AppleParavirtGPUDisplayColorPoint_t { float x0; float x1; } x11; struct AppleParavirtGPUDisplayColorPoint_t { float x0; float x1; } x12; struct AppleParavirtGPUDisplayColorPoint_t { float x0; float x1; } x13; struct AppleParavirtGPUDisplayColorPoint_t { float x0; float x1; } x14; struct { union { struct { unsigned short x0; unsigned short x1; } x0; _Atomic unsigned int x1; } x0; } x15; unsigned char x16; unsigned char x17; unsigned char x18[6]; unsigned long long x19; unsigned int x20[40]; _Atomic unsigned int x21; _Atomic unsigned int x22; unsigned int x23[62]; unsigned int x24; struct { unsigned short x0; struct { unsigned short x0; unsigned short x1; unsigned int x2; union { unsigned long long x0; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x1; } x3; } x1[128]; } x25; struct APVColorMatrixState { float x0[2][3][4]; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; } x26; unsigned int x27[227]; struct { union { struct { unsigned short x0; unsigned short x1; } x0; _Atomic unsigned int x1; } x0; } x28; BOOL x29; unsigned int x30[62]; unsigned long long x31; unsigned long long x32; unsigned long long x33; unsigned int x34; unsigned int x35; BOOL x36; unsigned short x37; unsigned short x38; unsigned short x39; unsigned short x40; unsigned int x41; unsigned long long x42[10]; unsigned long long x43; unsigned long long x44; unsigned int x45; unsigned int x46; unsigned long long x47; unsigned int x48; unsigned int x49; BOOL x50; BOOL x51; unsigned long long x52; BOOL x53; unsigned int x54; unsigned int x55; } *)sharedState;
- (void)unpause;
- (void)presentSurface:(unsigned int)a0;
- (void)_cursorGlyphVirtualOffset:(unsigned long long)a0 mappedLength:(unsigned long long)a1 stride:(unsigned long long)a2 width:(unsigned short)a3 height:(unsigned short)a4 hotSpotX:(unsigned short)a5 hotSpotY:(unsigned short)a6 sum:(unsigned int)a7;
- (void)_cursorShow:(BOOL)a0;
- (void)_presentMappedSurface:(unsigned long long)a0 gammaTableVirtualOffset:(unsigned long long)a1 gammaTableMappedLength:(unsigned long long)a2 gammaTableEntryCount:(unsigned int)a3 gammaTableSum:(unsigned int)a4;
- (void)_presentSurface:(unsigned int)a0 gammaTableVirtualOffset:(unsigned long long)a1 gammaTableMappedLength:(unsigned long long)a2 gammaTableEntryCount:(unsigned int)a3 gammaTableSum:(unsigned int)a4;
- (void)_sleepState:(BOOL)a0;
- (void)ack:(unsigned int)a0;
- (void)compositorParametersConfigEpoch:(unsigned long long)a0 origin:(struct { unsigned short x0; unsigned short x1; })a1 scaleFactor:(unsigned char)a2;
- (void)copy_GuestBGRA_ToHostBGRA_Task:(id)a0 virtualOffset:(unsigned long long)a1 mappedLength:(unsigned long long)a2 stride:(unsigned long long)a3 buffer:(unsigned int *)a4 width:(unsigned short)a5 height:(unsigned short)a6 sum:(unsigned int)a7;
- (void)copy_GuestBGRA_toHostRGBA_Task:(id)a0 virtualOffset:(unsigned long long)a1 mappedLength:(unsigned long long)a2 stride:(unsigned long long)a3 buffer:(unsigned int *)a4 width:(unsigned short)a5 height:(unsigned short)a6 sum:(unsigned int)a7;
- (void)cursorGlyphVirtualOffset:(unsigned long long)a0 mappedLength:(unsigned long long)a1 stride:(unsigned long long)a2 width:(unsigned short)a3 height:(unsigned short)a4 hotSpotX:(unsigned short)a5 hotSpotY:(unsigned short)a6 sum:(unsigned int)a7;
- (void)cursorShow:(BOOL)a0;
- (void)delayFrames:(unsigned int)a0;
- (void)doorbell;
- (void)finishRestore;
- (float[3][4] *)getDirtyColorMatrix;
- (id)initWithDevice:(id)a0 port:(unsigned long long)a1 sharedStatePage:(unsigned int)a2;
- (void)presentMappedSurface:(unsigned long long)a0 gammaTableVirtualOffset:(unsigned long long)a1 gammaTableMappedLength:(unsigned long long)a2 gammaTableEntryCount:(unsigned int)a3 gammaTableSum:(unsigned int)a4;
- (void)presentSurface:(unsigned int)a0 gammaTableVirtualOffset:(unsigned long long)a1 gammaTableMappedLength:(unsigned long long)a2 gammaTableEntryCount:(unsigned int)a3 gammaTableSum:(unsigned int)a4;
- (void)setGammaTableVirtualOffset:(unsigned long long)a0 mappedLength:(unsigned long long)a1 entryCount:(unsigned int)a2 sum:(unsigned int)a3;
- (void)setProperty:(int)a0 value:(unsigned int *)a1 wordCount:(unsigned int)a2;
- (void)sleepState:(BOOL)a0;
- (void)stateMachineWithCaller:(const char *)a0;
- (BOOL)testUpdateModeList:(const char *)a0;
- (BOOL)testUpdateSettings:(const char *)a0;
- (void)willRestore;

@end
