@interface CCIndirectComputeCommands : NSObject {
    struct vector<std::variant<void (^)(id<MTLIndirectComputeCommand>), CCIndirectCommandFence>, std::allocator<std::variant<void (^)(id<MTLIndirectComputeCommand>), CCIndirectCommandFence>>> { void *__begin_; void *__end_; struct { void *__cap_; } ; } _computeCommands;
    unsigned long long _computeCommandBlocks;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)addComputeBlock:(id /* block */)a0;
- (void)addFence;

@end
