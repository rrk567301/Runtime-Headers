@interface NSConstantArray : NSArray {
    unsigned long long _count;
    const id *_objects;
}

+ (id)new;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)retain;
- (BOOL)_isDeallocating;
- (unsigned long long)count;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)objectEnumerator;
- (BOOL)_tryRetain;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (unsigned long long)retainCount;
- (id)autorelease;
- (id)copy;
- (id)mutableCopy;
- (oneway void)release;
- (id)init;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (void)dealloc;

@end
