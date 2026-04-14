@class CMIExternalMemoryResource, CMIExternalMemoryDescriptor;
@protocol MTLDevice;

@interface _NUStyleEngineMemoryResource : NSObject {
    unsigned long long _sid;
}

@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) CMIExternalMemoryDescriptor *descriptor;
@property (readonly, nonatomic) CMIExternalMemoryResource *resource;

+ (BOOL)usingSharedMemoryResourceForDevice:(id)a0 withDescriptor:(id)a1 perform:(id /* block */)a2;

- (BOOL)setup;
- (id)description;
- (id)initWithDevice:(id)a0 descriptor:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;

@end
