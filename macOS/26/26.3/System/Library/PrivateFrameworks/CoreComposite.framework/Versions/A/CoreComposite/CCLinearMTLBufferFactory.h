@class CCMTLBufferAllocator;

@interface CCLinearMTLBufferFactory : NSObject {
    CCMTLBufferAllocator *_parent;
    unsigned long long _usage;
    unsigned long long _currentSize;
    struct vector<CCMTLBufferRegion, std::allocator<CCMTLBufferRegion>> { struct *__begin_; struct *__end_; struct { struct *__cap_; } ; } _reserved;
}

- (void).cxx_destruct;
- (id).cxx_construct;

@end
