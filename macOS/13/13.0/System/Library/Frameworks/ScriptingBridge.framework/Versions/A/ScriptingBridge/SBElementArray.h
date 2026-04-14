@class SBObject;

@interface SBElementArray : NSMutableArray {
    SBObject *_parent;
    unsigned int _elementCode;
    void *_reserved;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)addObject:(id)a0;
- (void)removeObject:(id)a0;
- (void)removeAllObjects;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)allObjects;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)removeLastObject;
- (id)initWithArray:(id)a0 copyItems:(BOOL)a1;
- (id)initWithContentsOfFile:(id)a0;
- (id)initWithContentsOfURL:(id)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithLocale:(id)a0;
- (id)lastObject;
- (void)makeObjectsPerformSelector:(SEL)a0;
- (void)makeObjectsPerformSelector:(SEL)a0 withObject:(id)a1;
- (id)objectsAtIndexes:(id)a0;
- (id)subarrayWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithObjects:(id)a0;
- (id)arrayByApplyingSelector:(SEL)a0;
- (id)valueForKey:(id)a0;
- (id)_context;
- (id)_parent;
- (id)get;
- (id)filteredArrayUsingPredicate:(id)a0;
- (void)filterUsingPredicate:(id)a0;
- (void)_setParent:(id)a0;
- (id)objectWithID:(id)a0;
- (void)removeObjectWithID:(id)a0;
- (id)objectWithName:(id)a0;
- (Class)elementClass;
- (id)initWithParent:(id)a0 elementCode:(unsigned int)a1;
- (id)objectWithKeyForm:(unsigned int)a0 keyData:(id)a1;
- (id)objectAtLocation:(id)a0;
- (void)removeObjectWithName:(id)a0;
- (id)descriptorForExpression:(id)a0;
- (id)_filteredArrayUsingPredicate:(id)a0;
- (id)arrayByApplyingSelector:(SEL)a0 withObject:(id)a1;
- (unsigned int)elementCode;
- (id)qualifiedSpecifier;

@end
