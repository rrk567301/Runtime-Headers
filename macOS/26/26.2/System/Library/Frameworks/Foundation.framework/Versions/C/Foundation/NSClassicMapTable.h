@interface NSClassicMapTable : NSMapTable {
    struct { void /* function */ *hash; void /* function */ *isEqual; void /* function */ *retain; void /* function */ *release; void /* function */ *describe; void *notAKeyMarker; } _keyCallBacks;
    struct { void /* function */ *retain; void /* function */ *release; void /* function */ *describe; } _valueCallBacks;
    struct __CFBasicHash { } *_ht;
}

- (void)setObject:(id)a0 forKey:(id)a1;
- (void *)existingItemForSetItem:(const void *)a0 forAbsentKey:(const void *)a1;
- (unsigned long long)count;
- (BOOL)isEqual:(id)a0;
- (id)allValues;
- (void)removeAllItems;
- (id)allKeys;
- (void)removeObjectForKey:(id)a0;
- (id)copy;
- (id)description;
- (void)setItem:(const void *)a0 forKnownAbsentKey:(const void *)a1;
- (unsigned long long)getKeys:(const void **)a0 values:(const void **)a1;
- (id)objectForKey:(id)a0;
- (BOOL)mapMember:(const void *)a0 originalKey:(const void **)a1 value:(const void **)a2;
- (void)_reclaim;
- (id)init;
- (void)dealloc;

@end
