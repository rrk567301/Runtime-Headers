@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PGIOSurfaceHostDevice : NSObject {
    unsigned long long _mmioLength;
    id /* block */ _mapMemory;
    id /* block */ _unmapMemory;
    id /* block */ _raiseInterrupt;
    NSObject<OS_dispatch_queue> *_hwQueue;
    NSObject<OS_dispatch_source> *_hwWakeSource;
    unsigned long long _descriptorPageCount;
    unsigned long long _descriptorsPerPage;
    struct IOSurfaceDeviceRingCommand { unsigned int x0; unsigned int x1; int x2; unsigned int x3; } *_ring;
    unsigned long long _ringLength;
    unsigned long long reg_ringBase;
    unsigned long long reg_ringSize;
    unsigned long long reg_descriptorBase;
    unsigned long long reg_ringWrCounter;
    unsigned long long reg_ringRdCounter;
    struct { unsigned long long *surfaceMappedPages; unsigned long long surfaceMappedPageCount; unsigned int baseOffset; struct __IOSurface *hostSurface; BOOL readOnly; } _hostData[8192];
    struct IOSurfaceDescriptorPageTableEntry { unsigned char x0 : 1; unsigned char x1 : 1; unsigned int x2 : 30; } *_descriptorTableEntries;
    struct IOSurfaceDeviceDescriptor *_descriptorPages[4096];
}

+ (id)ioSurfaceHostDevice;

- (void)dealloc;
- (void)reset;
- (id)initWithDescriptor:(id)a0;
- (void)setRingSize:(unsigned long long)a0;
- (void)wakeDevice;
- (id)saveState;
- (id)createPlaneDictionaries:(struct IOSurfaceDeviceDescriptor { struct IOSurfaceDeviceBaseDescriptor { unsigned char x0 : 1; unsigned char x1 : 1; unsigned int x2 : 30; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned char x7 : 8; unsigned int x8 : 24; unsigned char x9 : 8; unsigned int x10 : 24; unsigned int x11; unsigned short x12; unsigned short x13; unsigned char x14; unsigned char x15; unsigned char x16; unsigned char x17; unsigned char x18; unsigned char x19; unsigned char x20; unsigned char x21; unsigned int x22; unsigned int x23[4]; } x0; struct IOSurfaceDevicePlaneDescriptor { unsigned int x0[2]; unsigned int x1; unsigned int x2; unsigned int x3; unsigned char x4 : 8; unsigned int x5 : 24; unsigned char x6 : 8; unsigned int x7 : 24; unsigned int x8; unsigned short x9; unsigned short x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; unsigned char x16; unsigned char x17; unsigned char x18; unsigned char x19[4]; unsigned char x20[4]; unsigned char x21[4]; unsigned char x22[4]; unsigned char x23[4]; } x1[7]; } *)a0;
- (id)createPlaneDictionary:(struct IOSurfaceDevicePlaneDescriptor { unsigned int x0[2]; unsigned int x1; unsigned int x2; unsigned int x3; unsigned char x4 : 8; unsigned int x5 : 24; unsigned char x6 : 8; unsigned int x7 : 24; unsigned int x8; unsigned short x9; unsigned short x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; unsigned char x16; unsigned char x17; unsigned char x18; unsigned char x19[4]; unsigned char x20[4]; unsigned char x21[4]; unsigned char x22[4]; unsigned char x23[4]; } *)a0;
- (id)createSurfaceDictionaryWithDescriptor:(struct IOSurfaceDeviceDescriptor { struct IOSurfaceDeviceBaseDescriptor { unsigned char x0 : 1; unsigned char x1 : 1; unsigned int x2 : 30; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned char x7 : 8; unsigned int x8 : 24; unsigned char x9 : 8; unsigned int x10 : 24; unsigned int x11; unsigned short x12; unsigned short x13; unsigned char x14; unsigned char x15; unsigned char x16; unsigned char x17; unsigned char x18; unsigned char x19; unsigned char x20; unsigned char x21; unsigned int x22; unsigned int x23[4]; } x0; struct IOSurfaceDevicePlaneDescriptor { unsigned int x0[2]; unsigned int x1; unsigned int x2; unsigned int x3; unsigned char x4 : 8; unsigned int x5 : 24; unsigned char x6 : 8; unsigned int x7 : 24; unsigned int x8; unsigned short x9; unsigned short x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; unsigned char x16; unsigned char x17; unsigned char x18; unsigned char x19[4]; unsigned char x20[4]; unsigned char x21[4]; unsigned char x22[4]; unsigned char x23[4]; } x1[7]; } *)a0 hostData:(struct { unsigned long long *x0; unsigned long long x1; unsigned int x2; struct __IOSurface *x3; BOOL x4; } *)a1;
- (int)mapSurface:(unsigned int)a0;
- (unsigned long long)mmioReadAtOffset:(unsigned long long)a0;
- (void)mmioWriteAtOffset:(unsigned long long)a0 value:(unsigned long long)a1;
- (BOOL)restoreWithSavedState:(id)a0 error:(id *)a1;
- (struct __IOSurface { } *)retainSurfaceWithMappingID:(unsigned long long)a0;
- (void)setDescriptorBase:(unsigned long long)a0;
- (void)setRingBase:(unsigned long long)a0;
- (void)teardownSurfaces;
- (int)testSurface:(unsigned int)a0;
- (int)unmapSurface:(unsigned int)a0;

@end
