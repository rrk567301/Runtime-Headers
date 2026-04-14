@class NSMutableArray, NSMutableDictionary;

@interface SCNOrderedDictionary : NSObject {
    NSMutableArray *_keys;
    NSMutableDictionary *_keyValues;
}

- (id)copy;
- (void)dealloc;
- (id)description;
- (unsigned long long)count;
- (id)objectAtIndex:(long long)a0;
- (void)removeAllObjects;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)allKeys;
- (id)allValues;
- (id)dictionary;
- (id)keys;
- (id)valueForKey:(id)a0;
- (void)_setupFrom:(id)a0;
- (void)applyFunction:(void /* function */ *)a0 withContext:(void *)a1;
- (void)applyBlock:(id /* block */)a0;

@end
