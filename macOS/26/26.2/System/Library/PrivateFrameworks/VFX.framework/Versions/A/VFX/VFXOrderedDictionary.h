@class NSMutableArray, NSMutableDictionary;

@interface VFXOrderedDictionary : NSObject <NSFastEnumeration> {
    NSMutableArray *_keys;
    NSMutableDictionary *_keyValues;
}

- (void)setValue:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (unsigned long long)count;
- (id)dictionary;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)valueForKey:(id)a0;
- (id)keys;
- (id)allValues;
- (id)objectAtIndex:(long long)a0;
- (id)allKeys;
- (void)removeObjectForKey:(id)a0;
- (id)copy;
- (id)description;
- (id)objectForKey:(id)a0;
- (void)dealloc;
- (void)removeAllObjects;
- (void)_setupFrom:(id)a0;
- (void)applyBlock:(id /* block */)a0;
- (void)applyFunction:(void /* function */ *)a0 withContext:(void *)a1;

@end
