@interface NSClassicHashTable : NSHashTable {
    struct { void /* function */ *hash; void /* function */ *isEqual; void /* function */ *retain; void /* function */ *release; void /* function */ *describe; } _callBacks;
    struct __CFBasicHash { } *_ht;
}

- (id)copy;
- (void)removeItem:(const void *)a0;
- (unsigned long long)count;
- (void)insertKnownAbsentItem:(const void *)a0;
- (void *)getItem:(const void *)a0;
- (void)getKeys:(const void **)a0 count:(unsigned long long *)a1;
- (id)description;
- (void)insertItem:(const void *)a0;
- (id)init;
- (void)removeAllItems;
- (id)allObjects;
- (void)addObject:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
