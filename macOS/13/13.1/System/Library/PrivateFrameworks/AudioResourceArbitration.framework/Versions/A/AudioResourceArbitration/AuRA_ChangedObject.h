@class __end_cap_, __end_;

@interface aura_ChangedObject : NSObject <NSCopying>

@property (nonatomic) struct ObjectReference { struct weak_ptr<aura::Object> { struct Object *__ptr_; struct __shared_weak_count *__cntrl_; } mReference; unsigned long long mObjectID; unsigned int mClassID; } object;
@property (nonatomic) struct vector<applesauce::CF::StringRef, std::allocator<applesauce::CF::StringRef>> { struct StringRef *__begin_; struct StringRef *__end_; struct __compressed_pair<applesauce::CF::StringRef *, std::allocator<applesauce::CF::StringRef>> { struct StringRef *__value_; } __end_cap_; } changedNamedProperties;
@property (nonatomic) struct vector<AMCP::Address, std::allocator<AMCP::Address>> { struct Address *__begin_; struct Address *__end_; struct __compressed_pair<AMCP::Address *, std::allocator<AMCP::Address>> { struct Address *__value_; } __end_cap_; } changedCustomProperties;
@property (nonatomic) struct vector<aura::ObjectReference, std::allocator<aura::ObjectReference>> { struct ObjectReference *__begin_; struct ObjectReference *__end_; struct __compressed_pair<aura::ObjectReference *, std::allocator<aura::ObjectReference>> { struct ObjectReference *__value_; } __end_cap_; } createdChildren;
@property (nonatomic) struct vector<aura::ObjectReference, std::allocator<aura::ObjectReference>> { struct ObjectReference *__begin_; struct ObjectReference *__end_; struct __compressed_pair<aura::ObjectReference *, std::allocator<aura::ObjectReference>> { struct ObjectReference *__value_; } __end_cap_; } destroyedChildren;
@property (nonatomic) struct vector<aura_ChangedObject *, std::allocator<aura_ChangedObject *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<aura_ChangedObject *__strong *, std::allocator<aura_ChangedObject *>> { id *__value_; } x1; } changedChildren;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
