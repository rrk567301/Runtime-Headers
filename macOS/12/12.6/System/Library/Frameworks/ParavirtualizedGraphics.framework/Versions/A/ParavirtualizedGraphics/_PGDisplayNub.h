@class NSObject, NSArray, _PGDevice, _PGDisplay;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface _PGDisplayNub : NSObject {
    _PGDevice *_device;
    unsigned long long _port;
    unsigned int _sharedStatePage;
    struct { unsigned int x0; char x1[14]; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned int x7; unsigned int x8; unsigned int x9[55]; _Atomic unsigned int x10; _Atomic unsigned int x11; unsigned int x12[62]; unsigned int x13; struct { unsigned short x0; struct { unsigned short x0; unsigned short x1; unsigned int x2; unsigned long long x3; } x1[128]; } x14; unsigned int x15[252]; struct { union { struct { unsigned short x0; unsigned short x1; } x0; _Atomic unsigned int x1; } x0; } x16; BOOL x17; unsigned int x18[62]; unsigned long long x19; unsigned long long x20; unsigned long long x21; unsigned int x22; unsigned int x23; BOOL x24; unsigned short x25; unsigned short x26; unsigned short x27; unsigned short x28; unsigned int x29; unsigned long long x30[10]; unsigned long long x31; unsigned long long x32; unsigned int x33; unsigned int x34; unsigned long long x35; unsigned int x36; unsigned int x37; BOOL x38; BOOL x39; unsigned long long x40; BOOL x41; } *_sharedState;
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
- (void)doorbell;
- (void)finishRestore;
- (void)setGammaTableVirtualOffset:(unsigned long long)a0 mappedLength:(unsigned long long)a1 taskID:(unsigned int)a2 entryCount:(unsigned int)a3 sum:(unsigned int)a4;
- (void)presentSurface:(unsigned int)a0 task:(unsigned int)a1 gammaTableVirtualOffset:(unsigned long long)a2 gammaTableMappedLength:(unsigned long long)a3 gammaTableEntryCount:(unsigned int)a4 gammaTableSum:(unsigned int)a5;
- (void)copy_GuestBGRA_toHostRGBA_Task:(id)a0 virtualOffset:(unsigned long long)a1 mappedLength:(unsigned long long)a2 stride:(unsigned long long)a3 buffer:(unsigned int *)a4 width:(unsigned short)a5 height:(unsigned short)a6 sum:(unsigned int)a7;
- (void)copy_GuestBGRA_ToHostBGRA_Task:(id)a0 virtualOffset:(unsigned long long)a1 mappedLength:(unsigned long long)a2 stride:(unsigned long long)a3 buffer:(unsigned int *)a4 width:(unsigned short)a5 height:(unsigned short)a6 sum:(unsigned int)a7;
- (BOOL)identicalModeList;
- (void)cursorGlyphVirtualOffset:(unsigned long long)a0 mappedLength:(unsigned long long)a1 taskID:(unsigned int)a2 stride:(unsigned long long)a3 width:(unsigned short)a4 height:(unsigned short)a5 hotSpotX:(unsigned short)a6 hotSpotY:(unsigned short)a7 sum:(unsigned int)a8;
- (void)cursorShow:(BOOL)a0;
- (void)presentMappedSurface:(unsigned long long)a0 task:(unsigned int)a1 gammaTableVirtualOffset:(unsigned long long)a2 gammaTableMappedLength:(unsigned long long)a3 gammaTableEntryCount:(unsigned int)a4 gammaTableSum:(unsigned int)a5;
- (void)sleepState:(BOOL)a0;
- (BOOL)identicalClient;
- (void)ack:(unsigned int)a0;
- (void)presentSurface:(unsigned int)a0 task:(unsigned int)a1;
- (void)delayFrames:(unsigned int)a0;

@end
