@interface NSClassicHashTable : NSHashTable {
    struct { void /* function */ *hash; void /* function */ *isEqual; void /* function */ *retain; void /* function */ *release; void /* function */ *describe; } _callBacks;
    struct __CFBasicHash { } *_ht;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copy;
- (id)description;
- (id)init;
- (unsigned long long)count;
- (void)addObject:(id)a0;
- (id)allObjects;
- (void *)getItem:(const void *)a0;
- (void)insertKnownAbsentItem:(const void *)a0;
- (void)removeItem:(const void *)a0;
- (void)removeAllItems;
- (void)getKeys:(const void **)a0 count:(unsigned long long *)a1;
- (void)insertItem:(const void *)a0;

@end
