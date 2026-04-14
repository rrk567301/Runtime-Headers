@class GTMTLReplaySharedResourcePool;

@interface GTMTLReplaySharedTexture : NSObject {
    unsigned long long _allocatedSize;
    GTMTLReplaySharedResourcePool *_resourcePool;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAllocatedSize:(unsigned long long)a0 resourcePool:(id)a1;

@end
