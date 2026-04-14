@interface NSConstantArray : NSArray {
    unsigned long long _count;
    const id *_objects;
}

+ (id)new;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)copy;
- (id)mutableCopy;
- (unsigned long long)count;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)retainCount;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)autorelease;
- (id)retain;
- (id)init;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)objectEnumerator;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;

@end
