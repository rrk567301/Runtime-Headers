@interface NSClassicHashTable : NSHashTable {
    struct { void /* function */ *hash; void /* function */ *isEqual; void /* function */ *retain; void /* function */ *release; void /* function */ *describe; } _callBacks;
    struct __CFBasicHash { } *_ht;
}

- (void *)getItem:(const void *)a0;
- (void)removeItem:(const void *)a0;
- (unsigned long long)count;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)removeAllItems;
- (void)insertItem:(const void *)a0;
- (id)allObjects;
- (void)getKeys:(const void **)a0 count:(unsigned long long *)a1;
- (void)addObject:(id)a0;
- (id)copy;
- (id)description;
- (void)insertKnownAbsentItem:(const void *)a0;
- (id)init;
- (void)dealloc;

@end
