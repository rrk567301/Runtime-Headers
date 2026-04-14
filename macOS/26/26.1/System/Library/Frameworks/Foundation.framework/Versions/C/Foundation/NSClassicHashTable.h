@interface NSClassicHashTable : NSHashTable {
    struct { void /* function */ *hash; void /* function */ *isEqual; void /* function */ *retain; void /* function */ *release; void /* function */ *describe; } _callBacks;
    struct __CFBasicHash { } *_ht;
}

- (void)removeItem:(const void *)a0;
- (id)copy;
- (id)allObjects;
- (unsigned long long)hash;
- (void)removeAllItems;
- (void)insertItem:(const void *)a0;
- (id)description;
- (void)dealloc;
- (void)insertKnownAbsentItem:(const void *)a0;
- (void)getKeys:(const void **)a0 count:(unsigned long long *)a1;
- (unsigned long long)count;
- (void *)getItem:(const void *)a0;
- (void)addObject:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
