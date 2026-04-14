@interface NSStorage : NSObject {
    id _storage;
    long long _hintCapacity;
    unsigned long long _reserved[4];
}

+ (void)initialize;

- (unsigned long long)count;
- (void)setHintCapacity:(unsigned long long)a0;
- (void)insertElement:(void *)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)capacity;
- (void)removeElementAtIndex:(unsigned long long)a0;
- (void *)pointerToElement:(unsigned long long)a0 directlyAccessibleElements:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)addElement:(void *)a0;
- (id)description;
- (id)init;
- (unsigned long long)hintCapacity;
- (void)replaceElementAtIndex:(unsigned long long)a0 withElement:(void *)a1;
- (void)removeElementsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)insertElements:(void *)a0 count:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)enumerateElementsUsingBlock:(id /* block */)a0;
- (unsigned long long)elementSize;
- (struct __CFStorage { } *)CFStorageRef;
- (void)dealloc;
- (void *)elementAtIndex:(unsigned long long)a0;
- (id)initWithElementSize:(unsigned long long)a0 capacity:(unsigned long long)a1;

@end
