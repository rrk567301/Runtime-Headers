@class VCPMADResourceManager, VCPMADResource;

@interface VCPMADResourceLock : NSObject {
    VCPMADResourceManager *_resourceManager;
    VCPMADResource *_resource;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;
- (id)initWithResourceManager:(id)a0 andResource:(id)a1;

@end
