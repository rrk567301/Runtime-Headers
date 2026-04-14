@class NSMutableDictionary;

@interface RBProcessMap : NSObject <NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_valueMap;
}

- (void)removeIdentity:(id)a0;
- (void)enumerateWithBlock:(id /* block */)a0;
- (id)removeValueForIdentity:(id)a0;
- (id)removeValueForIdentity:(id)a0 withPredicate:(id /* block */)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)containsIdentity:(id)a0;
- (void)removeAllObjects;
- (id)allValue;
- (void).cxx_destruct;
- (id)setValue:(id)a0 forIdentity:(id)a1;
- (id)valueForIdentity:(id)a0;
- (id)init;
- (unsigned long long)count;
- (id)allIdentities;
- (id)dictionary;
- (void)addIdentity:(id)a0;

@end
