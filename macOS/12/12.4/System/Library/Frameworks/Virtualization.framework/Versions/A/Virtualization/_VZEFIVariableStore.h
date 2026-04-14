@class NSURL;

@interface _VZEFIVariableStore : NSObject {
    struct shared_ptr<Base::VirtualMemory::Handle> { struct Handle *__ptr_; struct __shared_weak_count *__cntrl_; } _memory;
}

@property (readonly, copy) NSURL *URL;

+ (id)initializedVariableStoreWithURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (id).cxx_construct;

@end
