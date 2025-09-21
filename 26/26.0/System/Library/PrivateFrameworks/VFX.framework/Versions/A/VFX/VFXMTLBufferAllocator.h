@class NSString, NSMutableArray, VFXFixedSizePage;

@interface VFXMTLBufferAllocator : NSObject {
    struct __CFXGPUDevice { } *_gpuDevice;
    NSString *_name;
    NSMutableArray *_pages;
    VFXFixedSizePage *_currentAllocatorPage;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _allocatorLock;
}

@property (readonly, nonatomic) unsigned long long bufferSize;
@property (readonly, nonatomic) unsigned long long elementSize;

- (void)dealloc;
- (id)_newSubBuffer;
- (id)initWithDevice:(struct __CFXGPUDevice { } *)a0 fixedSizeElement:(unsigned long long)a1 buffersize:(unsigned long long)a2 name:(id)a3;
- (id)newSubBufferWithBytes:(const void *)a0 length:(unsigned long long)a1 renderContext:(id)a2;
- (void)deallocateElementAtOffset:(unsigned long long)a0 inPage:(id)a1;

@end
