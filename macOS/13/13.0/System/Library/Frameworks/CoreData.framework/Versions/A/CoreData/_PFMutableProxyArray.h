@class NSString, _PFArray, NSMutableArray;

@interface _PFMutableProxyArray : NSMutableArray <PFObjectIDCollection> {
    int _cd_rc;
    unsigned int _editCount;
    unsigned int _offset;
    unsigned int _limit;
    _PFArray *_originalArray;
    NSMutableArray *_updatedObjectsArray;
    struct __CFArray { } *_indicesVeneer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)classForKeyedUnarchiver;

- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (unsigned long long)retainCount;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)a0;
- (unsigned long long)indexOfObject:(id)a0;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)addObject:(id)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (unsigned long long)indexOfObjectIdenticalTo:(id)a0;
- (void)removeLastObject;
- (Class)classForCoder;
- (unsigned long long)indexOfObject:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)indexOfObjectIdenticalTo:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)subarrayWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)valueForKey:(id)a0;
- (id)arrayFromObjectIDs;
- (id)newArrayFromObjectIDs;
- (id)managedObjectIDAtIndex:(unsigned long long)a0;
- (unsigned long long)indexOfManagedObjectForObjectID:(id)a0;
- (id)initWithPFArray:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithPFArray:(id)a0;

@end
