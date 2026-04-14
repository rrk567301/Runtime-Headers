@class NSMutableArray, NSMutableDictionary;

@interface SCNOrderedDictionary : NSObject {
    NSMutableArray *_keys;
    NSMutableDictionary *_keyValues;
}

- (void)setValue:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (unsigned long long)count;
- (id)dictionary;
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
