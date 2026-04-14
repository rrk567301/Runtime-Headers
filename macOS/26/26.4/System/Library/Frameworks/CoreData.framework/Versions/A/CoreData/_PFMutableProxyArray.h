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

- (void)removeObjectAtIndex:(unsigned long long)a0;
- (id)mutableCopy;
- (void)removeLastObject;
- (unsigned long long)indexOfObject:(id)a0;
- (id)subarrayWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)arrayFromObjectIDs;
- (id)newArrayFromObjectIDs;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addObject:(id)a0;
- (unsigned long long)indexOfObjectIdenticalTo:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)valueForKey:(id)a0;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)managedObjectIDAtIndex:(unsigned long long)a0;
- (unsigned long long)indexOfManagedObjectForObjectID:(id)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)copy;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (unsigned long long)count;
- (unsigned long long)indexOfObject:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (Class)classForCoder;
- (unsigned long long)indexOfObjectIdenticalTo:(id)a0;
- (void)dealloc;
- (id)initWithPFArray:(id)a0;
- (id)initWithPFArray:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
