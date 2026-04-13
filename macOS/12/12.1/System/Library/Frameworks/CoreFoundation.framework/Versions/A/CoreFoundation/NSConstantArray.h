@interface NSConstantArray : NSArray {
    unsigned long long _count;
    const id *_objects;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)new;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)autorelease;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopy;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)objectEnumerator;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;

@end
