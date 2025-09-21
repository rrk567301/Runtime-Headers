@class _PFResultArray;

@interface _PFResultObject : NSDictionary {
    _PFResultArray *_parent_buffer;
    int _cd_rc;
    unsigned int _count;
    unsigned long long _sql_entity_id;
    unsigned long long _primary_key;
}

+ (Class)classForKeyedUnarchiver;

- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)valueAtIndex:(unsigned long long)a0;
- (void)dealloc;
- (id)objectForKey:(id)a0;
- (Class)classForCoder;
- (unsigned long long)count;
- (id)retain;
- (unsigned long long)retainCount;
- (id)keyEnumerator;
- (oneway void)release;
- (void)_setParentBuffer:(id)a0;

@end
