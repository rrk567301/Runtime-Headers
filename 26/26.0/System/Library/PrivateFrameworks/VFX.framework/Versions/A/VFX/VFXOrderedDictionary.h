@class NSMutableArray, NSMutableDictionary;

@interface VFXOrderedDictionary : NSObject <NSFastEnumeration> {
    NSMutableArray *_keys;
    NSMutableDictionary *_keyValues;
}

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)allKeys;
- (void)dealloc;
- (id)objectForKey:(id)a0;
- (unsigned long long)count;
- (id)keys;
- (id)copy;
- (id)valueForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (id)description;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)dictionary;
- (id)allValues;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)objectAtIndex:(long long)a0;
- (void)_setupFrom:(id)a0;
- (void)applyBlock:(id /* block */)a0;
- (void)applyFunction:(void /* function */ *)a0 withContext:(void *)a1;

@end
