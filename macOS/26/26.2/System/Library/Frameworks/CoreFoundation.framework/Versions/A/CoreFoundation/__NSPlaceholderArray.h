@interface __NSPlaceholderArray : NSMutableArray

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)initWithContentsOfFile:(id)a0;
- (id)initWithArray:(id)a0;
- (id)initWithArray:(id)a0 copyItems:(BOOL)a1;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)retain;
- (unsigned long long)count;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (unsigned long long)retainCount;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (id)initWithContentsOfURL:(id)a0;
- (oneway void)release;
- (id)init;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)_initByAdoptingBuffer:(id *)a0 count:(unsigned long long)a1 size:(unsigned long long)a2;
- (void)dealloc;

@end
