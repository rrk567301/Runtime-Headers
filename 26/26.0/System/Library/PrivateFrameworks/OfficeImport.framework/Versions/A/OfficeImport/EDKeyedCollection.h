@class OITSUIntegerKeyDictionary;

@interface EDKeyedCollection : EDCollection {
    OITSUIntegerKeyDictionary *mMap;
}

- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (unsigned long long)addObject:(id)a0;
- (void)removeAllObjects;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void).cxx_destruct;
- (void)insertIntoMap:(id)a0;
- (BOOL)isObjectInMap:(id)a0;
- (BOOL)isOverwritingKeyOK;
- (id)objectWithKey:(long long)a0;
- (void)removeFromMap:(id)a0;

@end
