@class NSString, FigMetalAllocator;
@protocol MTLDeviceSPI;

@interface BWCoreImageIntermediateAllocator : NSObject <CIContextIntermediateAllocator>

@property (readonly) FigMetalAllocator *metalAllocator;
@property (readonly) unsigned long long poolID;
@property (readonly) id<MTLDeviceSPI> device;
@property (readonly) unsigned long long totalSize;
@property (readonly) unsigned long long maxAvailableAllocationSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)bufferForContextIntermediateCommitted:(id)a0;
- (void)bufferForContextIntermediateCompleted:(id)a0;
- (id)newBufferForContextIntermediate:(unsigned long long)a0 usingHint:(BOOL)a1 identifier:(unsigned long long)a2;
- (id)initWithBackend:(id)a0 allocatorBackend:(id)a1 memoryPool:(unsigned long long)a2;

@end
