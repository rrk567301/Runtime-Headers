@interface NSConstantArray : NSArray {
    unsigned long long _count;
    const id *_objects;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)new;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (id)retain;
- (id)mutableCopy;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)objectEnumerator;
- (BOOL)_tryRetain;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)dealloc;
- (BOOL)_isDeallocating;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)autorelease;
- (unsigned long long)count;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)init;

@end
