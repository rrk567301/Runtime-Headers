@class NSMutableArray, NSMutableDictionary;

@interface SCNOrderedDictionary : NSObject {
    NSMutableArray *_keys;
    NSMutableDictionary *_keyValues;
}

- (id)copy;
- (unsigned long long)count;
- (id)allKeys;
- (id)keys;
- (id)objectForKey:(id)a0;
- (id)description;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)allValues;
- (id)dictionary;
- (id)valueForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (id)objectAtIndex:(long long)a0;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void)_setupFrom:(id)a0;
- (void)applyBlock:(id /* block */)a0;
- (void)applyFunction:(void /* function */ *)a0 withContext:(void *)a1;

@end
