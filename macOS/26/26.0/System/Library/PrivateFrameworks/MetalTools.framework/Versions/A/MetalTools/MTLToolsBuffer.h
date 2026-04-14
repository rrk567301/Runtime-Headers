@class NSString;
@protocol MTLHeap, MTLBuffer, MTLDevice;

@interface MTLToolsBuffer : MTLToolsResource <MTLBufferSPI>

@property (retain) id<MTLBuffer> remoteStorageBuffer;
@property (readonly) long long sparseBufferTier;
@property (readonly) struct __IOSurface { } *iosurface;
@property (readonly, nonatomic) unsigned long long resourceIndex;
@property (nonatomic) unsigned long long parentGPUAddress;
@property (nonatomic) unsigned long long parentGPUSize;
@property int responsibleProcess;
@property (readonly) unsigned long long allocationID;
@property (readonly) unsigned long long protectionOptions;
@property (readonly) unsigned long long unfilteredResourceOptions;
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
@property (readonly) unsigned long long length;
@property (readonly) unsigned long long gpuAddress;

- (void)dealloc;
- (id)formattedDescription:(unsigned long long)a0;
- (void)didModifyRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)addDebugMarker:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)replaceBackingWithRanges:(id)a0 readOnly:(BOOL)a1;
- (BOOL)replaceBackingWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 deallocator:(id /* block */)a2;
- (id)newLinearTextureWithDescriptor:(id)a0 offset:(unsigned long long)a1 bytesPerRow:(unsigned long long)a2 bytesPerImage:(unsigned long long)a3;
- (BOOL)detachBacking;
- (void *)contents;
- (id)newRemoteBufferViewForDevice:(id)a0;
- (struct __IOSurface { } *)_aneIOSurface;
- (void)removeAllDebugMarkers;
- (id)newTensorWithDescriptor:(id)a0 offset:(unsigned long long)a1 error:(id *)a2;
- (id)newTextureWithDescriptor:(id)a0 offset:(unsigned long long)a1 bytesPerRow:(unsigned long long)a2;
- (id)newTiledTextureWithDescriptor:(id)a0 offset:(unsigned long long)a1 bytesPerRow:(unsigned long long)a2;

@end
