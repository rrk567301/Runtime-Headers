@class NSString;
@protocol MTLHeap, MTLBuffer, MTLDevice;

@interface MTLToolsBuffer : MTLToolsResource <MTLBuffer>

@property (retain) id<MTLBuffer> remoteStorageBuffer;
@property (readonly) unsigned long long length;
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

- (void)dealloc;
- (unsigned long long)gpuAddress;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)parentGPUAddress;
- (void)setParentGPUAddress:(unsigned long long)a0;
- (unsigned long long)parentGPUSize;
- (void)setParentGPUSize:(unsigned long long)a0;
- (void *)contents;
- (void)didModifyRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)newLinearTextureWithDescriptor:(id)a0 offset:(unsigned long long)a1 bytesPerRow:(unsigned long long)a2 bytesPerImage:(unsigned long long)a3;
- (void)addDebugMarker:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)removeAllDebugMarkers;
- (id)newTextureWithDescriptor:(id)a0 offset:(unsigned long long)a1 bytesPerRow:(unsigned long long)a2;
- (id)newTiledTextureWithDescriptor:(id)a0 offset:(unsigned long long)a1 bytesPerRow:(unsigned long long)a2;
- (struct __IOSurface { } *)iosurface;
- (id)newRemoteBufferViewForDevice:(id)a0;

@end
