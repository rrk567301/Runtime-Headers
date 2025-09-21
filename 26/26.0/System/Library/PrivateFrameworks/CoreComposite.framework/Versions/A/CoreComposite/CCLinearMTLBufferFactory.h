@class CCMTLBufferAllocator;

@interface CCLinearMTLBufferFactory : NSObject {
    CCMTLBufferAllocator *_parent;
    unsigned long long _usage;
    unsigned long long _currentSize;
    struct vector<CCMTLBufferRegion, std::allocator<CCMTLBufferRegion>> { struct *__begin_; struct *__end_; struct *__cap_; } _reserved;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
