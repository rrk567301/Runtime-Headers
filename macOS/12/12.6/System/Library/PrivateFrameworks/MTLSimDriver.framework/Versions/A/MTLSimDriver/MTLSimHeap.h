@class NSString, MTLSimDevice;
@protocol MTLDevice;

@interface MTLSimHeap : _MTLHeap <MTLHeap, MTLSerializerHeap> {
    MTLSimDevice *_device;
    unsigned int _heapRef;
    unsigned long long _purgeableState;
}

@property (copy) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long storageMode;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) unsigned long long resourceOptions;
@property (readonly) unsigned long long size;
@property (readonly) unsigned long long usedSize;
@property (readonly) unsigned long long currentAllocatedSize;
@property (readonly) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned int heapRef;
@property (readonly) unsigned int serializerResourceRef;

@end
