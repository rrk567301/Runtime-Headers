@class NSString;
@protocol MTLHeap;

@interface MLCDeviceGPUHeapAllocator : NSObject <MPSImageAllocator>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char isDebuggingEnabled;
@property (nonatomic) unsigned long long resourceOffset;
@property (readonly, nonatomic) id<MTLHeap> heap;
@property (readonly, nonatomic) unsigned long long heapSize;
@property (readonly, nonatomic) unsigned long long resourceSize;
@property (readonly, nonatomic) unsigned long long numResources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)imageBatchForCommandBuffer:(id)a0 imageDescriptor:(id)a1 kernel:(id)a2 count:(unsigned long long)a3;
- (id)imageForCommandBuffer:(id)a0 imageDescriptor:(id)a1 kernel:(id)a2;
- (id)allocateBuffer:(unsigned long long)a0;
- (id)initWithDevice:(id)a0 heapSize:(unsigned long long)a1 resourceSize:(unsigned long long)a2 numResources:(unsigned long long)a3;

@end
