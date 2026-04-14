@interface _NSLineBreakerQueue : NSObject {
    const void **_buf;
    unsigned long long _capacity;
    unsigned long long _start;
    unsigned long long _end;
    unsigned long long _count;
}

- (void)removeAllValues;
- (unsigned long long)count;
- (const void *)valueAtIndex:(unsigned long long)a0;
- (void)enumerateValuesWithBlock:(id /* block */)a0;
- (id)description;
- (void)_ensureCapacity:(unsigned long long)a0;
- (id)init;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;
- (void)appendValue:(const void *)a0;
- (void)removeValuesBeforeIndex:(unsigned long long)a0;

@end
