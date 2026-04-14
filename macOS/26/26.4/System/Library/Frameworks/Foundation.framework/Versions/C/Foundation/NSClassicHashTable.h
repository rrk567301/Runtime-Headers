@interface NSClassicHashTable : NSHashTable {
    struct { void /* function */ *hash; void /* function */ *isEqual; void /* function */ *retain; void /* function */ *release; void /* function */ *describe; } _callBacks;
    struct __CFBasicHash { } *_ht;
}

- (void)removeItem:(const void *)a0;
- (void *)getItem:(const void *)a0;
- (void)addObject:(id)a0;
- (id)allObjects;
- (void)insertKnownAbsentItem:(const void *)a0;
- (void)insertItem:(const void *)a0;
- (BOOL)isEqual:(id)a0;
- (void)getKeys:(const void **)a0 count:(unsigned long long *)a1;
- (id)copy;
- (void)removeAllItems;
- (unsigned long long)hash;
- (id)init;
- (unsigned long long)count;
- (id)description;
- (void)dealloc;

@end
