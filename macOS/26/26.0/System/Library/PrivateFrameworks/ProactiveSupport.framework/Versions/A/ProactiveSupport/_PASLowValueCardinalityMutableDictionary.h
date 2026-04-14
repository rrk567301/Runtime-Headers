@class NSMutableArray;

@interface _PASLowValueCardinalityMutableDictionary : NSMutableDictionary {
    NSMutableArray *_objectsAndKeys;
    unsigned long long _count;
}

- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (id)allKeysForObject:(id)a0;
- (id)objectForKey:(id)a0;
- (unsigned long long)count;
- (void)removeObjectForKey:(id)a0;
- (id)keyEnumerator;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)allValues;
- (void).cxx_destruct;

@end
