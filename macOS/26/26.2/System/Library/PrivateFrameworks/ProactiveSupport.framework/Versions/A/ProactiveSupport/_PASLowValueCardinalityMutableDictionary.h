@class NSMutableArray;

@interface _PASLowValueCardinalityMutableDictionary : NSMutableDictionary {
    NSMutableArray *_objectsAndKeys;
    unsigned long long _count;
}

- (void)setObject:(id)a0 forKey:(id)a1;
- (id)allKeysForObject:(id)a0;
- (unsigned long long)count;
- (id)allValues;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (id)objectForKey:(id)a0;
- (id)keyEnumerator;

@end
