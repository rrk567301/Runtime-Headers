@interface _VZVirtioQueue : NSObject {
    struct unique_ptr<VzCore::Hardware::VirtioQueue, std::default_delete<VzCore::Hardware::VirtioQueue>> { struct VirtioQueue *__ptr_; } _queue;
    struct shared_ptr<Vz::SharedMemoryMap> { struct SharedMemoryMap *__ptr_; struct __shared_weak_count *__cntrl_; } _shared_memory_map;
}

@property (readonly) unsigned short queueIndex;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)nextElement;

@end
