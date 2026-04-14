@class NSMutableArray;

@interface _PASLowValueCardinalityMutableDictionary : NSMutableDictionary {
    NSMutableArray *_objectsAndKeys;
    unsigned long long _count;
}

- (unsigned long long)count;
- (id)objectForKey:(id)a0;
- (id)allValues;
- (id)keyEnumerator;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (id)allKeysForObject:(id)a0;

@end
