@interface _NSLineBreakerQueue : NSObject {
    const void **_buf;
    unsigned long long _capacity;
    unsigned long long _start;
    unsigned long long _end;
    unsigned long long _count;
}

- (void)removeAllValues;
- (id)initWithCapacity:(unsigned long long)a0;
- (const void *)valueAtIndex:(unsigned long long)a0;
- (void)enumerateValuesWithBlock:(id /* block */)a0;
- (void)_ensureCapacity:(unsigned long long)a0;
- (id)description;
- (void)dealloc;
- (unsigned long long)count;
- (id)init;
- (void)appendValue:(const void *)a0;
- (void)removeValuesBeforeIndex:(unsigned long long)a0;

@end
