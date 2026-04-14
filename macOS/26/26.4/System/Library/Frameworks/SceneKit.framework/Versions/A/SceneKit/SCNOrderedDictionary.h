@class NSMutableArray, NSMutableDictionary;

@interface SCNOrderedDictionary : NSObject {
    NSMutableArray *_keys;
    NSMutableDictionary *_keyValues;
}

- (void)setValue:(id)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (id)valueForKey:(id)a0;
- (id)keys;
- (void)removeAllObjects;
- (id)allValues;
- (id)copy;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)objectAtIndex:(long long)a0;
- (unsigned long long)count;
- (id)description;
- (id)dictionary;
- (void)dealloc;
- (id)allKeys;
- (void)_setupFrom:(id)a0;
- (void)applyBlock:(id /* block */)a0;
- (void)applyFunction:(void /* function */ *)a0 withContext:(void *)a1;

@end
