@class NSMutableArray, NSMutableDictionary;

@interface SCNOrderedDictionary : NSObject {
    NSMutableArray *_keys;
    NSMutableDictionary *_keyValues;
}

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
