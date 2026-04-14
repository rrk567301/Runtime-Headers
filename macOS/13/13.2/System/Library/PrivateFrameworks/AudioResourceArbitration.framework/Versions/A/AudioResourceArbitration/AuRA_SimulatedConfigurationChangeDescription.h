@class __end_cap_, __end_;

@interface aura_SimulatedConfigurationChangeDescription : NSObject <NSCopying>

@property (nonatomic) struct vector<aura_SimulatedIOController *, std::allocator<aura_SimulatedIOController *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<aura_SimulatedIOController *__strong *, std::allocator<aura_SimulatedIOController *>> { id *__value_; } x1; } createdIOControllers;
@property (nonatomic) struct vector<std::tuple<std::weak_ptr<aura::IOController>, aura_SimulatedIOController *>, std::allocator<std::tuple<std::weak_ptr<aura::IOController>, aura_SimulatedIOController *>>> { void *__begin_; void *__end_; struct __compressed_pair<std::tuple<std::weak_ptr<aura::IOController>, aura_SimulatedIOController *> *, std::allocator<std::tuple<std::weak_ptr<aura::IOController>, aura_SimulatedIOController *>>> { void *__value_; } __end_cap_; } modifiedIOControllers;
@property (nonatomic) struct vector<std::weak_ptr<aura::IOController>, std::allocator<std::weak_ptr<aura::IOController>>> { void *__begin_; void *__end_; struct __compressed_pair<std::weak_ptr<aura::IOController> *, std::allocator<std::weak_ptr<aura::IOController>>> { void *__value_; } __end_cap_; } destroyedIOControllers;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
