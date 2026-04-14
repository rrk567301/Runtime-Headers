@class VCPMADResourceManager, VCPMADResource;

@interface VCPMADResourceLock : NSObject {
    VCPMADResourceManager *_resourceManager;
    VCPMADResource *_resource;
}

- (void)dealloc;
- (void)reset;
- (void).cxx_destruct;
- (id)initWithResourceManager:(id)a0 andResource:(id)a1;

@end
