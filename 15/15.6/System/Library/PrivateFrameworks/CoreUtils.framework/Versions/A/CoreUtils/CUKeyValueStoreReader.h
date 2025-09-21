@interface CUKeyValueStoreReader : NSObject {
    struct cdb { char *map; int fd; unsigned int size; unsigned int loop; unsigned int khash; unsigned int kpos; unsigned int hpos; unsigned int hslots; unsigned int dpos; unsigned int dlen; } _cdb;
    int _fd;
    Class _keyType;
    Class _valueType;
}

- (void)dealloc;
- (id)init;
- (void)close;
- (id)_readObjectAtOffset:(unsigned int)a0 length:(unsigned int)a1 type:(Class)a2 error:(id *)a3;
- (char)enumerateKeyType:(Class)a0 valueType:(Class)a1 error:(id *)a2 handler:(id /* block */)a3;
- (char)enumerateKeysAndValuesAndReturnError:(id *)a0 handler:(id /* block */)a1;
- (char)enumerateValuesForKey:(id)a0 error:(id *)a1 handler:(id /* block */)a2;
- (char)enumerateValuesForKey:(id)a0 valueType:(Class)a1 error:(id *)a2 handler:(id /* block */)a3;
- (id)initWithKeyType:(Class)a0 valueType:(Class)a1;
- (char)openAtPath:(id)a0 error:(id *)a1;
- (char)valueExistsForKey:(id)a0;
- (id)valueForKey:(id)a0 error:(id *)a1;
- (id)valueForKey:(id)a0 valueType:(Class)a1 error:(id *)a2;

@end
