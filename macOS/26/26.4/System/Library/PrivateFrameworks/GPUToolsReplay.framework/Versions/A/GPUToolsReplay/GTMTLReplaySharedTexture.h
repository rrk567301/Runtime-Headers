@class GTMTLReplaySharedResourcePool;

@interface GTMTLReplaySharedTexture : NSObject {
    unsigned long long _allocatedSize;
    GTMTLReplaySharedResourcePool *_resourcePool;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAllocatedSize:(unsigned long long)a0 resourcePool:(id)a1;

@end
