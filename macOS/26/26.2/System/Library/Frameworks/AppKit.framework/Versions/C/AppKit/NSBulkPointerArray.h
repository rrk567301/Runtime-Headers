@class NSPointerFunctions;

@interface NSBulkPointerArray : NSObject <NSCopying> {
    void **_cArray;
    unsigned long long _capacity;
    NSPointerFunctions *_pointerFuncs;
    unsigned long long _pointerFuncOptions;
}

@property (nonatomic) unsigned long long count;

+ (id)strongObjectsPointerArray;
+ (id)weakObjectsPointerArray;
+ (id)pointerArrayWithOptions:(unsigned long long)a0;
+ (void)_setRunningTestRig:(BOOL)a0 minCapacity:(unsigned long long)a1;

- (void)insertPointer:(void *)a0 atIndex:(unsigned long long)a1;
- (void)removePointerAtIndex:(unsigned long long)a0;
- (id)subarrayWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setCapacity:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void)replacePointerAtIndex:(unsigned long long)a0 withPointer:(void *)a1;
- (id)initWithOptions:(unsigned long long)a0;
- (id)init;
- (void)addPointer:(void *)a0;
- (void *)pointerAtIndex:(unsigned long long)a0;
- (void)dealloc;
- (void **)_cArray;
- (void)releasePointer:(void *)a0;
- (unsigned long long)_capacity;
- (BOOL)_pointersAreEqual:(void *)a0 :(void *)a1;
- (void)appendBulkPointerArray:(id)a0;
- (void)clearRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)clearRangeWithoutRelease:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)insertPointers:(void **)a0 numberOfItems:(unsigned long long)a1 atIndexes:(id)a2;
- (void)moveItemFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (BOOL)pointersAreReleased;
- (BOOL)pointersAreRetained;
- (void)releasePointersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removePointersAtIndexes:(id)a0;
- (void *)retainPointer:(void *)a0;

@end
