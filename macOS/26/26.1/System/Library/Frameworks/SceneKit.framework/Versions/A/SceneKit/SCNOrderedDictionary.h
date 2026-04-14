@class NSMutableArray, NSMutableDictionary;

@interface SCNOrderedDictionary : NSObject {
    NSMutableArray *_keys;
    NSMutableDictionary *_keyValues;
}

- (id)copy;
- (id)keys;
- (id)valueForKey:(id)a0;
- (void)removeAllObjects;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)allValues;
- (id)dictionary;
- (id)allKeys;
- (id)objectForKey:(id)a0;
- (id)description;
- (id)objectAtIndex:(long long)a0;
- (void)dealloc;
- (void)removeObjectForKey:(id)a0;
- (unsigned long long)count;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)_setupFrom:(id)a0;
- (void)applyBlock:(id /* block */)a0;
- (void)applyFunction:(void /* function */ *)a0 withContext:(void *)a1;

@end
