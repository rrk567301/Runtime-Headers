@class NSData, _PASLPDictionaryContext;
@protocol _PASLPReaderProtocol;

@interface _PASLPDictionary : NSDictionary <NSFastEnumeration> {
    id<_PASLPReaderProtocol> _reader;
    _PASLPDictionaryContext *_context;
    NSData *_objectsAndKeys;
}

- (unsigned long long)count;
- (id)allKeys;
- (id)objectForKey:(id)a0;
- (void)getObjects:(id *)a0 andKeys:(id *)a1 count:(unsigned long long)a2;
- (id)initWithLazyPlistReader:(id)a0 context:(id)a1;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (id)init;
- (id)allValues;
- (id)keyEnumerator;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToDictionary:(id)a0;
- (id)_pas_overrideUnlazyDictionary;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)allKeysForObject:(id)a0;

@end
