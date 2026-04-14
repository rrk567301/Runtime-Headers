@class NSObject, NSArray, _PGDevice, _PGDisplay;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface _PGDisplayNub : NSObject {
    _PGDevice *_device;
    unsigned long long _port;
    unsigned int _sharedStatePage;
    struct { unsigned int x0; char x1[14]; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned int x7; unsigned int x8; float x9; float x10; unsigned int x11[53]; _Atomic unsigned int x12; _Atomic unsigned int x13; unsigned int x14[62]; unsigned int x15; struct { unsigned short x0; struct { unsigned short x0; unsigned short x1; unsigned int x2; unsigned long long x3; } x1[128]; } x16; struct APVColorMatrixState { float x0[2][3][4]; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; } x17; unsigned int x18[227]; struct { union { struct { unsigned short x0; unsigned short x1; } x0; _Atomic unsigned int x1; } x0; } x19; BOOL x20; unsigned int x21[62]; unsigned long long x22; unsigned long long x23; unsigned long long x24; unsigned int x25; unsigned int x26; BOOL x27; unsigned short x28; unsigned short x29; unsigned short x30; unsigned short x31; unsigned int x32; unsigned long long x33[10]; unsigned long long x34; unsigned long long x35; unsigned int x36; unsigned int x37; unsigned long long x38; unsigned int x39; unsigned int x40; BOOL x41; BOOL x42; unsigned long long x43; BOOL x44; } *_sharedState;
    NSObject<OS_dispatch_queue> *_serialize;
    NSObject<OS_dispatch_semaphore> *_frameDelaySema;
    unsigned int _frameDelayCount;
    BOOL _asleep;
    struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _clientMutex;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _nubMutex;
}

@property (nonatomic) _PGDisplay *client;
@property (copy, nonatomic) NSArray *modeList;
@property (readonly, nonatomic) struct { unsigned short x0; unsigned short x1; } cursorPosition;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)stateMachine;
- (id)initWithDevice:(id)a0 port:(unsigned long long)a1 sharedStatePage:(unsigned int)a2;
- (void)ack:(unsigned int)a0;
- (void)setGammaTableVirtualOffset:(unsigned long long)a0 mappedLength:(unsigned long long)a1 taskID:(unsigned int)a2 entryCount:(unsigned int)a3 sum:(unsigned int)a4;
- (float[3][4] *)getDirtyColorMatrix;
- (void)presentSurface:(unsigned int)a0 task:(unsigned int)a1 gammaTableVirtualOffset:(unsigned long long)a2 gammaTableMappedLength:(unsigned long long)a3 gammaTableEntryCount:(unsigned int)a4 gammaTableSum:(unsigned int)a5;
- (void)presentSurface:(unsigned int)a0 task:(unsigned int)a1;
- (void)presentMappedSurface:(unsigned long long)a0 task:(unsigned int)a1 gammaTableVirtualOffset:(unsigned long long)a2 gammaTableMappedLength:(unsigned long long)a3 gammaTableEntryCount:(unsigned int)a4 gammaTableSum:(unsigned int)a5;
- (void)setProperty:(int)a0 value:(unsigned int *)a1 wordCount:(unsigned int)a2;
- (void)sleepState:(BOOL)a0;
- (void)delayFrames:(unsigned int)a0;
- (void)copy_GuestBGRA_toHostRGBA_Task:(id)a0 virtualOffset:(unsigned long long)a1 mappedLength:(unsigned long long)a2 stride:(unsigned long long)a3 buffer:(unsigned int *)a4 width:(unsigned short)a5 height:(unsigned short)a6 sum:(unsigned int)a7;
- (void)copy_GuestBGRA_ToHostBGRA_Task:(id)a0 virtualOffset:(unsigned long long)a1 mappedLength:(unsigned long long)a2 stride:(unsigned long long)a3 buffer:(unsigned int *)a4 width:(unsigned short)a5 height:(unsigned short)a6 sum:(unsigned int)a7;
- (void)cursorGlyphVirtualOffset:(unsigned long long)a0 mappedLength:(unsigned long long)a1 taskID:(unsigned int)a2 stride:(unsigned long long)a3 width:(unsigned short)a4 height:(unsigned short)a5 hotSpotX:(unsigned short)a6 hotSpotY:(unsigned short)a7 sum:(unsigned int)a8;
- (void)cursorShow:(BOOL)a0;
- (void)doorbell;
- (BOOL)identicalModeList;
- (BOOL)identicalClient;
- (void)finishRestore;

@end
