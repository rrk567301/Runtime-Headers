@class NSHashTable, NSLock, CIContext;
@protocol MTLDevice;

@interface VNImageBufferManager : NSObject {
    CIContext *mainCIContext;
    id<MTLDevice> mainCIContextMetalDevice;
    CIContext *lowPriorityCIContext;
    id<MTLDevice> lowPriorityCIContextMetalDevice;
    NSHashTable *activeImageBuffers;
    NSLock *bufferTableLock;
}

+ (id)manager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)purgeAllCaches;
- (id)sharedCIContextWithOptions:(id)a0;

@end
