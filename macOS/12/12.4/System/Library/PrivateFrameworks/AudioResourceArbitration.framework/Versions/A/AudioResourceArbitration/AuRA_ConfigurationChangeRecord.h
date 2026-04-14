@class __end_cap_, __end_;

@interface aura_ConfigurationChangeRecord : NSObject <NSCopying>

@property (nonatomic) unsigned int configurationChangeReason;
@property (nonatomic) struct vector<aura::ObjectReference, std::allocator<aura::ObjectReference>> { struct ObjectReference *__begin_; struct ObjectReference *__end_; struct __compressed_pair<aura::ObjectReference *, std::allocator<aura::ObjectReference>> { struct ObjectReference *__value_; } __end_cap_; } createdObjects;
@property (nonatomic) struct vector<aura::ObjectReference, std::allocator<aura::ObjectReference>> { struct ObjectReference *__begin_; struct ObjectReference *__end_; struct __compressed_pair<aura::ObjectReference *, std::allocator<aura::ObjectReference>> { struct ObjectReference *__value_; } __end_cap_; } destroyedObjects;
@property (nonatomic) struct vector<aura_ChangedObject *, std::allocator<aura_ChangedObject *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<aura_ChangedObject *__strong *, std::allocator<aura_ChangedObject *>> { id *__value_; } x1; } changedObjects;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
