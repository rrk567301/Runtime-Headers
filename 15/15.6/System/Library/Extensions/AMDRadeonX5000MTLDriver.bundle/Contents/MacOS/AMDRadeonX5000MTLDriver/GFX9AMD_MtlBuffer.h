@class NSString, GFX9AMD_MtlDevice;
@protocol MTLHeap, MTLBuffer, MTLDevice;

@interface GFX9AMD_MtlBuffer : MTLIOAccelBuffer <MTLBuffer> {
    struct AMD_BufferMembersRec { GFX9AMD_MtlDevice *device; void *apiLayerData; } m_members;
}

@property (readonly) unsigned long long length;
@property (readonly) id<MTLBuffer> remoteStorageBuffer;
@property (readonly) unsigned long long gpuAddress;
@property (copy) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly) unsigned long long storageMode;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) unsigned long long resourceOptions;
@property (readonly) id<MTLHeap> heap;
@property (readonly) unsigned long long heapOffset;
@property (readonly) unsigned long long allocatedSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didModifyRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)newRemoteBufferViewForDevice:(id)a0;
- (id)newTextureWithDescriptor:(id)a0 offset:(unsigned long long)a1 bytesPerRow:(unsigned long long)a2;
- (id)newTiledTextureWithDescriptor:(id)a0 offset:(unsigned long long)a1 bytesPerRow:(unsigned long long)a2;
- (id)initWithDevice:(id)a0 pointer:(void *)a1 length:(unsigned long long)a2 options:(unsigned long long)a3 sysMemSize:(unsigned long long)a4 vidMemSize:(unsigned long long)a5 gpuAddress:(unsigned long long)a6 args:(struct IOAccelNewResourceArgs { struct IOAccelNewResourceData { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned long long x6; unsigned long long x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; union { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; } x0; struct { unsigned int x0; unsigned int x1; unsigned long long x2[3]; } x1; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4[2]; } x2; struct { unsigned int x0; unsigned int x1; unsigned long long x2[3]; } x3; } x16; } x0; } *)a7 argsSize:(unsigned int)a8 deallocator:(id /* block */)a9;
- (id)initWithMasterBuffer:(id)a0 heapIndex:(short)a1 bufferIndex:(short)a2 bufferOffset:(unsigned long long)a3 length:(unsigned long long)a4;
- (id)initInternalWithDevice:(id)a0 pointer:(void *)a1 length:(unsigned long long)a2 options:(unsigned long long)a3 deallocator:(id /* block */)a4;
- (id)initInternalWithDevice:(id)a0 pointer:(void *)a1 length:(unsigned long long)a2 options:(unsigned long long)a3 deallocator:(id /* block */)a4 pinnedGPUAddress:(unsigned long long)a5;
- (id)initWithDevice:(id)a0 iosurface:(struct __IOSurface { } *)a1;
- (id)initWithSharedDevice:(id)a0 remoteStorageBuffer:(id)a1;

@end
