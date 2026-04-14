@interface __NSPlaceholderArray : NSMutableArray

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)initWithContentsOfURL:(id)a0;
- (unsigned long long)count;
- (unsigned long long)retainCount;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)initWithArray:(id)a0;
- (id)retain;
- (id)init;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)dealloc;
- (id)_initByAdoptingBuffer:(id *)a0 count:(unsigned long long)a1 size:(unsigned long long)a2;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)initWithArray:(id)a0 copyItems:(BOOL)a1;
- (id)initWithContentsOfFile:(id)a0;
- (oneway void)release;

@end
