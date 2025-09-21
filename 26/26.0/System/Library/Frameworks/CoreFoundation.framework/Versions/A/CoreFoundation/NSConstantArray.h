@interface NSConstantArray : NSArray {
    unsigned long long _count;
    const id *_objects;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)new;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)autorelease;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (BOOL)_isDeallocating;
- (id)mutableCopy;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_tryRetain;
- (unsigned long long)count;
- (id)copy;
- (id)retain;
- (id)init;
- (unsigned long long)retainCount;
- (id)objectEnumerator;
- (oneway void)release;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)objectAtIndex:(unsigned long long)a0;

@end
